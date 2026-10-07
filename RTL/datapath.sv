import core_params_pkg::*;
import core_types_pkg::*;

module datapath(
    input logic clk, rst,
    input logic [31:0] instruction,
    input logic instruction_valid,
    output logic instruction_ready,
    output logic commit_valid,
    output logic [31:0] commit_pc,
    output logic [31:0] commit_seq,
    output logic [ARCH_W-1:0] commit_dst_arch,
    output logic commit_dst_valid
);


    uop_t decoded_uop;
    logic decode_valid;
    logic [31:0] fetch_instruction;
    logic fetch_instruction_valid;
    logic [31:0] fetch_pc, fetch_seq;
    logic pipeline_ready;

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

    // Execute
    issued_uop_t issued_uop;
    logic                  exec_valid;
    logic [XLEN-1:0]       exec_result;
    logic [ROB_W-1:0]      exec_tag;
    logic                  exec_dst_valid;
    logic rob_complete_valid, iq_wakeup_valid;
    logic [ROB_W-1:0] rob_complete_tag, iq_wakeup_tag;
    logic dispatch_src1_ready, dispatch_src2_ready;
    logic [XLEN-1:0] issue_src1_result, issue_src2_result;

    // Register File
    logic [XLEN-1:0] arch_src1_value;
    logic [XLEN-1:0] arch_src2_value;
    logic arch_w_en;
    logic [ARCH_W-1:0] arch_w_reg;
    logic [XLEN-1:0] arch_w_val;
    logic rmt_commit_valid;
    logic [ARCH_W-1:0] rmt_commit_dst;
    logic [ROB_W-1:0] rmt_commit_tag;
    logic [XLEN-1:0] retired_result;







    // Shared structures

    ROB u_rob (
    .clk(clk), .rst(rst),
    .alloc_entry(rob_alloc_entry),
    .alloc_valid(rob_alloc_valid),
    .alloc_ready(rob_alloc_ready),
    .alloc_tag(rob_alloc_tag),
    .wb_tag(rob_complete_tag), .wb_valid(rob_complete_valid),
    .retire_valid(rob_retire_valid),
    .retired_entry(rob_retired_entry),
    .retired_tag(rob_retired_tag),
    .count(rob_count)
    );

    register_files u_register_files (
        .clk             (clk),
        .read_register_1 (iq_issue_uop.src1),
        .read_register_2 (iq_issue_uop.src2),
        .write_register  (arch_w_reg),
        .write_data      (arch_w_val),
        .write_en        (arch_w_en),
        .read_data_1     (arch_src1_value),
        .read_data_2     (arch_src2_value)
    );

    RMT u_rmt (
    .clk(clk), .rst(rst),
    .rename_valid(rmt_rename_valid),
    .dst_valid(decoded_uop.dst_valid),
    .src1(decoded_uop.src1),
    .src2(decoded_uop.src2),
    .dst(decoded_uop.dst),
    .new_tag(rob_alloc_tag),
        .commit_valid(rmt_commit_valid),
        .commit_dst(rmt_commit_dst),
        .commit_tag(rmt_commit_tag),
    .src1_valid(rmt_src1_valid),
    .src2_valid(rmt_src2_valid),
    .src1_tag(rmt_src1_tag),
    .src2_tag(rmt_src2_tag)
    );

    IQ u_iq (
    .clk(clk), .rst(rst),
    .dispatch_valid(iq_dispatch_valid),
    .dispatch_uop(iq_dispatch_uop),
    .wb_valid(iq_wakeup_valid), .wb_tag(iq_wakeup_tag),
    .dispatch_ready(iq_dispatch_ready),
    .issue_valid(iq_issue_valid),
    .issue_uop(iq_issue_uop)
    );

    // Pipeline stages

    fetch u_fetch (
        .clk                   (clk),
        .rst                   (rst),
        .instruction_in        (instruction),
        .instruction_valid_in  (instruction_valid),
        .downstream_ready      (pipeline_ready),
        .instruction_ready     (instruction_ready),
        .instruction_out       (fetch_instruction),
        .instruction_valid_out (fetch_instruction_valid),
        .pc_out                (fetch_pc),
        .seq_out               (fetch_seq)
    );

    decode u_decode (
        .instruction(fetch_instruction),
        .pc(fetch_pc),
        .seq(fetch_seq),
        .instruction_valid(fetch_instruction_valid),
        .decoded_uop(decoded_uop),
        .decode_valid(decode_valid)
    );

    assign pipeline_ready = decode_valid && rob_alloc_ready && iq_dispatch_ready;

    rename u_rename (
        .decoded_uop(decoded_uop),
        .rob_alloc_tag(rob_alloc_tag),
        .rmt_src1_tag(rmt_src1_tag), .rmt_src2_tag(rmt_src2_tag),
        .rmt_src1_valid(rmt_src1_valid), .rmt_src2_valid(rmt_src2_valid),
        .src1_producer_ready(dispatch_src1_ready),
        .src2_producer_ready(dispatch_src2_ready),
        .instruction_valid(fetch_instruction_valid),
        .instruction_ready(pipeline_ready),
        .iq_dispatch_uop(iq_dispatch_uop),
        .rob_alloc_valid(rob_alloc_valid),
        .rob_alloc_entry(rob_alloc_entry),
        .rmt_rename_valid(rmt_rename_valid),
        .iq_dispatch_valid(iq_dispatch_valid)
    );

    always_comb begin
        issued_uop = '0;
        issued_uop.valid = iq_issue_valid;
        issued_uop.seq = iq_issue_uop.seq;
        issued_uop.pc = iq_issue_uop.pc;
        issued_uop.op = iq_issue_uop.op;
        issued_uop.alu_opcode = iq_issue_uop.alu_opcode;
        issued_uop.dst = iq_issue_uop.dst;
        issued_uop.dst_valid = iq_issue_uop.dst_valid;
        issued_uop.dst_tag = iq_issue_uop.dst_tag;

        issued_uop.src1_value = iq_issue_uop.src1_tag_valid
            ? issue_src1_result
            : arch_src1_value;

        if (iq_issue_uop.use_imm) begin
            issued_uop.src2_value = iq_issue_uop.imm;
        end else begin
            issued_uop.src2_value = iq_issue_uop.src2_tag_valid
                ? issue_src2_result
                : arch_src2_value;
        end
    end

    execute u_execute (
        .clk         (clk),
        .rst         (rst),
        .issue_valid (iq_issue_valid),
        .issued_uop  (issued_uop),
        .exec_valid  (exec_valid),
        .result      (exec_result),
        .exec_tag    (exec_tag),
        .exec_dst_valid(exec_dst_valid)
    );

    writeback u_writeback (
        .clk                    (clk),
        .rst                    (rst),
        .exec_valid             (exec_valid),
        .exec_tag               (exec_tag),
        .exec_result            (exec_result),
        .exec_dst_valid         (exec_dst_valid),
        .alloc_valid            (rob_alloc_valid),
        .alloc_tag              (rob_alloc_tag),
        .dispatch_src1_tag_valid(decoded_uop.src1_valid && rmt_src1_valid),
        .dispatch_src1_tag      (rmt_src1_tag),
        .dispatch_src2_tag_valid(decoded_uop.src2_valid && rmt_src2_valid),
        .dispatch_src2_tag      (rmt_src2_tag),
        .issue_src1_tag         (iq_issue_uop.src1_tag),
        .issue_src2_tag         (iq_issue_uop.src2_tag),
        .retired_tag            (rob_retired_tag),
        .rob_complete_valid     (rob_complete_valid),
        .rob_complete_tag       (rob_complete_tag),
        .iq_wakeup_valid        (iq_wakeup_valid),
        .iq_wakeup_tag          (iq_wakeup_tag),
        .dispatch_src1_ready    (dispatch_src1_ready),
        .dispatch_src2_ready    (dispatch_src2_ready),
        .issue_src1_result      (issue_src1_result),
        .issue_src2_result      (issue_src2_result),
        .retired_result         (retired_result)
    );

    retire u_retire (
        .retire_valid      (rob_retire_valid),
        .retired_entry     (rob_retired_entry),
        .retired_tag       (rob_retired_tag),
        .retired_result    (retired_result),
        .commit_valid      (commit_valid),
        .commit_pc         (commit_pc),
        .commit_seq        (commit_seq),
        .commit_dst_arch   (commit_dst_arch),
        .commit_dst_valid  (commit_dst_valid),
        .arch_w_en         (arch_w_en),
        .arch_w_reg        (arch_w_reg),
                .arch_w_val        (arch_w_val),
        .rmt_commit_valid  (rmt_commit_valid),
        .rmt_commit_dst    (rmt_commit_dst),
        .rmt_commit_tag    (rmt_commit_tag)
    );

endmodule