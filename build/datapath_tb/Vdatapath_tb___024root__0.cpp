// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdatapath_tb.h for the primary calling header

#include "Vdatapath_tb__pch.h"

VL_ATTR_COLD void Vdatapath_tb___024root___eval_initial__TOP(Vdatapath_tb___024root* vlSelf);
VlCoroutine Vdatapath_tb___024root___eval_initial__TOP__Vtiming__0(Vdatapath_tb___024root* vlSelf);
VlCoroutine Vdatapath_tb___024root___eval_initial__TOP__Vtiming__1(Vdatapath_tb___024root* vlSelf);

void Vdatapath_tb___024root___eval_initial(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval_initial\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdatapath_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vdatapath_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vdatapath_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vdatapath_tb___024root___eval_initial__TOP__Vtiming__0(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.datapath_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/datapath_tb.sv", 
                                             38);
        vlSelfRef.datapath_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.datapath_tb__DOT__clk)));
    }
    co_return;
}

void Vdatapath_tb___024root____VbeforeTrig_hf289938a__0(Vdatapath_tb___024root* vlSelf, const char* __VeventDescription);
void Vdatapath_tb___024root____VbeforeTrig_hf2899060__0(Vdatapath_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vdatapath_tb___024root___eval_initial__TOP__Vtiming__1(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ datapath_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    datapath_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ datapath_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    datapath_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    vlSelfRef.datapath_tb__DOT__rst = 1U;
    vlSelfRef.datapath_tb__DOT__instruction_valid = 0U;
    vlSelfRef.datapath_tb__DOT__instruction = 0U;
    vlSelfRef.datapath_tb__DOT__pc = 0U;
    vlSelfRef.datapath_tb__DOT__seq = 0U;
    datapath_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, datapath_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vdatapath_tb___024root____VbeforeTrig_hf289938a__0(vlSelf, 
                                                           "@(posedge datapath_tb.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hf289938a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge datapath_tb.clk)", 
                                                             "tb/datapath_tb.sv", 
                                                             48);
        datapath_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (datapath_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.datapath_tb__DOT__rst = 0U;
    Vdatapath_tb___024root____VbeforeTrig_hf2899060__0(vlSelf, 
                                                       "@(negedge datapath_tb.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf2899060__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge datapath_tb.clk)", 
                                                         "tb/datapath_tb.sv", 
                                                         52);
    vlSelfRef.datapath_tb__DOT__instruction_valid = 1U;
    vlSelfRef.datapath_tb__DOT__pc = 0U;
    vlSelfRef.datapath_tb__DOT__seq = 0U;
    vlSelfRef.datapath_tb__DOT__instruction = 0x006282b3U;
    while ((1U & (~ (IData)(vlSelfRef.datapath_tb__DOT__instruction_ready)))) {
        Vdatapath_tb___024root____VbeforeTrig_hf289938a__0(vlSelf, 
                                                           "@(posedge datapath_tb.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hf289938a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge datapath_tb.clk)", 
                                                             "tb/datapath_tb.sv", 
                                                             58);
    }
    Vdatapath_tb___024root____VbeforeTrig_hf2899060__0(vlSelf, 
                                                       "@(negedge datapath_tb.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf2899060__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge datapath_tb.clk)", 
                                                         "tb/datapath_tb.sv", 
                                                         62);
    vlSelfRef.datapath_tb__DOT__instruction_valid = 1U;
    vlSelfRef.datapath_tb__DOT__pc = 4U;
    vlSelfRef.datapath_tb__DOT__seq = 1U;
    vlSelfRef.datapath_tb__DOT__instruction = 0x00728333U;
    while ((1U & (~ (IData)(vlSelfRef.datapath_tb__DOT__instruction_ready)))) {
        Vdatapath_tb___024root____VbeforeTrig_hf289938a__0(vlSelf, 
                                                           "@(posedge datapath_tb.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hf289938a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge datapath_tb.clk)", 
                                                             "tb/datapath_tb.sv", 
                                                             68);
    }
    Vdatapath_tb___024root____VbeforeTrig_hf2899060__0(vlSelf, 
                                                       "@(negedge datapath_tb.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf2899060__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge datapath_tb.clk)", 
                                                         "tb/datapath_tb.sv", 
                                                         73);
    vlSelfRef.datapath_tb__DOT__instruction_valid = 1U;
    vlSelfRef.datapath_tb__DOT__pc = 8U;
    vlSelfRef.datapath_tb__DOT__seq = 2U;
    vlSelfRef.datapath_tb__DOT__instruction = 0x001102b3U;
    while ((1U & (~ (IData)(vlSelfRef.datapath_tb__DOT__instruction_ready)))) {
        Vdatapath_tb___024root____VbeforeTrig_hf289938a__0(vlSelf, 
                                                           "@(posedge datapath_tb.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hf289938a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge datapath_tb.clk)", 
                                                             "tb/datapath_tb.sv", 
                                                             79);
    }
    Vdatapath_tb___024root____VbeforeTrig_hf2899060__0(vlSelf, 
                                                       "@(negedge datapath_tb.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf2899060__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge datapath_tb.clk)", 
                                                         "tb/datapath_tb.sv", 
                                                         82);
    vlSelfRef.datapath_tb__DOT__instruction_valid = 1U;
    vlSelfRef.datapath_tb__DOT__pc = 0x0000000cU;
    vlSelfRef.datapath_tb__DOT__seq = 3U;
    vlSelfRef.datapath_tb__DOT__instruction = 0x00320333U;
    while ((1U & (~ (IData)(vlSelfRef.datapath_tb__DOT__instruction_ready)))) {
        Vdatapath_tb___024root____VbeforeTrig_hf289938a__0(vlSelf, 
                                                           "@(posedge datapath_tb.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hf289938a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge datapath_tb.clk)", 
                                                             "tb/datapath_tb.sv", 
                                                             88);
    }
    Vdatapath_tb___024root____VbeforeTrig_hf2899060__0(vlSelf, 
                                                       "@(negedge datapath_tb.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf2899060__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge datapath_tb.clk)", 
                                                         "tb/datapath_tb.sv", 
                                                         92);
    vlSelfRef.datapath_tb__DOT__instruction_valid = 1U;
    vlSelfRef.datapath_tb__DOT__pc = 0x00000010U;
    vlSelfRef.datapath_tb__DOT__seq = 4U;
    vlSelfRef.datapath_tb__DOT__instruction = 0x001102b3U;
    while ((1U & (~ (IData)(vlSelfRef.datapath_tb__DOT__instruction_ready)))) {
        Vdatapath_tb___024root____VbeforeTrig_hf289938a__0(vlSelf, 
                                                           "@(posedge datapath_tb.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hf289938a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge datapath_tb.clk)", 
                                                             "tb/datapath_tb.sv", 
                                                             98);
    }
    Vdatapath_tb___024root____VbeforeTrig_hf2899060__0(vlSelf, 
                                                       "@(negedge datapath_tb.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf2899060__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge datapath_tb.clk)", 
                                                         "tb/datapath_tb.sv", 
                                                         101);
    vlSelfRef.datapath_tb__DOT__instruction_valid = 1U;
    vlSelfRef.datapath_tb__DOT__pc = 0x00000014U;
    vlSelfRef.datapath_tb__DOT__seq = 5U;
    vlSelfRef.datapath_tb__DOT__instruction = 0x003202b3U;
    while ((1U & (~ (IData)(vlSelfRef.datapath_tb__DOT__instruction_ready)))) {
        Vdatapath_tb___024root____VbeforeTrig_hf289938a__0(vlSelf, 
                                                           "@(posedge datapath_tb.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hf289938a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge datapath_tb.clk)", 
                                                             "tb/datapath_tb.sv", 
                                                             107);
    }
    Vdatapath_tb___024root____VbeforeTrig_hf2899060__0(vlSelf, 
                                                       "@(negedge datapath_tb.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf2899060__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge datapath_tb.clk)", 
                                                         "tb/datapath_tb.sv", 
                                                         111);
    vlSelfRef.datapath_tb__DOT__instruction_valid = 1U;
    vlSelfRef.datapath_tb__DOT__pc = 0x00000018U;
    vlSelfRef.datapath_tb__DOT__seq = 6U;
    vlSelfRef.datapath_tb__DOT__instruction = 0x001102b3U;
    while ((1U & (~ (IData)(vlSelfRef.datapath_tb__DOT__instruction_ready)))) {
        Vdatapath_tb___024root____VbeforeTrig_hf289938a__0(vlSelf, 
                                                           "@(posedge datapath_tb.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hf289938a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge datapath_tb.clk)", 
                                                             "tb/datapath_tb.sv", 
                                                             117);
    }
    Vdatapath_tb___024root____VbeforeTrig_hf2899060__0(vlSelf, 
                                                       "@(negedge datapath_tb.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf2899060__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge datapath_tb.clk)", 
                                                         "tb/datapath_tb.sv", 
                                                         120);
    vlSelfRef.datapath_tb__DOT__instruction_valid = 1U;
    vlSelfRef.datapath_tb__DOT__pc = 0x0000001cU;
    vlSelfRef.datapath_tb__DOT__seq = 7U;
    vlSelfRef.datapath_tb__DOT__instruction = 0x00328333U;
    while ((1U & (~ (IData)(vlSelfRef.datapath_tb__DOT__instruction_ready)))) {
        Vdatapath_tb___024root____VbeforeTrig_hf289938a__0(vlSelf, 
                                                           "@(posedge datapath_tb.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hf289938a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge datapath_tb.clk)", 
                                                             "tb/datapath_tb.sv", 
                                                             126);
    }
    Vdatapath_tb___024root____VbeforeTrig_hf2899060__0(vlSelf, 
                                                       "@(negedge datapath_tb.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf2899060__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge datapath_tb.clk)", 
                                                         "tb/datapath_tb.sv", 
                                                         129);
    vlSelfRef.datapath_tb__DOT__instruction_valid = 1U;
    vlSelfRef.datapath_tb__DOT__pc = 0x00000020U;
    vlSelfRef.datapath_tb__DOT__seq = 8U;
    vlSelfRef.datapath_tb__DOT__instruction = 0x004303b3U;
    while ((1U & (~ (IData)(vlSelfRef.datapath_tb__DOT__instruction_ready)))) {
        Vdatapath_tb___024root____VbeforeTrig_hf289938a__0(vlSelf, 
                                                           "@(posedge datapath_tb.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hf289938a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge datapath_tb.clk)", 
                                                             "tb/datapath_tb.sv", 
                                                             135);
    }
    Vdatapath_tb___024root____VbeforeTrig_hf2899060__0(vlSelf, 
                                                       "@(negedge datapath_tb.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf2899060__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge datapath_tb.clk)", 
                                                         "tb/datapath_tb.sv", 
                                                         138);
    vlSelfRef.datapath_tb__DOT__instruction_valid = 1U;
    vlSelfRef.datapath_tb__DOT__pc = 0x00000024U;
    vlSelfRef.datapath_tb__DOT__seq = 9U;
    vlSelfRef.datapath_tb__DOT__instruction = 0x0062a023U;
    while ((1U & (~ (IData)(vlSelfRef.datapath_tb__DOT__instruction_ready)))) {
        Vdatapath_tb___024root____VbeforeTrig_hf289938a__0(vlSelf, 
                                                           "@(posedge datapath_tb.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hf289938a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge datapath_tb.clk)", 
                                                             "tb/datapath_tb.sv", 
                                                             151);
    }
    Vdatapath_tb___024root____VbeforeTrig_hf289938a__0(vlSelf, 
                                                       "@(posedge datapath_tb.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf289938a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge datapath_tb.clk)", 
                                                         "tb/datapath_tb.sv", 
                                                         152);
    Vdatapath_tb___024root____VbeforeTrig_hf2899060__0(vlSelf, 
                                                       "@(negedge datapath_tb.clk)");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf2899060__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge datapath_tb.clk)", 
                                                         "tb/datapath_tb.sv", 
                                                         154);
    vlSelfRef.datapath_tb__DOT__instruction_valid = 0U;
    datapath_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x00000014U;
    while (VL_LTS_III(32, 0U, datapath_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vdatapath_tb___024root____VbeforeTrig_hf289938a__0(vlSelf, 
                                                           "@(posedge datapath_tb.clk)");
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_hf289938a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge datapath_tb.clk)", 
                                                             "tb/datapath_tb.sv", 
                                                             157);
        datapath_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (datapath_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((0x0000000aU != vlSelfRef.datapath_tb__DOT__commit_count)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:160: Assertion failed in %Ndatapath_tb: %10#\n",0,
                     64,VL_TIME_UNITED_Q(1),-9,vlSymsp->name(),
                     32,vlSelfRef.datapath_tb__DOT__commit_count);
        VL_STOP_MT("tb/datapath_tb.sv", 160, "", false);
    }
    VL_FINISH_MT("tb/datapath_tb.sv", 162, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void Vdatapath_tb___024root___eval_triggers_vec__act(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval_triggers_vec__act\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((~ (IData)(vlSelfRef.datapath_tb__DOT__clk)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__clk__0)) 
                                                       << 6U) 
                                                      | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 5U) 
                                                         | (((IData)(vlSelfRef.datapath_tb__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__clk__0))) 
                                                            << 4U))) 
                                                     | (((((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src2_tag) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src2_tag__0)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src1_tag) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src1_tag__0)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src2_valid) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src2_valid__0)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src1_valid) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src1_valid__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src1_valid__0 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src1_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src2_valid__0 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src2_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src1_tag__0 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src1_tag;
    vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src2_tag__0 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src2_tag;
    vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__clk__0 
        = vlSelfRef.datapath_tb__DOT__clk;
}

