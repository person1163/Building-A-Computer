import core_params_pkg::*;

module writeback (
    input  logic             clk,
    input  logic             rst,

    // Execution completion
    input  logic             exec_valid,
    input  logic [ROB_W-1:0] exec_tag,
    input  logic [XLEN-1:0]  exec_result,
    input  logic             exec_dst_valid,

    // New ROB allocation, for clearing reused-tag readiness
    input  logic             alloc_valid,
    input  logic [ROB_W-1:0] alloc_tag,

    // Rename/dispatch source readiness queries
    input  logic             dispatch_src1_tag_valid,
    input  logic [ROB_W-1:0] dispatch_src1_tag,
    input  logic             dispatch_src2_tag_valid,
    input  logic [ROB_W-1:0] dispatch_src2_tag,

    // IQ issue source-result queries
    input  logic [ROB_W-1:0] issue_src1_tag,
    input  logic [ROB_W-1:0] issue_src2_tag,

    // ROB retirement result query
    input  logic [ROB_W-1:0] retired_tag,

    // Completion sent to ROB
    output logic             rob_complete_valid,
    output logic [ROB_W-1:0] rob_complete_tag,

    // Register-result wakeup sent to IQ
    output logic             iq_wakeup_valid,
    output logic [ROB_W-1:0] iq_wakeup_tag,

    // Results/readiness returned to dispatch and issue
    output logic             dispatch_src1_ready,
    output logic             dispatch_src2_ready,
    output logic [XLEN-1:0]  issue_src1_result,
    output logic [XLEN-1:0]  issue_src2_result,

    // Result returned to retirement
    output logic [XLEN-1:0]  retired_result
);
      logic [XLEN-1:0] speculative_result_file [ROB_ENTRIES-1:0];
      logic result_ready [ROB_ENTRIES-1:0];

      assign rob_complete_valid = exec_valid;
      assign rob_complete_tag = exec_tag;
      assign iq_wakeup_valid = exec_valid && exec_dst_valid;
      assign iq_wakeup_tag = exec_tag;

      assign dispatch_src1_ready =
         !dispatch_src1_tag_valid || result_ready[dispatch_src1_tag] ||
         (exec_valid && exec_dst_valid && exec_tag == dispatch_src1_tag);
      assign dispatch_src2_ready =
         !dispatch_src2_tag_valid || result_ready[dispatch_src2_tag] ||
         (exec_valid && exec_dst_valid && exec_tag == dispatch_src2_tag);

      assign issue_src1_result = speculative_result_file[issue_src1_tag];
      assign issue_src2_result = speculative_result_file[issue_src2_tag];
      assign retired_result = speculative_result_file[retired_tag];

      always_ff @(posedge clk) begin
         if (rst) begin
            for (int i = 0; i < ROB_ENTRIES; i++) begin
               speculative_result_file[i] <= '0;
               result_ready[i] <= 1'b0;
            end
         end else begin
            if (alloc_valid) begin
               speculative_result_file[alloc_tag] <= '0;
               result_ready[alloc_tag] <= 1'b0;
            end

            if (exec_valid && exec_dst_valid) begin
               speculative_result_file[exec_tag] <= exec_result;
               result_ready[exec_tag] <= 1'b1;
            end
         end
      end
endmodule