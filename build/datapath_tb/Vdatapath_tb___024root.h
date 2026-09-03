// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdatapath_tb.h for the primary calling header

#ifndef VERILATED_VDATAPATH_TB___024ROOT_H_
#define VERILATED_VDATAPATH_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdatapath_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdatapath_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ datapath_tb__DOT__clk;
    CData/*0:0*/ datapath_tb__DOT__rst;
    CData/*0:0*/ datapath_tb__DOT__instruction_valid;
    CData/*0:0*/ datapath_tb__DOT__instruction_ready;
    CData/*6:0*/ datapath_tb__DOT__dut__DOT__current_opcode;
    CData/*0:0*/ datapath_tb__DOT__dut__DOT__rob_alloc_valid;
    CData/*0:0*/ datapath_tb__DOT__dut__DOT__rob_retire_valid;
    CData/*3:0*/ datapath_tb__DOT__dut__DOT__rob_count;
    CData/*0:0*/ datapath_tb__DOT__dut__DOT__rmt_rename_valid;
    CData/*0:0*/ datapath_tb__DOT__dut__DOT__rmt_src1_valid;
    CData/*0:0*/ datapath_tb__DOT__dut__DOT__rmt_src2_valid;
    CData/*2:0*/ datapath_tb__DOT__dut__DOT__rmt_src1_tag;
    CData/*2:0*/ datapath_tb__DOT__dut__DOT__rmt_src2_tag;
    CData/*0:0*/ datapath_tb__DOT__dut__DOT__iq_dispatch_valid;
    CData/*0:0*/ datapath_tb__DOT__dut__DOT__iq_dispatch_ready;
    CData/*0:0*/ datapath_tb__DOT__dut__DOT__iq_issue_valid;
    CData/*0:0*/ datapath_tb__DOT__dut__DOT__exec_valid_q;
    CData/*0:0*/ datapath_tb__DOT__dut__DOT__wb_valid;
    CData/*2:0*/ datapath_tb__DOT__dut__DOT__wb_tag;
    CData/*0:0*/ datapath_tb__DOT__dut__DOT__decode_valid;
    CData/*2:0*/ datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr;
    CData/*2:0*/ datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr;
    CData/*2:0*/ datapath_tb__DOT__dut__DOT__u_rob__DOT__next_head;
    CData/*2:0*/ datapath_tb__DOT__dut__DOT__u_rob__DOT__next_tail;
    CData/*3:0*/ datapath_tb__DOT__dut__DOT__u_rob__DOT__next_count;
    CData/*2:0*/ datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_index;
    CData/*2:0*/ datapath_tb__DOT__dut__DOT__u_iq__DOT__free_index;
    CData/*0:0*/ datapath_tb__DOT__dut__DOT__u_iq__DOT__selected_valid;
    CData/*0:0*/ datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid;
    CData/*0:0*/ __Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src1_valid__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src2_valid__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src1_tag__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src2_tag__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__datapath_tb__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ datapath_tb__DOT__instruction;
    IData/*31:0*/ datapath_tb__DOT__pc;
    IData/*31:0*/ datapath_tb__DOT__seq;
    IData/*31:0*/ datapath_tb__DOT__commit_count;
    IData/*31:0*/ datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlWide<4>/*98:0*/ datapath_tb__DOT__dut__DOT__instruction_uop;
    VlWide<3>/*71:0*/ datapath_tb__DOT__dut__DOT__rob_alloc_entry;
    VlWide<3>/*71:0*/ datapath_tb__DOT__dut__DOT__rob_retired_entry;
    VlWide<4>/*98:0*/ datapath_tb__DOT__dut__DOT__iq_dispatch_uop;
    VlWide<4>/*98:0*/ datapath_tb__DOT__dut__DOT__iq_issue_uop;
    VlWide<4>/*98:0*/ datapath_tb__DOT__dut__DOT__exec_uop_q;
    VlUnpacked<VlWide<3>/*71:0*/, 8> datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array;
    VlUnpacked<CData/*3:0*/, 32> datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt;
    VlUnpacked<VlWide<4>/*99:0*/, 8> datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array;
    VlUnpacked<QData/*63:0*/, 2> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf289938a__0;
    VlTriggerScheduler __VtrigSched_hf2899060__0;

    // INTERNAL VARIABLES
    Vdatapath_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdatapath_tb___024root(Vdatapath_tb__Syms* symsp, const char* namep);
    ~Vdatapath_tb___024root();
    VL_UNCOPYABLE(Vdatapath_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
