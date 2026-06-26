module IQ_tb ();
    logic   clk;
    logic   rst;
    logic   dispatch_valid;
    uop_t   dispatch_uop;
    logic   wb_valid;
    logic   [ROB_W-1:0] wb_tag;
    logic   dispatch_ready;
    logic   issue_valid;
    uop_t   issue_uop;

    uop_t uop_1;


    uop_t uop_2;
    uop_2.seq = 32'd02;
    uop_2.src1_tag = 2'd3;
    uop_2.src2_tag = 2'd4;
    uop_2.src1_ready = 1'b0;
    uop_2.src2_ready = 1'b0;

    

    IQ dut(.clk(clk), .rst(rst),
    .dispatch_valid(dispatch_valid), .dispatch_uop(dispatch_uop),
    .wb_valid(wb_valid), .wb_tag(wb_tag),
    .dispatch_ready(dispatch_ready),
    .issue_valid(issue_valid), .issue_uop(issue_uop));

    initial begin
        $dumpfile("IQ_tb.vcd");
        $dumpvars(0, iq_tb);
    end

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

   initial begin
    rst = 1;
    assert(!dispatch_ready);
    assert(!issue_valid);
    dispatch_valid = 0;
    wb_valid = 0;
    wb_tag = 0;

    repeat (3) @(posedge clk);
    rst = 0;

    // first uop
    uop_1.seq = 32'd1;
    uop_1.src1_tag = 2'd1;
    uop_1.src2_tag = 2'd2;
    uop_1.src1_ready = 1'b0;
    uop_1.src2_ready = 1'b0;

    dispatch_uop = uop_1;
    dispatch_valid = 1;
    @(posedge clk);
    assert(dispatch_ready);
    dispatch_valid = 0;

    // second uop
    uop_2.seq = 32'd2;
    uop_2.src1_tag = 2'd3;
    uop_2.src2_tag = 2'd4;
    uop_2.src1_ready = 1'b0;
    uop_2.src2_ready = 1'b0;

    dispatch_uop = uop_2;
    dispatch_valid = 1;
    @(posedge clk);
    assert(dispatch_ready);
    dispatch_valid = 0;
end

endmodule