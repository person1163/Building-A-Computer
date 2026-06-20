`timescale 1ns/1ps

module ROB_tb;
    import core_params_pkg::*;
    import core_types_pkg::*;


    logic clk, rst;

    // Valid entry to allocate
    rob_entry_t alloc_entry,
    logic alloc_valid,
    logic alloc_ready,
    logic [ROB_W-1:0] alloc_tag,
    // Ready tag to be writen back
    logic [ROB_W-1:0] wb_tag,
    logic wb_valid,
    // Retire logic
    logic retire_valid,
    rob_entry_t retired_entry,
    logic [ROB_W:0] count;


    rob_entry_t entry_1;
    entry.valid = 1'b1;
    entry.ready = 1'b0;
    entry.seq = 32'd1;
    entry.pc  = 32'h1000;
    entry.dst_arch = 5'd1;
    entry.dst_valid = 1'b1;

    rob_entry_t entry_2;
    entry.valid = 1'b1;
    entry.ready = 1'b0;
    entry.seq = 32'd2;
    entry.pc  = 32'h1000;
    entry.dst_arch = 5'd1;
    entry.dst_valid = 1'b1;

    rob_entry_t entry_3;
    entry.valid = 1'b1;
    entry.ready = 1'b0;
    entry.seq = 32'd3;
    entry.pc  = 32'h1000;
    entry.dst_arch = 5'd1;
    entry.dst_valid = 1'b1;

    ROB dut (.clk(clk), .rst(rst),
            .alloc_entry(alloc_entry), .alloc_valid(alloc_valid), .alloc_ready(alloc_ready), .alloc_tag(alloc_tag)
            .wb_tag(), .wb_valid(),
            .retire_valid(), .retired_entry(),
            .count());

    initial begin
        $dumpfile("ROB.vcd");
        $dumpvars(0, ROB_tb);
    end

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        rst = 1;
        alloc_valid = 0;

        repeat (3) @(posedge clk);
        rst = 0;

        @(posedge clk); // First entry to allocate
        alloc_entry = entry_1;
        alloc_valid = 1;
        @(posedge clk); // Second entry to allocate
        alloc_entry = entry_2;
        alloc_valid = 1;
        @(posedge clk); // Third entry to allocate
        alloc_entry = entry_3;
        alloc_valid = 1;

        @(posedge clk);
        alloc_valid = 0;
        wb_tag = '0;
        wb_valid = 1;




    end


endmodule