bool Vdatapath_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vdatapath_tb___024root___act_comb__TOP__0(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___act_comb__TOP__0\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] = 0U;
    vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[1U] = 0U;
    vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[2U] = 0U;
    vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[3U] = 0U;
    vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode 
        = (0x0000007fU & vlSelfRef.datapath_tb__DOT__instruction);
    vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
        = ((0x8000ffffU & vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U]) 
           | (((0x00007c00U & (vlSelfRef.datapath_tb__DOT__instruction 
                               >> 5U)) | ((0x000003e0U 
                                           & (vlSelfRef.datapath_tb__DOT__instruction 
                                              >> 0x0000000fU)) 
                                          | (0x0000001fU 
                                             & (vlSelfRef.datapath_tb__DOT__instruction 
                                                >> 7U)))) 
              << 0x00000010U));
    vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[1U] 
        = ((3U & vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[1U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.datapath_tb__DOT__seq)) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.datapath_tb__DOT__pc)))) 
              << 2U));
    vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[2U] 
        = (((IData)((((QData)((IData)(vlSelfRef.datapath_tb__DOT__seq)) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.datapath_tb__DOT__pc)))) 
            >> 0x0000001eU) | ((IData)(((((QData)((IData)(vlSelfRef.datapath_tb__DOT__seq)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.datapath_tb__DOT__pc))) 
                                        >> 0x00000020U)) 
                               << 2U));
    vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[3U] 
        = ((4U & vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[3U]) 
           | (7U & ((IData)(((((QData)((IData)(vlSelfRef.datapath_tb__DOT__seq)) 
                               << 0x00000020U) | (QData)((IData)(vlSelfRef.datapath_tb__DOT__pc))) 
                             >> 0x00000020U)) >> 0x0000001eU)));
    if ((0x00000040U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
        if ((0x00000020U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
            if ((0x00000010U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
                vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
            } else if ((8U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
                vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
            } else if ((4U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
                vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
            } else if ((2U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
                if ((1U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
                    vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                        = (0x0000c000U | (0xffff1fffU 
                                          & vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U]));
                    vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 1U;
                } else {
                    vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
                }
            } else {
                vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
            }
        } else {
            vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
        if ((0x00000010U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
            if ((8U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
                vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
            } else if ((4U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
                vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
            } else if ((2U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
                if ((1U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
                    vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                        = (0x0000e000U | vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U]);
                    vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 1U;
                } else {
                    vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
                }
            } else {
                vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
            }
        } else if ((8U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
            vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
        } else if ((4U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
            vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
        } else if ((2U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
            if ((1U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
                vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                    = (0x0000c000U | (0xffff1fffU & vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U]));
                vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 1U;
            } else {
                vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
            }
        } else {
            vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
        if ((8U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
            vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
        } else if ((4U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
            vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
        } else if ((2U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
            if ((1U & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode))) {
                vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                    = (0x0000a000U | (0xffff1fffU & vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U]));
                vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 1U;
            } else {
                vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
            }
        } else {
            vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
        }
    } else {
        vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid = 0U;
    }
    vlSelfRef.datapath_tb__DOT__instruction_ready = 
        (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid) 
          & (8U != (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count))) 
         & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_ready));
    vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_valid 
        = ((IData)(vlSelfRef.datapath_tb__DOT__instruction_valid) 
           & (IData)(vlSelfRef.datapath_tb__DOT__instruction_ready));
    vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_entry[0U] 
        = (((IData)((((QData)((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[3U])) 
                      << 0x0000003eU) | (((QData)((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[2U])) 
                                          << 0x0000001eU) 
                                         | ((QData)((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[1U])) 
                                            >> 2U)))) 
            << 6U) | ((0x0000003eU & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                      >> 0x0000000fU)) 
                      | (1U & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                               >> 0x0000000dU))));
    vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_entry[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[3U])) 
                      << 0x0000003eU) | (((QData)((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[2U])) 
                                          << 0x0000001eU) 
                                         | ((QData)((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[1U])) 
                                            >> 2U)))) 
            >> 0x0000001aU) | ((IData)(((((QData)((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[3U])) 
                                          << 0x0000003eU) 
                                         | (((QData)((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[2U])) 
                                             << 0x0000001eU) 
                                            | ((QData)((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[1U])) 
                                               >> 2U))) 
                                        >> 0x00000020U)) 
                               << 6U));
    vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_entry[2U] 
        = ((0x000000c0U & vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_entry[2U]) 
           | (0x000000ffU & ((IData)(((((QData)((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[3U])) 
                                        << 0x0000003eU) 
                                       | (((QData)((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[2U])) 
                                           << 0x0000001eU) 
                                          | ((QData)((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[1U])) 
                                             >> 2U))) 
                                      >> 0x00000020U)) 
                             >> 0x0000001aU)));
    vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_entry[2U] 
        = (0x00000080U | (0x0000003fU & vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_entry[2U]));
    vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_rename_valid 
        = (((IData)(vlSelfRef.datapath_tb__DOT__instruction_valid) 
            & (IData)(vlSelfRef.datapath_tb__DOT__instruction_ready)) 
           & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
              >> 0x0000000dU));
    vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[0U] 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U];
    vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[1U] 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[1U];
    vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[2U] 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[2U];
    vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[3U] 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[3U];
    vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[0U] 
        = ((0xffffff87U & vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[0U]) 
           | (0xfffffff8U & (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr) 
                              << 4U) | (0x000ffff8U 
                                        & ((vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                            >> 0x0000000cU) 
                                           & ((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src1_valid) 
                                              << 3U))))));
    vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[0U] 
        = ((0xfffffffbU & vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[0U]) 
           | (0x000ffffcU & ((vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                              >> 0x0000000cU) & ((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src2_valid) 
                                                 << 2U))));
    vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[0U] 
        = ((0xffffe07fU & vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[0U]) 
           | (0xffffff80U & (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src1_tag) 
                              << 0x0000000aU) | ((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src2_tag) 
                                                 << 7U))));
    vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[0U] 
        = ((0xfffffffdU & vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[0U]) 
           | (2U & (((~ (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                         >> 0x0000000fU)) | (~ (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src1_valid))) 
                    << 1U)));
    vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[0U] 
        = ((0xfffffffeU & vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[0U]) 
           | (1U & ((~ (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                        >> 0x0000000eU)) | (~ (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src2_valid)))));
    vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_valid 
        = ((IData)(vlSelfRef.datapath_tb__DOT__instruction_valid) 
           & (IData)(vlSelfRef.datapath_tb__DOT__instruction_ready));
    vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__next_tail 
        = (7U & (((8U != (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count)) 
                  & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_valid))
                  ? ((7U == (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr))
                      ? 0U : ((IData)(1U) + (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr)))
                  : (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr)));
    vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__next_count 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count;
    if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_valid) 
         & (8U != (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count)))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__next_count 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__next_count)));
    }
    if ((((0U != (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count)) 
          & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array
             [vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr][2U] 
             >> 6U)) & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array
                        [vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr][2U] 
                        >> 7U))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__next_count 
            = (0x0000000fU & ((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__next_count) 
                              - (IData)(1U)));
    }
    vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src1_valid 
        = (1U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt
                 [(0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                  >> 0x0000001aU))] 
                 >> 3U));
    vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src2_valid 
        = (1U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt
                 [(0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                  >> 0x00000015U))] 
                 >> 3U));
    vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src2_tag 
        = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt
           [(0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                            >> 0x00000015U))]);
    vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src1_tag 
        = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt
           [(0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                            >> 0x0000001aU))]);
}

