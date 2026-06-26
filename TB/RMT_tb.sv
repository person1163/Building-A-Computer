`timescale 1ns/1ps

module RMT_tb;
  import core_params_pkg::*;
  import core_types_pkg::*;

  logic clk;
  logic rst;

  logic rename_valid;
  logic dst_valid;
  logic [ARCH_W-1:0] src1, src2, dst;
  logic [ROB_W-1:0] new_tag;

  logic commit_valid;
  logic [ARCH_W-1:0] commit_dst;
  logic [ROB_W-1:0] commit_tag;

  logic src1_valid, src2_valid;
  logic [ROB_W-1:0] src1_tag, src2_tag;

  RMT dut (
    .clk(clk),
    .rst(rst),
    .rename_valid(rename_valid),
    .dst_valid(dst_valid),
    .src1(src1),
    .src2(src2),
    .dst(dst),
    .new_tag(new_tag),
    .commit_valid(commit_valid),
    .commit_dst(commit_dst),
    .commit_tag(commit_tag),
    .src1_valid(src1_valid),
    .src2_valid(src2_valid),
    .src1_tag(src1_tag),
    .src2_tag(src2_tag)
  );

  initial begin
    $dumpfile("rmt.vcd");
    $dumpvars(0, RMT_tb);
  end

  initial begin
    clk = 0;
    forever #5 clk = ~clk;
  end

  initial begin
    rst = 1;
    rename_valid = 0;
    dst_valid = 0;
    commit_valid = 0;
    src1 = 0;
    src2 = 0;
    dst = 0;
    new_tag = 0;
    commit_dst = 0;
    commit_tag = 0;

    repeat (3) @(posedge clk);
    rst = 0;

    // rename destination register 5 to tag 3
    src1 = 5;
    src2 = 6;
    dst = 5;
    new_tag = 3;
    rename_valid = 1;
    dst_valid = 1;
    @(posedge clk);

    rename_valid = 0;
    dst_valid = 0;
    @(posedge clk);

    // check that the mapping became visible
    if (!src1_valid) $fatal("RMT mapping should be valid after rename");
    if (src1_tag !== 3) $fatal("Wrong tag assigned after rename");

    // commit the same mapping
    commit_valid = 1;
    commit_dst = 5;
    commit_tag = 3;
    @(posedge clk);

    commit_valid = 0;
    @(posedge clk);

    // check that mapping is cleared
    if (src1_valid) $fatal("RMT mapping should be cleared after commit");
  end
endmodule