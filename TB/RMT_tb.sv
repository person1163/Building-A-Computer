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
    $dumpvars(0, rmt_tb);
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

    repeat (3) @(posedge clk);
    rst = 0;

    // example stimulus
    @(posedge clk);
    rename_valid = 1;
    dst_valid = 1;
    dst = 5;
    new_tag = 3;
    @(posedge clk);
    rename_valid = 0;
    dst_valid = 0;

    @(posedge clk);
    commit_valid = 1;
    commit_dst = 5;
    commit_tag = 3;
    @(posedge clk);
    commit_valid = 0;

    #20 $finish;
  end
endmodule