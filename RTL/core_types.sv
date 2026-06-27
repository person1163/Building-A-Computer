`timescale 1ns/1ns

package core_types_pkg;

  import core_params_pkg::*;

  typedef enum logic [2:0] {
    OP_ALU    = 3'd0,
    OP_LOAD   = 3'd1,
    OP_STORE  = 3'd2,
    OP_BRANCH = 3'd3,
    OP_NOP    = 3'd7
  } op_t;

  typedef struct packed {
    logic             valid;
    logic [31:0]      seq;
    logic [XLEN-1:0]  pc;
    op_t              op;
    logic [ARCH_W-1:0] src1;
    logic [ARCH_W-1:0] src2;
    logic [ARCH_W-1:0] dst;
    logic             src1_valid;
    logic             src2_valid;
    logic             dst_valid;
    logic [ROB_W-1:0] src1_tag;
    logic [ROB_W-1:0] src2_tag;
    logic [ROB_W-1:0] dst_tag;
    logic             src1_tag_valid;
    logic             src2_tag_valid;
    logic             src1_ready;
    logic             src2_ready;
  } uop_t;

  typedef struct packed {
    logic             valid;
    logic             ready;
    logic [31:0]      seq;
    logic [XLEN-1:0]  pc;
    logic [ARCH_W-1:0] dst_arch;
    logic             dst_valid;
  } rob_entry_t;

  typedef struct packed {
    logic             valid;
    logic [ROB_W-1:0] tag;
  } rmt_entry_t;

  typedef struct packed {
    logic             valid;
    uop_t             uop;
  } iq_entry_t;

endpackage