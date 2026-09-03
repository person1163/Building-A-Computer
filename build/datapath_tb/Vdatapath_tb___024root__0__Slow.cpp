// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdatapath_tb.h for the primary calling header

#include "Vdatapath_tb__pch.h"

void Vdatapath_tb___024root___timing_ready(Vdatapath_tb___024root* vlSelf);

VL_ATTR_COLD void Vdatapath_tb___024root___eval_static(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval_static\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src1_valid__0 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src1_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src2_valid__0 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src2_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src1_tag__0 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src1_tag;
    vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src2_tag__0 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src2_tag;
    vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__clk__0 
        = vlSelfRef.datapath_tb__DOT__clk;
    Vdatapath_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vdatapath_tb___024root___eval_initial__TOP(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval_initial__TOP\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("datapath.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vdatapath_tb___024root___eval_final(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval_final\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdatapath_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdatapath_tb___024root___eval_phase__stl(Vdatapath_tb___024root* vlSelf);

VL_ATTR_COLD void Vdatapath_tb___024root___eval_settle(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval_settle\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vdatapath_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/datapath_tb.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vdatapath_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vdatapath_tb___024root___eval_triggers_vec__stl(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval_triggers_vec__stl\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src2_tag) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src2_tag__0)) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src1_tag) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src1_tag__0)) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src2_valid) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src2_valid__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src1_valid) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src1_valid__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src1_valid__0 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src1_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src2_valid__0 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src2_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src1_tag__0 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src1_tag;
    vlSelfRef.__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src2_tag__0 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src2_tag;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (2ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (4ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (8ULL | vlSelfRef.__VstlTriggered[0U]);
    }
}

VL_ATTR_COLD bool Vdatapath_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdatapath_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vdatapath_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] datapath_tb.dut.rmt_src1_valid)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] datapath_tb.dut.rmt_src2_valid)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] datapath_tb.dut.rmt_src1_tag)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([hybrid] datapath_tb.dut.rmt_src2_tag)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vdatapath_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

VL_ATTR_COLD void Vdatapath_tb___024root___stl_sequent__TOP__0(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___stl_sequent__TOP__0\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array
        [vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr][0U];
    vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array
        [vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr][1U];
    vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
        = vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array
        [vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr][2U];
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
}

VL_ATTR_COLD void Vdatapath_tb___024root____Vm_traceActivitySetAll(Vdatapath_tb___024root* vlSelf);
void Vdatapath_tb___024root___act_comb__TOP__0(Vdatapath_tb___024root* vlSelf);