void Vdatapath_tb___024root___eval_act(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval_act\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000005fULL & vlSelfRef.__VactTriggered[0U])) {
        Vdatapath_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vdatapath_tb___024root___nba_sequent__TOP__0(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___nba_sequent__TOP__0\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__datapath_tb__DOT__commit_count;
    __Vdly__datapath_tb__DOT__commit_count = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v0;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v0 = 0;
    VlWide<3>/*71:0*/ __VdlyVal__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8;
    VL_ZERO_W(72, __VdlyVal__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8);
    CData/*2:0*/ __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8;
    __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8 = 0;
    CData/*2:0*/ __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v9;
    __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v9 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v9;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v9 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v0;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v0 = 0;
    CData/*4:0*/ __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v64;
    __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v64 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v64;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v64 = 0;
    CData/*2:0*/ __VdlyVal__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v65;
    __VdlyVal__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v65 = 0;
    CData/*4:0*/ __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v65;
    __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v65 = 0;
    CData/*4:0*/ __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v66;
    __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v66 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v66;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v66 = 0;
    CData/*4:0*/ __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v67;
    __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v67 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v0;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v0 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v16;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v16 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v17;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v17 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v18;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v18 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v19;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v19 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v20;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v20 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v21;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v21 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v22;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v22 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v23;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v23 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v24;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v24 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v25;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v25 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v26;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v26 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v27;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v27 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v28;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v28 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v29;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v29 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v30;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v30 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v31;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v31 = 0;
    CData/*2:0*/ __VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v32;
    __VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v32 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v32;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v32 = 0;
    VlWide<4>/*98:0*/ __VdlyVal__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33;
    VL_ZERO_W(99, __VdlyVal__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33);
    CData/*2:0*/ __VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33;
    __VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33 = 0;
    CData/*2:0*/ __VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v34;
    __VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v34 = 0;
    CData/*0:0*/ __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v34;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v34 = 0;
    // Body
    __Vdly__datapath_tb__DOT__commit_count = vlSelfRef.datapath_tb__DOT__commit_count;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v0 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v64 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v66 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v0 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v9 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v0 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v16 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v17 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v18 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v19 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v20 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v21 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v22 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v23 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v24 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v25 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v26 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v27 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v28 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v29 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v30 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v31 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v32 = 0U;
    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v34 = 0U;
    if (vlSelfRef.datapath_tb__DOT__rst) {
        __Vdly__datapath_tb__DOT__commit_count = 0U;
    } else if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retire_valid) 
                & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                   >> 7U))) {
        if (((((((((0U == vlSelfRef.datapath_tb__DOT__commit_count) 
                   | (1U == vlSelfRef.datapath_tb__DOT__commit_count)) 
                  | (2U == vlSelfRef.datapath_tb__DOT__commit_count)) 
                 | (3U == vlSelfRef.datapath_tb__DOT__commit_count)) 
                | (4U == vlSelfRef.datapath_tb__DOT__commit_count)) 
               | (5U == vlSelfRef.datapath_tb__DOT__commit_count)) 
              | (6U == vlSelfRef.datapath_tb__DOT__commit_count)) 
             | (7U == vlSelfRef.datapath_tb__DOT__commit_count))) {
            if ((0U == vlSelfRef.datapath_tb__DOT__commit_count)) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((0U != ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                              << 0x0000001aU) 
                                             | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                                >> 6U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:172: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                            >> 6U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 172, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((0U != ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                              << 0x0000001aU) 
                                             | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                                >> 6U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:173: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                            >> 6U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 173, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((1U & (~ vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U]))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:174: Assertion failed in %Ndatapath_tb\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name());
                        VL_STOP_MT("tb/datapath_tb.sv", 174, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((5U != (0x0000001fU 
                                             & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                                >> 1U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:175: Assertion failed in %Ndatapath_tb: %2#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     5,(0x0000001fU 
                                        & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                           >> 1U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 175, "", false);
                    }
                }
            } else if ((1U == vlSelfRef.datapath_tb__DOT__commit_count)) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((1U != ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                              << 0x0000001aU) 
                                             | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                                >> 6U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:179: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                            >> 6U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 179, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((4U != ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                              << 0x0000001aU) 
                                             | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                                >> 6U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:180: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                            >> 6U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 180, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((1U & (~ vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U]))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:181: Assertion failed in %Ndatapath_tb\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name());
                        VL_STOP_MT("tb/datapath_tb.sv", 181, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((6U != (0x0000001fU 
                                             & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                                >> 1U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:182: Assertion failed in %Ndatapath_tb: %2#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     5,(0x0000001fU 
                                        & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                           >> 1U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 182, "", false);
                    }
                }
            } else if ((2U == vlSelfRef.datapath_tb__DOT__commit_count)) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((2U != ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                              << 0x0000001aU) 
                                             | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                                >> 6U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:186: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                            >> 6U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 186, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((8U != ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                              << 0x0000001aU) 
                                             | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                                >> 6U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:187: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                            >> 6U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 187, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((1U & (~ vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U]))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:188: Assertion failed in %Ndatapath_tb\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name());
                        VL_STOP_MT("tb/datapath_tb.sv", 188, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((5U != (0x0000001fU 
                                             & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                                >> 1U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:189: Assertion failed in %Ndatapath_tb: %2#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     5,(0x0000001fU 
                                        & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                           >> 1U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 189, "", false);
                    }
                }
            } else if ((3U == vlSelfRef.datapath_tb__DOT__commit_count)) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((3U != ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                              << 0x0000001aU) 
                                             | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                                >> 6U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:193: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                            >> 6U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 193, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((0x0000000cU != 
                                      ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                        << 0x0000001aU) 
                                       | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                          >> 6U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:194: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                            >> 6U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 194, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((1U & (~ vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U]))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:195: Assertion failed in %Ndatapath_tb\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name());
                        VL_STOP_MT("tb/datapath_tb.sv", 195, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((6U != (0x0000001fU 
                                             & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                                >> 1U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:196: Assertion failed in %Ndatapath_tb: %2#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     5,(0x0000001fU 
                                        & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                           >> 1U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 196, "", false);
                    }
                }
            } else if ((4U == vlSelfRef.datapath_tb__DOT__commit_count)) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((4U != ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                              << 0x0000001aU) 
                                             | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                                >> 6U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:200: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                            >> 6U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 200, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((0x00000010U != 
                                      ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                        << 0x0000001aU) 
                                       | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                          >> 6U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:201: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                            >> 6U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 201, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((1U & (~ vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U]))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:202: Assertion failed in %Ndatapath_tb\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name());
                        VL_STOP_MT("tb/datapath_tb.sv", 202, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((5U != (0x0000001fU 
                                             & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                                >> 1U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:203: Assertion failed in %Ndatapath_tb: %2#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     5,(0x0000001fU 
                                        & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                           >> 1U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 203, "", false);
                    }
                }
            } else if ((5U == vlSelfRef.datapath_tb__DOT__commit_count)) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((5U != ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                              << 0x0000001aU) 
                                             | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                                >> 6U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:207: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                            >> 6U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 207, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((0x00000014U != 
                                      ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                        << 0x0000001aU) 
                                       | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                          >> 6U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:208: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                            >> 6U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 208, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((1U & (~ vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U]))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:209: Assertion failed in %Ndatapath_tb\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name());
                        VL_STOP_MT("tb/datapath_tb.sv", 209, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((5U != (0x0000001fU 
                                             & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                                >> 1U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:210: Assertion failed in %Ndatapath_tb: %2#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     5,(0x0000001fU 
                                        & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                           >> 1U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 210, "", false);
                    }
                }
            } else if ((6U == vlSelfRef.datapath_tb__DOT__commit_count)) {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((6U != ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                              << 0x0000001aU) 
                                             | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                                >> 6U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:214: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                            >> 6U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 214, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((0x00000018U != 
                                      ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                        << 0x0000001aU) 
                                       | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                          >> 6U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:215: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                            >> 6U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 215, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((1U & (~ vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U]))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:216: Assertion failed in %Ndatapath_tb\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name());
                        VL_STOP_MT("tb/datapath_tb.sv", 216, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((5U != (0x0000001fU 
                                             & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                                >> 1U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:217: Assertion failed in %Ndatapath_tb: %2#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     5,(0x0000001fU 
                                        & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                           >> 1U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 217, "", false);
                    }
                }
            } else {
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((7U != ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                              << 0x0000001aU) 
                                             | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                                >> 6U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:221: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                            >> 6U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 221, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((0x0000001cU != 
                                      ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                        << 0x0000001aU) 
                                       | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                          >> 6U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:222: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                            >> 6U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 222, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((1U & (~ vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U]))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:223: Assertion failed in %Ndatapath_tb\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name());
                        VL_STOP_MT("tb/datapath_tb.sv", 223, "", false);
                    }
                }
                if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                    if (VL_UNLIKELY(((6U != (0x0000001fU 
                                             & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                                >> 1U)))))) {
                        VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:224: Assertion failed in %Ndatapath_tb: %2#\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -9,vlSymsp->name(),
                                     5,(0x0000001fU 
                                        & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                           >> 1U)));
                        VL_STOP_MT("tb/datapath_tb.sv", 224, "", false);
                    }
                }
            }
        } else if ((8U == vlSelfRef.datapath_tb__DOT__commit_count)) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((8U != ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                            >> 6U)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:228: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -9,vlSymsp->name(),
                                 32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                      << 0x0000001aU) 
                                     | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                        >> 6U)));
                    VL_STOP_MT("tb/datapath_tb.sv", 228, "", false);
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0x00000020U != ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                                   << 0x0000001aU) 
                                                  | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                                     >> 6U)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:229: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -9,vlSymsp->name(),
                                 32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                      << 0x0000001aU) 
                                     | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                        >> 6U)));
                    VL_STOP_MT("tb/datapath_tb.sv", 229, "", false);
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & (~ vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U]))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:230: Assertion failed in %Ndatapath_tb\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("tb/datapath_tb.sv", 230, "", false);
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((7U != (0x0000001fU 
                                         & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                            >> 1U)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:231: Assertion failed in %Ndatapath_tb: %2#\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -9,vlSymsp->name(),
                                 5,(0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                                   >> 1U)));
                    VL_STOP_MT("tb/datapath_tb.sv", 231, "", false);
                }
            }
        } else if (VL_LIKELY(((9U == vlSelfRef.datapath_tb__DOT__commit_count)))) {
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((9U != ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                          << 0x0000001aU) 
                                         | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                            >> 6U)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:236: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -9,vlSymsp->name(),
                                 32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                      << 0x0000001aU) 
                                     | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                        >> 6U)));
                    VL_STOP_MT("tb/datapath_tb.sv", 236, "", false);
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((0x00000024U != ((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                                   << 0x0000001aU) 
                                                  | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                                     >> 6U)))))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:238: Assertion failed in %Ndatapath_tb: %10#\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -9,vlSymsp->name(),
                                 32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                      << 0x0000001aU) 
                                     | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                        >> 6U)));
                    VL_STOP_MT("tb/datapath_tb.sv", 238, "", false);
                }
            }
            if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
                if (VL_UNLIKELY(((1U & vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U])))) {
                    VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:240: Assertion failed in %Ndatapath_tb\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -9,vlSymsp->name());
                    VL_STOP_MT("tb/datapath_tb.sv", 240, "", false);
                }
            }
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: datapath_tb.sv:243: Assertion failed in %Ndatapath_tb: %10#%10#\n",0,
                         64,VL_TIME_UNITED_Q(1),-9,
                         vlSymsp->name(),32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                              << 0x0000001aU) 
                                             | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                                >> 6U)),
                         32,((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                              << 0x0000001aU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                                 >> 6U)));
            VL_STOP_MT("tb/datapath_tb.sv", 243, "", false);
        }
        __Vdly__datapath_tb__DOT__commit_count = ((IData)(1U) 
                                                  + vlSelfRef.datapath_tb__DOT__commit_count);
    }
    if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_valid) 
         & (8U != (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count)))) {
        __VdlyVal__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8[0U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_entry[0U];
        __VdlyVal__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8[1U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_entry[1U];
        __VdlyVal__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8[2U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_entry[2U];
        __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr;
        __VdlySet__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8 = 1U;
    }
    if (vlSelfRef.datapath_tb__DOT__rst) {
        __VdlySet__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v0 = 1U;
        __VdlySet__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v0 = 1U;
        __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v0 = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr = 0U;
    } else {
        if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_rename_valid) 
             & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                >> 0x0000000dU))) {
            __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v64 
                = (0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                  >> 0x00000010U));
            __VdlySet__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v64 = 1U;
            __VdlyVal__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v65 
                = vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr;
            __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v65 
                = (0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                  >> 0x00000010U));
        }
        if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retire_valid) 
             & vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U])) {
            if (((vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt
                  [(0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                   >> 1U))] >> 3U) 
                 & ((7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt
                     [(0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                      >> 1U))]) == (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr)))) {
                __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v66 
                    = (0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                      >> 1U));
                __VdlySet__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v66 = 1U;
                __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v67 
                    = (0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                      >> 1U));
            }
        }
        if (vlSelfRef.datapath_tb__DOT__dut__DOT__wb_valid) {
            if ((8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][3U])) {
                if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag) 
                     == (7U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][0U] 
                               >> 0x0000000aU)))) {
                    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v16 = 1U;
                }
                if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag) 
                     == (7U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][0U] 
                               >> 7U)))) {
                    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v17 = 1U;
                }
            }
            if ((8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][3U])) {
                if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag) 
                     == (7U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][0U] 
                               >> 0x0000000aU)))) {
                    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v18 = 1U;
                }
                if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag) 
                     == (7U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][0U] 
                               >> 7U)))) {
                    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v19 = 1U;
                }
            }
            if ((8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][3U])) {
                if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag) 
                     == (7U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][0U] 
                               >> 0x0000000aU)))) {
                    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v20 = 1U;
                }
                if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag) 
                     == (7U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][0U] 
                               >> 7U)))) {
                    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v21 = 1U;
                }
            }
            if ((8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][3U])) {
                if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag) 
                     == (7U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][0U] 
                               >> 0x0000000aU)))) {
                    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v22 = 1U;
                }
                if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag) 
                     == (7U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][0U] 
                               >> 7U)))) {
                    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v23 = 1U;
                }
            }
            if ((8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][3U])) {
                if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag) 
                     == (7U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][0U] 
                               >> 0x0000000aU)))) {
                    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v24 = 1U;
                }
                if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag) 
                     == (7U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][0U] 
                               >> 7U)))) {
                    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v25 = 1U;
                }
            }
            if ((8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][3U])) {
                if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag) 
                     == (7U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][0U] 
                               >> 0x0000000aU)))) {
                    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v26 = 1U;
                }
                if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag) 
                     == (7U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][0U] 
                               >> 7U)))) {
                    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v27 = 1U;
                }
            }
            if ((8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][3U])) {
                if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag) 
                     == (7U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][0U] 
                               >> 0x0000000aU)))) {
                    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v28 = 1U;
                }
                if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag) 
                     == (7U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][0U] 
                               >> 7U)))) {
                    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v29 = 1U;
                }
            }
            if ((8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][3U])) {
                if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag) 
                     == (7U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][0U] 
                               >> 0x0000000aU)))) {
                    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v30 = 1U;
                }
                if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag) 
                     == (7U & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][0U] 
                               >> 7U)))) {
                    __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v31 = 1U;
                }
            }
        }
        if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_valid) 
             & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_ready))) {
            __VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v32 
                = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_index;
            __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v32 = 1U;
            __VdlyVal__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33[0U] 
                = vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[0U];
            __VdlyVal__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33[1U] 
                = vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[1U];
            __VdlyVal__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33[2U] 
                = vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[2U];
            __VdlyVal__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33[3U] 
                = vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop[3U];
            __VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33 
                = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_index;
        }
        if (vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_valid) {
            __VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v34 
                = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_index;
            __VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v34 = 1U;
        }
    }
    if (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_valid) 
         & (8U != (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count)))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__next_tail;
    }
    if (vlSelfRef.datapath_tb__DOT__dut__DOT__wb_valid) {
        __VdlyDim0__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v9 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag;
        __VdlySet__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v9 = 1U;
    }
    if (vlSelfRef.datapath_tb__DOT__rst) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__exec_uop_q[0U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__exec_uop_q[1U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__exec_uop_q[2U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__exec_uop_q[3U] = 0U;
    } else {
        vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag 
            = (7U & (vlSelfRef.datapath_tb__DOT__dut__DOT__exec_uop_q[0U] 
                     >> 4U));
        vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__next_count;
        vlSelfRef.datapath_tb__DOT__dut__DOT__exec_uop_q[0U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[0U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__exec_uop_q[1U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[1U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__exec_uop_q[2U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[2U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__exec_uop_q[3U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[3U];
    }
    vlSelfRef.datapath_tb__DOT__commit_count = __Vdly__datapath_tb__DOT__commit_count;
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v0) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[0U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[0U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[0U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[0U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[1U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[1U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[1U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[1U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[2U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[2U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[2U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[2U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[3U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[4U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[4U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[4U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[4U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[5U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[5U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[5U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[5U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[6U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[6U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[6U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[6U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[7U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[7U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[7U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[7U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[8U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[8U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[8U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[8U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[9U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[9U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[9U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[9U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[10U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[10U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[10U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[10U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[11U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[11U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[11U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[11U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[12U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[12U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[12U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[12U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[13U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[13U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[13U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[13U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[14U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[14U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[14U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[14U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[15U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[15U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[15U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[15U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[16U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[16U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[16U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[16U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[17U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[17U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[17U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[17U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[18U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[18U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[18U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[18U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[19U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[19U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[19U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[19U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[20U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[20U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[20U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[20U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[21U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[21U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[21U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[21U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[22U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[22U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[22U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[22U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[23U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[23U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[23U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[23U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[24U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[24U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[24U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[24U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[25U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[25U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[25U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[25U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[26U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[26U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[26U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[26U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[27U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[27U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[27U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[27U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[28U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[28U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[28U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[28U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[29U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[29U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[29U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[29U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[30U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[30U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[30U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[30U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[31U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[31U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[31U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[31U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v64) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[__VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v64] 
            = (8U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt
               [__VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v64]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[__VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v65] 
            = ((8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt
                [__VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v65]) 
               | (IData)(__VdlyVal__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v65));
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v66) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[__VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v66] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt
               [__VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v66]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[__VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v67] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt
               [__VdlyDim0__datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt__v67]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v0) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[7U][0U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[7U][1U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[7U][2U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[6U][0U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[6U][1U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[6U][2U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[5U][0U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[5U][1U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[5U][2U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[4U][0U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[4U][1U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[4U][2U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[3U][0U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[3U][1U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[3U][2U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[2U][0U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[2U][1U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[2U][2U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[1U][0U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[1U][1U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[1U][2U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[0U][0U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[0U][1U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[0U][2U] = 0U;
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[__VdlyDim0__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8][0U] 
            = __VdlyVal__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8[0U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[__VdlyDim0__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8][1U] 
            = __VdlyVal__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8[1U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[__VdlyDim0__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8][2U] 
            = __VdlyVal__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v8[2U];
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v9) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[__VdlyDim0__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v9][2U] 
            = (0x00000040U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array
               [__VdlyDim0__datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array__v9][2U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v0) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][0U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][1U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][2U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][3U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][0U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][1U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][2U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][3U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][0U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][1U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][2U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][3U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][0U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][1U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][2U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][3U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][0U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][1U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][2U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][3U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][0U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][1U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][2U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][3U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][0U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][1U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][2U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][3U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][0U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][1U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][2U] = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][3U] 
            = (8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][3U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v16) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][0U] 
            = (2U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][0U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v17) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][0U] 
            = (1U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][0U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v18) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][0U] 
            = (2U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][0U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v19) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][0U] 
            = (1U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][0U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v20) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][0U] 
            = (2U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][0U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v21) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][0U] 
            = (1U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][0U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v22) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][0U] 
            = (2U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][0U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v23) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][0U] 
            = (1U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][0U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v24) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][0U] 
            = (2U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][0U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v25) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][0U] 
            = (1U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][0U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v26) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][0U] 
            = (2U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][0U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v27) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][0U] 
            = (1U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][0U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v28) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][0U] 
            = (2U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][0U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v29) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][0U] 
            = (1U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][0U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v30) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][0U] 
            = (2U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][0U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v31) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][0U] 
            = (1U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][0U]);
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v32) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[__VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v32][3U] 
            = (8U | vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array
               [__VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v32][3U]);
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[__VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33][0U] 
            = __VdlyVal__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33[0U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[__VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33][1U] 
            = __VdlyVal__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33[1U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[__VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33][2U] 
            = __VdlyVal__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33[2U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[__VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33][3U] 
            = ((8U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array
                [__VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33][3U]) 
               | (0x0000000fU & __VdlyVal__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v33[3U]));
    }
    if (__VdlySet__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v34) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[__VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v34][3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array
               [__VdlyDim0__datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array__v34][3U]);
    }
    if (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retire_valid) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__next_head;
    }
    vlSelfRef.datapath_tb__DOT__dut__DOT__wb_valid 
        = ((1U & (~ (IData)(vlSelfRef.datapath_tb__DOT__rst))) 
           && (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__exec_valid_q));
    vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid = 0U;
    vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_index = 0U;
    if ((1U & (~ (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][3U] 
                  >> 3U)))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_index = 0U;
    }
    if ((1U & ((~ (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][3U] 
                   >> 3U)) & (~ (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid))))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_index = 1U;
    }
    if ((1U & ((~ (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][3U] 
                   >> 3U)) & (~ (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid))))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_index = 2U;
    }
    if ((1U & ((~ (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][3U] 
                   >> 3U)) & (~ (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid))))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_index = 3U;
    }
    if ((1U & ((~ (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][3U] 
                   >> 3U)) & (~ (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid))))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_index = 4U;
    }
    if ((1U & ((~ (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][3U] 
                   >> 3U)) & (~ (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid))))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_index = 5U;
    }
    if ((1U & ((~ (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][3U] 
                   >> 3U)) & (~ (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid))))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_index = 6U;
    }
    if ((1U & ((~ (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][3U] 
                   >> 3U)) & (~ (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid))))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_index = 7U;
    }
    vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_ready 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid;
    vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array
        [vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr][0U];
    vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array
        [vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr][1U];
    vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array
        [vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr][2U];
    vlSelfRef.datapath_tb__DOT__dut__DOT__exec_valid_q 
        = ((1U & (~ (IData)(vlSelfRef.datapath_tb__DOT__rst))) 
           && (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_valid));
    vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[0U] = 0U;
    vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[1U] = 0U;
    vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[2U] = 0U;
    vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[3U] = 0U;
    vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__selected_valid = 0U;
    vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq = 0xffffffffU;
    vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_index = 0U;
    if (((((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][3U] 
            >> 3U) & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][0U] 
                      >> 1U)) & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][0U]) 
         & (0xffffffffU > ((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][3U] 
                            << 0x0000001eU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][2U] 
                                               >> 2U))))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__selected_valid = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq 
            = ((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][3U] 
                << 0x0000001eU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][2U] 
                                   >> 2U));
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_index = 0U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[0U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][0U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[1U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][1U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[2U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][2U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U][3U]);
    }
    if (((((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][3U] 
            >> 3U) & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][0U] 
                      >> 1U)) & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][0U]) 
         & (((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][3U] 
              << 0x0000001eU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][2U] 
                                 >> 2U)) < vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__selected_valid = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq 
            = ((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][3U] 
                << 0x0000001eU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][2U] 
                                   >> 2U));
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_index = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[0U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][0U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[1U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][1U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[2U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][2U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U][3U]);
    }
    if (((((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][3U] 
            >> 3U) & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][0U] 
                      >> 1U)) & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][0U]) 
         & (((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][3U] 
              << 0x0000001eU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][2U] 
                                 >> 2U)) < vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__selected_valid = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq 
            = ((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][3U] 
                << 0x0000001eU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][2U] 
                                   >> 2U));
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_index = 2U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[0U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][0U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[1U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][1U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[2U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][2U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U][3U]);
    }
    if (((((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][3U] 
            >> 3U) & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][0U] 
                      >> 1U)) & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][0U]) 
         & (((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][3U] 
              << 0x0000001eU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][2U] 
                                 >> 2U)) < vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__selected_valid = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq 
            = ((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][3U] 
                << 0x0000001eU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][2U] 
                                   >> 2U));
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_index = 3U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[0U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][0U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[1U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][1U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[2U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][2U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U][3U]);
    }
    if (((((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][3U] 
            >> 3U) & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][0U] 
                      >> 1U)) & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][0U]) 
         & (((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][3U] 
              << 0x0000001eU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][2U] 
                                 >> 2U)) < vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__selected_valid = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq 
            = ((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][3U] 
                << 0x0000001eU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][2U] 
                                   >> 2U));
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_index = 4U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[0U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][0U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[1U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][1U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[2U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][2U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U][3U]);
    }
    if (((((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][3U] 
            >> 3U) & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][0U] 
                      >> 1U)) & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][0U]) 
         & (((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][3U] 
              << 0x0000001eU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][2U] 
                                 >> 2U)) < vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__selected_valid = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq 
            = ((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][3U] 
                << 0x0000001eU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][2U] 
                                   >> 2U));
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_index = 5U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[0U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][0U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[1U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][1U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[2U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][2U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U][3U]);
    }
    if (((((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][3U] 
            >> 3U) & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][0U] 
                      >> 1U)) & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][0U]) 
         & (((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][3U] 
              << 0x0000001eU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][2U] 
                                 >> 2U)) < vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__selected_valid = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq 
            = ((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][3U] 
                << 0x0000001eU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][2U] 
                                   >> 2U));
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_index = 6U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[0U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][0U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[1U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][1U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[2U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][2U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U][3U]);
    }
    if (((((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][3U] 
            >> 3U) & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][0U] 
                      >> 1U)) & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][0U]) 
         & (((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][3U] 
              << 0x0000001eU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][2U] 
                                 >> 2U)) < vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__selected_valid = 1U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq 
            = ((vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][3U] 
                << 0x0000001eU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][2U] 
                                   >> 2U));
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_index = 7U;
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[0U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][0U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[1U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][1U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[2U] 
            = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][2U];
        vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop[3U] 
            = (7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U][3U]);
    }
    vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_valid 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__selected_valid;
    vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retire_valid 
        = (((0U != (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count)) 
            & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array
               [vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr][2U] 
               >> 7U)) & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array
                          [vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr][2U] 
                          >> 6U));
    vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__next_head 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr;
    if ((((0U != (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count)) 
          & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array
             [vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr][2U] 
             >> 6U)) & (vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array
                        [vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr][2U] 
                        >> 7U))) {
        vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__next_head 
            = ((7U == (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr))));
    }
}

void Vdatapath_tb___024root___eval_nba(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval_nba\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vdatapath_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x000000000000005fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vdatapath_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

void Vdatapath_tb___024root___timing_ready(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___timing_ready\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hf289938a__0.ready("@(posedge datapath_tb.clk)");
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hf2899060__0.ready("@(negedge datapath_tb.clk)");
    }
}

void Vdatapath_tb___024root___timing_resume(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___timing_resume\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hf289938a__0.moveToResumeQueue(
                                                          "@(posedge datapath_tb.clk)");
    vlSelfRef.__VtrigSched_hf2899060__0.moveToResumeQueue(
                                                          "@(negedge datapath_tb.clk)");
    vlSelfRef.__VtrigSched_hf289938a__0.resume("@(posedge datapath_tb.clk)");
    vlSelfRef.__VtrigSched_hf2899060__0.resume("@(negedge datapath_tb.clk)");
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vdatapath_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdatapath_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vdatapath_tb___024root___eval_phase__act(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval_phase__act\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vdatapath_tb___024root___eval_triggers_vec__act(vlSelf);
    Vdatapath_tb___024root___timing_ready(vlSelf);
    Vdatapath_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdatapath_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vdatapath_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vdatapath_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vdatapath_tb___024root___timing_resume(vlSelf);
        Vdatapath_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdatapath_tb___024root___eval_phase__inact(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval_phase__inact\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/datapath_tb.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vdatapath_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vdatapath_tb___024root___eval_phase__nba(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval_phase__nba\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vdatapath_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vdatapath_tb___024root___eval_nba(vlSelf);
        Vdatapath_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vdatapath_tb___024root___eval(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdatapath_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/datapath_tb.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/datapath_tb.sv", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vdatapath_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/datapath_tb.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vdatapath_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vdatapath_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vdatapath_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vdatapath_tb___024root____VbeforeTrig_hf289938a__0(Vdatapath_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root____VbeforeTrig_hf289938a__0\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.datapath_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__clk__0)) 
                                   << 6U) | (((IData)(vlSelfRef.datapath_tb__DOT__clk) 
                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__clk__0))) 
                                             << 4U))));
    vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__clk__0 
        = vlSelfRef.datapath_tb__DOT__clk;
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
    }
    if ((0x0000000000000040ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vdatapath_tb___024root____VbeforeTrig_hf2899060__0(Vdatapath_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root____VbeforeTrig_hf2899060__0\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.datapath_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__clk__0)) 
                                   << 6U) | (((IData)(vlSelfRef.datapath_tb__DOT__clk) 
                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__clk__0))) 
                                             << 4U))));
    vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__clk__0 
        = vlSelfRef.datapath_tb__DOT__clk;
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf289938a__0.ready(__VeventDescription);
    }
    if ((0x0000000000000040ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hf2899060__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vdatapath_tb___024root___eval_debug_assertions(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval_debug_assertions\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
