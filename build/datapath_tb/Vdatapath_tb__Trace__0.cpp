// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vdatapath_tb__Syms.h"


void Vdatapath_tb___024root__trace_chg_0_sub_0(Vdatapath_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdatapath_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root__trace_chg_0\n"); );
    // Body
    Vdatapath_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdatapath_tb___024root*>(voidSelf);
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vdatapath_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdatapath_tb___024root__trace_chg_0_sub_0(Vdatapath_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root__trace_chg_0_sub_0\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.datapath_tb__DOT__rst));
        bufp->chgIData(oldp+1,(vlSelfRef.datapath_tb__DOT__instruction),32);
        bufp->chgBit(oldp+2,(vlSelfRef.datapath_tb__DOT__instruction_valid));
        bufp->chgIData(oldp+3,(vlSelfRef.datapath_tb__DOT__pc),32);
        bufp->chgIData(oldp+4,(vlSelfRef.datapath_tb__DOT__seq),32);
        bufp->chgCData(oldp+5,((7U & (vlSelfRef.datapath_tb__DOT__instruction 
                                      >> 0x0000000cU))),3);
        bufp->chgCData(oldp+6,((vlSelfRef.datapath_tb__DOT__instruction 
                                >> 0x00000019U)),7);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgBit(oldp+7,(vlSelfRef.datapath_tb__DOT__instruction_ready));
        bufp->chgWData(oldp+8,(vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop),99);
        bufp->chgCData(oldp+12,(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode),7);
        bufp->chgWData(oldp+13,(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_entry),72);
        bufp->chgBit(oldp+16,(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_valid));
        bufp->chgBit(oldp+17,(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_rename_valid));
        bufp->chgBit(oldp+18,(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src1_valid));
        bufp->chgBit(oldp+19,(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src2_valid));
        bufp->chgBit(oldp+20,(vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_valid));
        bufp->chgWData(oldp+21,(vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop),99);
        bufp->chgBit(oldp+25,(vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid));
        bufp->chgBit(oldp+26,((1U & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                     >> 0x0000000dU))));
        bufp->chgCData(oldp+27,((0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                                >> 0x0000001aU))),5);
        bufp->chgCData(oldp+28,((0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                                >> 0x00000015U))),5);
        bufp->chgCData(oldp+29,((0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                                >> 0x00000010U))),5);
        bufp->chgCData(oldp+30,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__next_count),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+31,(((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retire_valid) 
                               & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                  >> 7U))));
        bufp->chgIData(oldp+32,(((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                  << 0x0000001aU) | 
                                 (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                  >> 6U))),32);
        bufp->chgIData(oldp+33,(((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                                  << 0x0000001aU) | 
                                 (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                  >> 6U))),32);
        bufp->chgCData(oldp+34,((0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                                >> 1U))),5);
        bufp->chgBit(oldp+35,((1U & vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U])));
        bufp->chgIData(oldp+36,(vlSelfRef.datapath_tb__DOT__commit_count),32);
        bufp->chgBit(oldp+37,((8U != (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count))));
        bufp->chgCData(oldp+38,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr),3);
        bufp->chgBit(oldp+39,(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retire_valid));
        bufp->chgWData(oldp+40,(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry),72);
        bufp->chgCData(oldp+43,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr),3);
        bufp->chgCData(oldp+44,(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count),4);
        bufp->chgBit(oldp+45,(vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_ready));
        bufp->chgBit(oldp+46,(vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_valid));
        bufp->chgWData(oldp+47,(vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop),99);
        bufp->chgBit(oldp+51,(vlSelfRef.datapath_tb__DOT__dut__DOT__exec_valid_q));
        bufp->chgWData(oldp+52,(vlSelfRef.datapath_tb__DOT__dut__DOT__exec_uop_q),99);
        bufp->chgBit(oldp+56,(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_valid));
        bufp->chgCData(oldp+57,(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag),3);
        bufp->chgWData(oldp+58,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U]),100);
        bufp->chgWData(oldp+62,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U]),100);
        bufp->chgWData(oldp+66,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U]),100);
        bufp->chgWData(oldp+70,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U]),100);
        bufp->chgWData(oldp+74,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U]),100);
        bufp->chgWData(oldp+78,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U]),100);
        bufp->chgWData(oldp+82,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U]),100);
        bufp->chgWData(oldp+86,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U]),100);
        bufp->chgIData(oldp+90,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq),32);
        bufp->chgCData(oldp+91,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_index),3);
        bufp->chgCData(oldp+92,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_index),3);
        bufp->chgBit(oldp+93,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__selected_valid));
        bufp->chgBit(oldp+94,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid));
        bufp->chgBit(oldp+95,(((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retire_valid) 
                               & vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U])));
        bufp->chgCData(oldp+96,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[0U]),4);
        bufp->chgCData(oldp+97,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[1U]),4);
        bufp->chgCData(oldp+98,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[2U]),4);
        bufp->chgCData(oldp+99,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[3U]),4);
        bufp->chgCData(oldp+100,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[4U]),4);
        bufp->chgCData(oldp+101,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[5U]),4);
        bufp->chgCData(oldp+102,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[6U]),4);
        bufp->chgCData(oldp+103,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[7U]),4);
        bufp->chgCData(oldp+104,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[8U]),4);
        bufp->chgCData(oldp+105,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[9U]),4);
        bufp->chgCData(oldp+106,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[10U]),4);
        bufp->chgCData(oldp+107,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[11U]),4);
        bufp->chgCData(oldp+108,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[12U]),4);
        bufp->chgCData(oldp+109,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[13U]),4);
        bufp->chgCData(oldp+110,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[14U]),4);
        bufp->chgCData(oldp+111,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[15U]),4);
        bufp->chgCData(oldp+112,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[16U]),4);
        bufp->chgCData(oldp+113,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[17U]),4);
        bufp->chgCData(oldp+114,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[18U]),4);
        bufp->chgCData(oldp+115,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[19U]),4);
        bufp->chgCData(oldp+116,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[20U]),4);
        bufp->chgCData(oldp+117,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[21U]),4);
        bufp->chgCData(oldp+118,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[22U]),4);
        bufp->chgCData(oldp+119,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[23U]),4);
        bufp->chgCData(oldp+120,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[24U]),4);
        bufp->chgCData(oldp+121,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[25U]),4);
        bufp->chgCData(oldp+122,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[26U]),4);
        bufp->chgCData(oldp+123,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[27U]),4);
        bufp->chgCData(oldp+124,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[28U]),4);
        bufp->chgCData(oldp+125,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[29U]),4);
        bufp->chgCData(oldp+126,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[30U]),4);
        bufp->chgCData(oldp+127,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[31U]),4);
        bufp->chgCData(oldp+128,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__next_head),3);
        bufp->chgBit(oldp+129,((8U == (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count))));
        bufp->chgBit(oldp+130,((0U == (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count))));
        bufp->chgWData(oldp+131,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[0U]),72);
        bufp->chgWData(oldp+134,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[1U]),72);
        bufp->chgWData(oldp+137,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[2U]),72);
        bufp->chgWData(oldp+140,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[3U]),72);
        bufp->chgWData(oldp+143,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[4U]),72);
        bufp->chgWData(oldp+146,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[5U]),72);
        bufp->chgWData(oldp+149,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[6U]),72);
        bufp->chgWData(oldp+152,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[7U]),72);
    }
    bufp->chgBit(oldp+155,(vlSelfRef.datapath_tb__DOT__clk));
    bufp->chgCData(oldp+156,((7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt
                              [(0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                               >> 0x0000001aU))])),3);
    bufp->chgCData(oldp+157,((7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt
                              [(0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                               >> 0x00000015U))])),3);
    bufp->chgCData(oldp+158,((7U & (((8U != (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count)) 
                                     & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_valid))
                                     ? ((7U == (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr))
                                         ? 0U : ((IData)(1U) 
                                                 + (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr)))
                                     : (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr)))),3);
}

void Vdatapath_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root__trace_cleanup\n"); );
    // Body
    Vdatapath_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdatapath_tb___024root*>(voidSelf);
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
