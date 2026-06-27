`timescale 1ns/1ns

package core_params_pkg;
    parameter int ARCH_REGS     = 32;
    parameter int XLEN          = 32;
    parameter int ROB_ENTRIES   = 8;   
    parameter int IQ_ENTRIES    = 8;
    parameter int ISSUE_WIDTH   = 1;
    parameter int COMMIT_WIDTH  = 1;
    parameter int ARCH_W        = $clog2(ARCH_REGS);
    parameter int ROB_W         = $clog2(ROB_ENTRIES);
    parameter int IQ_W          = $clog2(IQ_ENTRIES);
endpackage