VL_ATTR_COLD void Vdatapath_tb___024root___eval_stl(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval_stl\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vdatapath_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vdatapath_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (0x000000000000000fULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vdatapath_tb___024root___act_comb__TOP__0(vlSelf);
        Vdatapath_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vdatapath_tb___024root___eval_phase__stl(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___eval_phase__stl\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdatapath_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdatapath_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vdatapath_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vdatapath_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vdatapath_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdatapath_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vdatapath_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] datapath_tb.dut.rmt_src1_valid)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] datapath_tb.dut.rmt_src2_valid)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] datapath_tb.dut.rmt_src1_tag)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([hybrid] datapath_tb.dut.rmt_src2_tag)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge datapath_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(negedge datapath_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdatapath_tb___024root____Vm_traceActivitySetAll(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root____Vm_traceActivitySetAll\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vdatapath_tb___024root___ctor_var_reset(Vdatapath_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root___ctor_var_reset\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->datapath_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1540368851190137037ull);
    vlSelf->datapath_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5622484937934788408ull);
    vlSelf->datapath_tb__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10989975575190469959ull);
    vlSelf->datapath_tb__DOT__instruction_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11569603787406318645ull);
    vlSelf->datapath_tb__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17525280458737920154ull);
    vlSelf->datapath_tb__DOT__seq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2004518095815906099ull);
    vlSelf->datapath_tb__DOT__instruction_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15436534966501531175ull);
    vlSelf->datapath_tb__DOT__commit_count = 0;
    VL_SCOPED_RAND_RESET_W(99, vlSelf->datapath_tb__DOT__dut__DOT__instruction_uop, __VscopeHash, 16675750099443786160ull);
    vlSelf->datapath_tb__DOT__dut__DOT__current_opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12637216578769190290ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->datapath_tb__DOT__dut__DOT__rob_alloc_entry, __VscopeHash, 14529737094055875082ull);
    vlSelf->datapath_tb__DOT__dut__DOT__rob_alloc_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5401950955954590598ull);
    vlSelf->datapath_tb__DOT__dut__DOT__rob_retire_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7195911014161806039ull);
    VL_SCOPED_RAND_RESET_W(72, vlSelf->datapath_tb__DOT__dut__DOT__rob_retired_entry, __VscopeHash, 4090190611051398258ull);
    vlSelf->datapath_tb__DOT__dut__DOT__rob_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4533098395079176964ull);
    vlSelf->datapath_tb__DOT__dut__DOT__rmt_rename_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6652634389914445542ull);
    vlSelf->datapath_tb__DOT__dut__DOT__rmt_src1_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 454613863334988594ull);
    vlSelf->datapath_tb__DOT__dut__DOT__rmt_src2_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16241876358345955282ull);
    vlSelf->datapath_tb__DOT__dut__DOT__rmt_src1_tag = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6148055999879827565ull);
    vlSelf->datapath_tb__DOT__dut__DOT__rmt_src2_tag = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4212935589166597575ull);
    vlSelf->datapath_tb__DOT__dut__DOT__iq_dispatch_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16096741421530676564ull);
    vlSelf->datapath_tb__DOT__dut__DOT__iq_dispatch_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5695121611352887812ull);
    VL_SCOPED_RAND_RESET_W(99, vlSelf->datapath_tb__DOT__dut__DOT__iq_dispatch_uop, __VscopeHash, 7547172323131107702ull);
    vlSelf->datapath_tb__DOT__dut__DOT__iq_issue_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4873648940238068510ull);
    VL_SCOPED_RAND_RESET_W(99, vlSelf->datapath_tb__DOT__dut__DOT__iq_issue_uop, __VscopeHash, 6716649483380328825ull);
    vlSelf->datapath_tb__DOT__dut__DOT__exec_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11302738747118403944ull);
    VL_SCOPED_RAND_RESET_W(99, vlSelf->datapath_tb__DOT__dut__DOT__exec_uop_q, __VscopeHash, 8281838557449092847ull);
    vlSelf->datapath_tb__DOT__dut__DOT__wb_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16295313908909820864ull);
    vlSelf->datapath_tb__DOT__dut__DOT__wb_tag = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16260025298572961373ull);
    vlSelf->datapath_tb__DOT__dut__DOT__decode_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10123208100438012453ull);
    vlSelf->datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3742343914442995046ull);
    vlSelf->datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9706724360244473389ull);
    vlSelf->datapath_tb__DOT__dut__DOT__u_rob__DOT__next_head = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12186628882073595104ull);
    vlSelf->datapath_tb__DOT__dut__DOT__u_rob__DOT__next_tail = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3317835604079160743ull);
    vlSelf->datapath_tb__DOT__dut__DOT__u_rob__DOT__next_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18361967813783256055ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(72, vlSelf->datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[__Vi0], __VscopeHash, 648402907797258010ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18004681962619599416ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(100, vlSelf->datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[__Vi0], __VscopeHash, 3516533609934901498ull);
    }
    vlSelf->datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14088369011945911378ull);
    vlSelf->datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7014570558139816207ull);
    vlSelf->datapath_tb__DOT__dut__DOT__u_iq__DOT__free_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8234280429586158290ull);
    vlSelf->datapath_tb__DOT__dut__DOT__u_iq__DOT__selected_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17713581333883776321ull);
    vlSelf->datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10377417936350405720ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src1_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src2_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src1_tag__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__datapath_tb__DOT__dut__DOT__rmt_src2_tag__0 = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__datapath_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
