`timescale 1ns/1ns

module IQ_tb;
    import core_params_pkg::*;
    import core_types_pkg::*;

    logic clk;
    logic rst;
    logic dispatch_valid;
    uop_t dispatch_uop;
    logic wb_valid;
    logic [ROB_W-1:0] wb_tag;
    logic dispatch_ready;
    logic issue_valid;
    uop_t issue_uop;

    uop_t uop_1;
    uop_t uop_2;

    IQ dut (
        .clk(clk),
        .rst(rst),
        .dispatch_valid(dispatch_valid),
        .dispatch_uop(dispatch_uop),
        .wb_valid(wb_valid),
        .wb_tag(wb_tag),
        .dispatch_ready(dispatch_ready),
        .issue_valid(issue_valid),
        .issue_uop(issue_uop)
    );

    initial begin
        $dumpfile("iq.vcd");
        $dumpvars(0, IQ_tb);
    end

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        rst = 1;
        dispatch_valid = 0;
        wb_valid = 0;
        wb_tag = '0;
        dispatch_uop = '0;
        uop_1 = '0;
        uop_2 = '0;

        uop_1.valid = 1'b1;
        uop_1.seq = 32'd1;
        uop_1.src1_tag = 3'd1;
        uop_1.src2_tag = 3'd2;
        uop_1.src1_ready = 1'b0;
        uop_1.src2_ready = 1'b0;

        uop_2.valid = 1'b1;
        uop_2.seq = 32'd2;
        uop_2.src1_tag = 3'd3;
        uop_2.src2_tag = 3'd4;
        uop_2.src1_ready = 1'b0;
        uop_2.src2_ready = 1'b0;

        repeat (3) @(posedge clk);
        rst = 0;

        // Dispatch uop_1
        dispatch_uop = uop_1;
        dispatch_valid = 1;
        @(posedge clk);
        dispatch_valid = 0;
        @(posedge clk);
        if (!dispatch_ready) $fatal("IQ should have space for dispatch");

        // Dispatch uop_2
        dispatch_uop = uop_2;
        dispatch_valid = 1;
        @(posedge clk);
        dispatch_valid = 0;

        // Wake up uop_1 dependencies and check issue
        wb_valid = 1;
        wb_tag = 3'd1;
        @(posedge clk);
        wb_tag = 3'd2;
        @(posedge clk);
        wb_valid = 0;

        // Check a stable condition one cycle later: first dispatched entry should be consumed.
        @(posedge clk);
        if (dut.IQ_array[0].valid) $fatal("Oldest ready uop should have issued");

        #20 $finish;
    end

endmodule
