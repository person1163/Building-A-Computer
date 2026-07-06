import core_params_pkg::*;
import core_types_pkg::*;

module datapath(
    input logic clk, rst,
    input logic [31:0] instruction,
    input logic [31:0] pc, seq
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
logic [ROB_W:0] rob_count;

// Add this later in ROB if needed
logic [ROB_W-1:0] rob_retired_tag;

// RMT
logic       rmt_rename_valid;
logic       rmt_src1_valid, rmt_src2_valid;
logic [ROB_W-1:0] rmt_src1_tag, rmt_src2_tag;

// IQ
logic       iq_dispatch_valid, iq_dispatch_ready;
uop_t       iq_dispatch_uop;
logic       iq_issue_valid;
uop_t       iq_issue_uop;

// Global writeback wakeup
logic       wb_valid;
logic [ROB_W-1:0] wb_tag;

ROB u_rob (
  .clk(clk), .rst(rst),
  .alloc_entry(rob_alloc_entry),
  .alloc_valid(rob_alloc_valid),
  .alloc_ready(rob_alloc_ready),
  .alloc_tag(rob_alloc_tag),
  .wb_tag(wb_tag), .wb_valid(wb_valid),
  .retire_valid(rob_retire_valid),
  .retired_entry(rob_retired_entry),
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


always_comb begin

    // Fetch and Decode logic
    current_opcode          = instruction[6:0];
    instruction_uop.dst     = instruction[11:7];
    current_funct3          = instruction[14:12];
    instruction_uop.src1    = instruction[19:15];
    instruction_uop.src2    = instruction[24:20];
    current_funct7          = instruction[31:25];

    instruction_uop.pc      = pc;
    instruction_uop.seq     = seq;

    case(current_opcode):
        default: begin
            instruction_uop = '0;
        end
        // R-type instructions
        7'b0110011: begin
            instruction_uop.src1_valid = 1'b1;
            instruction_uop.src2_valid = 1'b1;
            instruction_uop.dst_valid = 1'b1;
        end
        // I-type instructions
        7'b0010011: begin
            instruction_uop.src1_valid = 1'b1;
            instruction_uop.src2_valid = 1'b0;
            instruction_uop.dst_valid = 1'b1;
        end
        // S-type instructions
        7'b0100011: begin
            instruction_uop.src1_valid = 1'b1;
            instruction_uop.src2_valid = 1'b1;
            instruction_uop.dst_valid = 1'b0;
        end
        // B-type instructions
        7'b1100011: begin
            instruction_uop.src1_valid = 1'b1;
            instruction_uop.src2_valid = 1'b1;
            instruction_uop.dst_valid = 1'b0;
        end
    endcase

    // Rename logic
    rob_alloc_valid       = iq_dispatch_ready;          // simple first cut
    rob_alloc_entry       = '0;
    rob_alloc_entry.valid = 1'b1;
    rob_alloc_entry.ready = 1'b0;
    rob_alloc_entry.seq   = instruction_uop.seq;
    rob_alloc_entry.pc    = instruction_uop.pc;
    rob_alloc_entry.dst_arch = instruction_uop.dst;
    rob_alloc_entry.dst_valid= instruction_uop.dst_valid;

    // RMT update on successful rename
    rmt_rename_valid = rob_alloc_valid && rob_alloc_ready && instruction_uop.dst_valid;

    // Build IQ uop with renamed tags
    iq_dispatch_uop = instruction_uop;
    iq_dispatch_uop.dst_tag = rob_alloc_tag;
    iq_dispatch_uop.src1_tag_valid = instruction_uop.src1_valid && rmt_src1_valid;
    iq_dispatch_uop.src2_tag_valid = instruction_uop.src2_valid && rmt_src2_valid;
    iq_dispatch_uop.src1_tag = rmt_src1_tag;
    iq_dispatch_uop.src2_tag = rmt_src2_tag;
    iq_dispatch_uop.src1_ready = instruction_uop.src1_valid ? !rmt_src1_valid : 1'b1;
    iq_dispatch_uop.src2_ready = instruction_uop.src2_valid ? !rmt_src2_valid : 1'b1;

    iq_dispatch_valid = rob_alloc_valid && rob_alloc_ready;

end

always_ff @(posedge clk) begin
  if (rst) begin
    wb_valid <= 1'b0;
    wb_tag   <= '0;
  end else begin
    // one-cycle fake execute: issued uop writes back next cycle
    wb_valid <= iq_issue_valid && iq_issue_uop.dst_valid;
    wb_tag   <= iq_issue_uop.dst_tag;
  end
end


endmodule