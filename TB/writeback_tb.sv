import core_params_pkg::*;
module writeback_tb();
	logic clk, rst;

	logic exec_valid;
	logic [ROB_W-1:0] exec_tag;
	logic [XLEN-1:0] exec_result;
	logic exec_dst_valid;

	logic alloc_valid;
	logic [ROB_W-1:0] alloc_tag;

	logic dispatch_src1_tag_valid;
	logic [ROB_W-1:0] dispatch_src1_tag;
	logic dispatch_src2_tag_valid;
	logic [ROB_W-1:0] dispatch_src2_tag;

	logic [ROB_W-1:0] issue_src1_tag;
	logic [ROB_W-1:0] issue_src2_tag;
	logic [ROB_W-1:0] retired_tag;

	logic rob_complete_valid;
	logic [ROB_W-1:0] rob_complete_tag;
	logic iq_wakeup_valid;
	logic [ROB_W-1:0] iq_wakeup_tag;
	logic dispatch_src1_ready;
	logic dispatch_src2_ready;
	logic [XLEN-1:0] issue_src1_result;
	logic [XLEN-1:0] issue_src2_result;
	logic [XLEN-1:0] retired_result;

	writeback dut (
		.clk                     (clk),
		.rst                     (rst),
		.exec_valid              (exec_valid),
		.exec_tag                (exec_tag),
		.exec_result             (exec_result),
		.exec_dst_valid          (exec_dst_valid),
		.alloc_valid             (alloc_valid),
		.alloc_tag               (alloc_tag),
		.dispatch_src1_tag_valid (dispatch_src1_tag_valid),
		.dispatch_src1_tag       (dispatch_src1_tag),
		.dispatch_src2_tag_valid (dispatch_src2_tag_valid),
		.dispatch_src2_tag       (dispatch_src2_tag),
		.issue_src1_tag          (issue_src1_tag),
		.issue_src2_tag          (issue_src2_tag),
		.retired_tag             (retired_tag),
		.rob_complete_valid      (rob_complete_valid),
		.rob_complete_tag        (rob_complete_tag),
		.iq_wakeup_valid         (iq_wakeup_valid),
		.iq_wakeup_tag           (iq_wakeup_tag),
		.dispatch_src1_ready     (dispatch_src1_ready),
		.dispatch_src2_ready     (dispatch_src2_ready),
		.issue_src1_result       (issue_src1_result),
		.issue_src2_result       (issue_src2_result),
		.retired_result          (retired_result)
	);

    initial begin
        $dumpfile("writeback.vcd");
        $dumpvars(0, writeback_tb);
    end

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
		rst = 1;
		exec_valid = 0;
		exec_tag = '0;
		exec_result = '0;
		exec_dst_valid = 0;
		alloc_valid = 0;
		alloc_tag = '0;
		dispatch_src1_tag_valid = 0;
		dispatch_src1_tag = '0;
		dispatch_src2_tag_valid = 0;
		dispatch_src2_tag = '0;
		issue_src1_tag = '0;
		issue_src2_tag = '0;
		retired_tag = '0;

		repeat (2) @(negedge clk);
		rst = 0;
		#1;
		assert (dispatch_src1_ready && dispatch_src2_ready)
			else $fatal(1, "Sources without ROB tags should be ready");

		// Allocate tag 3, then confirm an unfinished producer is not ready.
		alloc_valid = 1;
		alloc_tag = ROB_W'(3);
		@(negedge clk);
		alloc_valid = 0;
		dispatch_src1_tag_valid = 1;
		dispatch_src1_tag = ROB_W'(3);
		#1;
		assert (!dispatch_src1_ready)
			else $fatal(1, "Tag 3 became ready before execution completed");

		// Check same-cycle forwarding, then write the result into the table.
		exec_valid = 1;
		exec_dst_valid = 1;
		exec_tag = ROB_W'(3);
		exec_result = 32'h0000_1234;
		#1;
		assert (rob_complete_valid && rob_complete_tag == ROB_W'(3))
			else $fatal(1, "ROB completion did not forward tag 3");
		assert (iq_wakeup_valid && iq_wakeup_tag == ROB_W'(3))
			else $fatal(1, "IQ wakeup did not forward destination tag 3");
		assert (dispatch_src1_ready)
			else $fatal(1, "Dispatch did not forward same-cycle result for tag 3");

		@(negedge clk);
		exec_valid = 0;
		issue_src1_tag = ROB_W'(3);
		issue_src2_tag = ROB_W'(3);
		retired_tag = ROB_W'(3);
		#1;
		assert (dispatch_src1_ready)
			else $fatal(1, "Tag 3 readiness was not retained after writeback");
		assert (issue_src1_result == 32'h0000_1234 &&
		        issue_src2_result == 32'h0000_1234 &&
		        retired_result == 32'h0000_1234)
			else $fatal(1, "Stored result for tag 3 was not returned correctly");

		// Reallocation must clear the old ready bit and result value.
		alloc_valid = 1;
		alloc_tag = ROB_W'(3);
		@(negedge clk);
		alloc_valid = 0;
		#1;
		assert (!dispatch_src1_ready)
			else $fatal(1, "Reused tag 3 retained its previous ready state");
		assert (issue_src1_result == '0 && retired_result == '0)
			else $fatal(1, "Reused tag 3 retained its previous result");

		// Destination-less instructions complete the ROB but do not wake IQ.
		alloc_valid = 1;
		alloc_tag = ROB_W'(4);
		@(negedge clk);
		alloc_valid = 0;
		dispatch_src1_tag = ROB_W'(4);
		issue_src1_tag = ROB_W'(4);
		exec_valid = 1;
		exec_dst_valid = 0;
		exec_tag = ROB_W'(4);
		exec_result = 32'hDEAD_BEEF;
		#1;
		assert (rob_complete_valid && rob_complete_tag == ROB_W'(4))
			else $fatal(1, "Destination-less instruction did not complete in ROB");
		assert (!iq_wakeup_valid)
			else $fatal(1, "Destination-less instruction incorrectly woke IQ");
		assert (!dispatch_src1_ready)
			else $fatal(1, "Destination-less instruction marked a result ready");

		@(negedge clk);
		exec_valid = 0;
		#1;
		assert (!dispatch_src1_ready && issue_src1_result == '0)
			else $fatal(1, "Destination-less instruction wrote a speculative result");

		$display("writeback_tb passed");
		$finish;
    end




endmodule