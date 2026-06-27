`timescale 1ns/1ns

module ROB_tb;
    import core_params_pkg::*;
    import core_types_pkg::*;

    logic clk;
    logic rst;

    rob_entry_t alloc_entry;
    logic alloc_valid;
    logic alloc_ready;
    logic [ROB_W-1:0] alloc_tag;

    logic [ROB_W-1:0] wb_tag;
    logic wb_valid;

    logic retire_valid;
    rob_entry_t retired_entry;
    logic [ROB_W:0] count;

    rob_entry_t entry_1;
    rob_entry_t entry_2;
    rob_entry_t entry_3;

    ROB dut (
        .clk(clk),
        .rst(rst),
        .alloc_entry(alloc_entry),
        .alloc_valid(alloc_valid),
        .alloc_ready(alloc_ready),
        .alloc_tag(alloc_tag),
        .wb_tag(wb_tag),
        .wb_valid(wb_valid),
        .retire_valid(retire_valid),
        .retired_entry(retired_entry),
        .count(count)
    );

    initial begin
        $dumpfile("ROB.vcd");
        $dumpvars(0, ROB_tb);
    end

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        entry_1.valid = 1'b1;
        entry_1.ready = 1'b0;
        entry_1.seq = 32'd1;
        entry_1.pc  = 32'h1000;
        entry_1.dst_arch = 5'd1;
        entry_1.dst_valid = 1'b1;

        entry_2.valid = 1'b1;
        entry_2.ready = 1'b0;
        entry_2.seq = 32'd2;
        entry_2.pc  = 32'h1000;
        entry_2.dst_arch = 5'd1;
        entry_2.dst_valid = 1'b1;

        entry_3.valid = 1'b1;
        entry_3.ready = 1'b0;
        entry_3.seq = 32'd3;
        entry_3.pc  = 32'h1000;
        entry_3.dst_arch = 5'd1;
        entry_3.dst_valid = 1'b1;

        rst = 1;
        alloc_valid = 0;
        wb_valid = 0;
        wb_tag = '0;
        alloc_entry = '0;

        repeat (3) @(posedge clk);
        rst = 0;

        // First entry to allocate
        alloc_entry = entry_1;
        alloc_valid = 1;
        @(posedge clk);
        alloc_valid = 0;
        @(posedge clk);
        if (!alloc_ready) $fatal("ROB should accept first allocation");
        if (alloc_tag !== 1) $fatal("Next free tag should be 1 after first allocation");
        if (count !== 1) $fatal("Count should be 1 after first allocation");

        // Second entry to allocate
        alloc_entry = entry_2;
        alloc_valid = 1;
        @(posedge clk);
        alloc_valid = 0;
        @(posedge clk);
        if (!alloc_ready) $fatal("ROB should accept second allocation");
        if (alloc_tag !== 2) $fatal("Next free tag should be 2 after second allocation");
        if (count !== 2) $fatal("Count should be 2 after second allocation");

        // Third entry to allocate
        alloc_entry = entry_3;
        alloc_valid = 1;
        @(posedge clk);
        alloc_valid = 0;
        @(posedge clk);
        if (!alloc_ready) $fatal("ROB should accept third allocation");
        if (alloc_tag !== 3) $fatal("Next free tag should be 3 after third allocation");
        if (count !== 3) $fatal("Count should be 3 after third allocation");

        // Mark the head entry ready and retire it
        wb_valid = 1;
        wb_tag = 0;
        @(posedge clk);
        wb_valid = 0;
        @(posedge clk);
        if (count !== 2) $fatal("Count should decrease after retirement");

        #20 $finish;
    end


endmodule