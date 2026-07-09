import core_params_pkg::*;
import core_types_pkg::*;

module datapath(
    input logic clk, rst,
    input logic [31:0] instruction,
    input logic instruction_valid,
    input logic [31:0] pc, seq,
    output logic instruction_ready
);

uop_t instruction_uop;

logic [6:0] current_opcode;
logic [2:0] current_funct3;
logic [6:0] current_funct7;

// ROB
rob_entry_t rob_alloc_entry;
logic       rob_alloc_valid, rob_alloc_ready;
logic [ROB_W-1:0] rob_alloc_tag;
logic       rob_retire_valid;
rob_entry_t rob_retired_entry;
logic [ROB_W-1:0] rob_retired_tag;
logic [ROB_W:0] rob_count;


// RMT
logic       rmt_rename_valid;
logic       rmt_src1_valid, rmt_src2_valid;
logic [ROB_W-1:0] rmt_src1_tag, rmt_src2_tag;

// IQ
logic       iq_dispatch_valid, iq_dispatch_ready;
uop_t       iq_dispatch_uop;
logic       iq_issue_valid;
uop_t       iq_issue_uop;

logic exec_valid_q;
uop_t exec_uop_q;

// Global writeback wakeup
logic       wb_valid;
logic [ROB_W-1:0] wb_tag;


logic decode_valid;

ROB u_rob (
  .clk(clk), .rst(rst),
  .alloc_entry(rob_alloc_entry),
  .alloc_valid(rob_alloc_valid),
  .alloc_ready(rob_alloc_ready),
  .alloc_tag(rob_alloc_tag),
  .wb_tag(wb_tag), .wb_valid(wb_valid),
  .retire_valid(rob_retire_valid),
  .retired_entry(rob_retired_entry),
  .retired_tag(rob_retired_tag),
  .count(rob_count)
);

RMT u_rmt (
  .clk(clk), .rst(rst),
  .rename_valid(rmt_rename_valid),
  .dst_valid(instruction_uop.dst_valid),
  .src1(instruction_uop.src1),
  .src2(instruction_uop.src2),
  .dst(instruction_uop.dst),
  .new_tag(rob_alloc_tag),
  .commit_valid(rob_retire_valid && rob_retired_entry.dst_valid),
  .commit_dst(rob_retired_entry.dst_arch),
  .commit_tag(rob_retired_tag), // add to ROB interface if missing
  .src1_valid(rmt_src1_valid),
  .src2_valid(rmt_src2_valid),
  .src1_tag(rmt_src1_tag),
  .src2_tag(rmt_src2_tag)
);

IQ u_iq (
  .clk(clk), .rst(rst),
  .dispatch_valid(iq_dispatch_valid),
  .dispatch_uop(iq_dispatch_uop),
  .wb_valid(wb_valid), .wb_tag(wb_tag),
  .dispatch_ready(iq_dispatch_ready),
  .issue_valid(iq_issue_valid),
  .issue_uop(iq_issue_uop)
);

ALU u_alu (
  .a(32'b0),        // placeholder for now, no register file yet
  .b(32'b0),        // placeholder for now
  .alu_opcodes(4'b0),
  .result()         // unused for now
);


always_comb begin
    instruction_uop = '0;
    // Fetch and Decode logic
    current_opcode          = instruction[6:0];
    instruction_uop.dst     = instruction[11:7];
    current_funct3          = instruction[14:12];
    instruction_uop.src1    = instruction[19:15];
    instruction_uop.src2    = instruction[24:20];
    current_funct7          = instruction[31:25];

    instruction_uop.pc      = pc;
    instruction_uop.seq     = seq;

    case(current_opcode)
        default: begin
            decode_valid = 1'b0;
        end
        // R-type instructions
        7'b0110011: begin
            instruction_uop.src1_valid = 1'b1;
            instruction_uop.src2_valid = 1'b1;
            instruction_uop.dst_valid = 1'b1;
            decode_valid = 1'b1;
        end
        // I-type instructions
        7'b0010011: begin
            instruction_uop.src1_valid = 1'b1;
            instruction_uop.src2_valid = 1'b0;
            instruction_uop.dst_valid = 1'b1;
            decode_valid = 1'b1;
        end
        // S-type instructions
        7'b0100011: begin
            instruction_uop.src1_valid = 1'b1;
            instruction_uop.src2_valid = 1'b1;
            instruction_uop.dst_valid = 1'b0;
            decode_valid = 1'b1;
        end
        // B-type instructions
        7'b1100011: begin
            instruction_uop.src1_valid = 1'b1;
            instruction_uop.src2_valid = 1'b1;
            instruction_uop.dst_valid = 1'b0;
            decode_valid = 1'b1;
        end
    endcase

    instruction_ready = decode_valid && rob_alloc_ready && iq_dispatch_ready;

    // Rename logic
    rob_alloc_valid       = instruction_valid && instruction_ready;
    rob_alloc_entry       = '0;
    rob_alloc_entry.valid = 1'b1;
    rob_alloc_entry.ready = 1'b0;
    rob_alloc_entry.seq   = instruction_uop.seq;
    rob_alloc_entry.pc    = instruction_uop.pc;
    rob_alloc_entry.dst_arch = instruction_uop.dst;
    rob_alloc_entry.dst_valid= instruction_uop.dst_valid;

    // RMT update on successful rename
    rmt_rename_valid = instruction_valid && instruction_ready && instruction_uop.dst_valid;

    // Build IQ uop with renamed tags
    iq_dispatch_uop = instruction_uop;
    iq_dispatch_uop.dst_tag = rob_alloc_tag;
    iq_dispatch_uop.src1_tag_valid = instruction_uop.src1_valid && rmt_src1_valid;
    iq_dispatch_uop.src2_tag_valid = instruction_uop.src2_valid && rmt_src2_valid;
    iq_dispatch_uop.src1_tag = rmt_src1_tag;
    iq_dispatch_uop.src2_tag = rmt_src2_tag;
    iq_dispatch_uop.src1_ready = instruction_uop.src1_valid ? !rmt_src1_valid : 1'b1;
    iq_dispatch_uop.src2_ready = instruction_uop.src2_valid ? !rmt_src2_valid : 1'b1;

    iq_dispatch_valid = instruction_valid && instruction_ready;

    

end

always_ff @(posedge clk) begin
  if (rst) begin
    exec_valid_q <= 1'b0;
    exec_uop_q <= '0;
    wb_valid <= 1'b0;
    wb_tag <= '0;
  end else begin
    // Latch issued uop into execute stage
    exec_valid_q <= iq_issue_valid;
    exec_uop_q <= iq_issue_uop;
    
    // Generate writeback from execute stage (one-cycle execute for now)
    wb_valid <= exec_valid_q && exec_uop_q.dst_valid;
    wb_tag <= exec_uop_q.dst_tag;
  end
end


endmodule