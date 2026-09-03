// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vdatapath_tb__Syms.h"


VL_ATTR_COLD void Vdatapath_tb___024root__trace_init_sub__TOP__core_params_pkg__0(Vdatapath_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdatapath_tb___024root__trace_init_sub__TOP__0(Vdatapath_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root__trace_init_sub__TOP__0\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("core_params_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vdatapath_tb___024root__trace_init_sub__TOP__core_params_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("datapath_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"instruction_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"instruction_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"commit_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"commit_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"commit_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"commit_dst_arch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+35,0,"commit_dst_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"commit_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"instruction_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"seq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"instruction_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"commit_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"commit_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"commit_seq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"commit_dst_arch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+35,0,"commit_dst_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+8,0,"instruction_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 98,0);
    tracep->declBus(c+12,0,"current_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+5,0,"current_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,0,"current_funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declArray(c+13,0,"rob_alloc_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBit(c+16,0,"rob_alloc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"rob_alloc_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"rob_alloc_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+39,0,"rob_retire_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+40,0,"rob_retired_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBus(c+43,0,"rob_retired_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+44,0,"rob_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17,0,"rmt_rename_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"rmt_src1_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"rmt_src2_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"rmt_src1_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+157,0,"rmt_src2_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+20,0,"iq_dispatch_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"iq_dispatch_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+21,0,"iq_dispatch_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 98,0);
    tracep->declBit(c+46,0,"iq_issue_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+47,0,"iq_issue_uop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 98,0);
    tracep->declBit(c+51,0,"exec_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+52,0,"exec_uop_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 98,0);
    tracep->declBit(c+56,0,"wb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"wb_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+25,0,"decode_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+159,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"alu_opcodes",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+159,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_iq", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"dispatch_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+21,0,"dispatch_uop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 98,0);
    tracep->declBit(c+56,0,"wb_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"wb_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+45,0,"dispatch_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"issue_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+47,0,"issue_uop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 98,0);
    tracep->pushPrefix("IQ_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+58,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 99,0);
    tracep->declArray(c+62,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 99,0);
    tracep->declArray(c+66,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 99,0);
    tracep->declArray(c+70,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 99,0);
    tracep->declArray(c+74,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 99,0);
    tracep->declArray(c+78,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 99,0);
    tracep->declArray(c+82,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 99,0);
    tracep->declArray(c+86,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 99,0);
    tracep->popPrefix();
    tracep->declBus(c+90,0,"oldest_seq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"oldest_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+92,0,"free_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+93,0,"selected_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"free_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_rmt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"rename_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"dst_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+28,0,"src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+29,0,"dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+38,0,"new_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+95,0,"commit_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"commit_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"commit_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+18,0,"src1_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"src2_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"src1_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+157,0,"src2_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("rmt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+96,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+97,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+98,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+99,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+100,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+101,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+102,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+103,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+104,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+105,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+106,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+107,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+108,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+109,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+110,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+111,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+112,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+113,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+114,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+115,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+116,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+117,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+118,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+119,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+120,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+121,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+122,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+123,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+125,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+126,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+127,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_rob", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+155,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+13,0,"alloc_entry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBit(c+16,0,"alloc_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"alloc_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"alloc_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+57,0,"wb_tag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+56,0,"wb_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"retire_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+40,0,"retired_entry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBus(c+43,0,"retired_tag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+44,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+43,0,"head_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+38,0,"tail_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+128,0,"next_head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+158,0,"next_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+30,0,"next_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+129,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"ROB_ENTRIES_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+162,0,"LAST_PTR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+163,0,"PTR_INC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("ROB_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+131,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+134,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+137,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+140,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+143,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+146,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+149,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+152,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdatapath_tb___024root__trace_init_sub__TOP__core_params_pkg__0(Vdatapath_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root__trace_init_sub__TOP__core_params_pkg__0\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+164,0,"ARCH_REGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+164,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+165,0,"ROB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+165,0,"IQ_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+166,0,"ISSUE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+166,0,"COMMIT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+167,0,"ARCH_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+168,0,"ROB_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+168,0,"IQ_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vdatapath_tb___024root__trace_init_top(Vdatapath_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root__trace_init_top\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdatapath_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdatapath_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdatapath_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdatapath_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdatapath_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdatapath_tb___024root__trace_register(Vdatapath_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root__trace_register\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdatapath_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vdatapath_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vdatapath_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vdatapath_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdatapath_tb___024root__trace_const_0_sub_0(Vdatapath_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdatapath_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root__trace_const_0\n"); );
    // Body
    Vdatapath_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdatapath_tb___024root*>(voidSelf);
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vdatapath_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdatapath_tb___024root__trace_const_0_sub_0(Vdatapath_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root__trace_const_0_sub_0\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+159,(0U),32);
    bufp->fullCData(oldp+160,(0U),4);
    bufp->fullCData(oldp+161,(8U),4);
    bufp->fullCData(oldp+162,(7U),3);
    bufp->fullCData(oldp+163,(1U),3);
    bufp->fullIData(oldp+164,(0x00000020U),32);
    bufp->fullIData(oldp+165,(8U),32);
    bufp->fullIData(oldp+166,(1U),32);
    bufp->fullIData(oldp+167,(5U),32);
    bufp->fullIData(oldp+168,(3U),32);
}

VL_ATTR_COLD void Vdatapath_tb___024root__trace_full_0_sub_0(Vdatapath_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdatapath_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root__trace_full_0\n"); );
    // Body
    Vdatapath_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdatapath_tb___024root*>(voidSelf);
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vdatapath_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdatapath_tb___024root__trace_full_0_sub_0(Vdatapath_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatapath_tb___024root__trace_full_0_sub_0\n"); );
    Vdatapath_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.datapath_tb__DOT__rst));
    bufp->fullIData(oldp+1,(vlSelfRef.datapath_tb__DOT__instruction),32);
    bufp->fullBit(oldp+2,(vlSelfRef.datapath_tb__DOT__instruction_valid));
    bufp->fullIData(oldp+3,(vlSelfRef.datapath_tb__DOT__pc),32);
    bufp->fullIData(oldp+4,(vlSelfRef.datapath_tb__DOT__seq),32);
    bufp->fullCData(oldp+5,((7U & (vlSelfRef.datapath_tb__DOT__instruction 
                                   >> 0x0000000cU))),3);
    bufp->fullCData(oldp+6,((vlSelfRef.datapath_tb__DOT__instruction 
                             >> 0x00000019U)),7);
    bufp->fullBit(oldp+7,(vlSelfRef.datapath_tb__DOT__instruction_ready));
    bufp->fullWData(oldp+8,(vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop),99);
    bufp->fullCData(oldp+12,(vlSelfRef.datapath_tb__DOT__dut__DOT__current_opcode),7);
    bufp->fullWData(oldp+13,(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_entry),72);
    bufp->fullBit(oldp+16,(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_valid));
    bufp->fullBit(oldp+17,(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_rename_valid));
    bufp->fullBit(oldp+18,(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src1_valid));
    bufp->fullBit(oldp+19,(vlSelfRef.datapath_tb__DOT__dut__DOT__rmt_src2_valid));
    bufp->fullBit(oldp+20,(vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_valid));
    bufp->fullWData(oldp+21,(vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_uop),99);
    bufp->fullBit(oldp+25,(vlSelfRef.datapath_tb__DOT__dut__DOT__decode_valid));
    bufp->fullBit(oldp+26,((1U & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                  >> 0x0000000dU))));
    bufp->fullCData(oldp+27,((0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                             >> 0x0000001aU))),5);
    bufp->fullCData(oldp+28,((0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                             >> 0x00000015U))),5);
    bufp->fullCData(oldp+29,((0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                             >> 0x00000010U))),5);
    bufp->fullCData(oldp+30,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__next_count),4);
    bufp->fullBit(oldp+31,(((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retire_valid) 
                            & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                               >> 7U))));
    bufp->fullIData(oldp+32,(((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                               << 0x0000001aU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                                  >> 6U))),32);
    bufp->fullIData(oldp+33,(((vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[2U] 
                               << 0x0000001aU) | (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[1U] 
                                                  >> 6U))),32);
    bufp->fullCData(oldp+34,((0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U] 
                                             >> 1U))),5);
    bufp->fullBit(oldp+35,((1U & vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U])));
    bufp->fullIData(oldp+36,(vlSelfRef.datapath_tb__DOT__commit_count),32);
    bufp->fullBit(oldp+37,((8U != (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count))));
    bufp->fullCData(oldp+38,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr),3);
    bufp->fullBit(oldp+39,(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retire_valid));
    bufp->fullWData(oldp+40,(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry),72);
    bufp->fullCData(oldp+43,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__head_ptr),3);
    bufp->fullCData(oldp+44,(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count),4);
    bufp->fullBit(oldp+45,(vlSelfRef.datapath_tb__DOT__dut__DOT__iq_dispatch_ready));
    bufp->fullBit(oldp+46,(vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_valid));
    bufp->fullWData(oldp+47,(vlSelfRef.datapath_tb__DOT__dut__DOT__iq_issue_uop),99);
    bufp->fullBit(oldp+51,(vlSelfRef.datapath_tb__DOT__dut__DOT__exec_valid_q));
    bufp->fullWData(oldp+52,(vlSelfRef.datapath_tb__DOT__dut__DOT__exec_uop_q),99);
    bufp->fullBit(oldp+56,(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_valid));
    bufp->fullCData(oldp+57,(vlSelfRef.datapath_tb__DOT__dut__DOT__wb_tag),3);
    bufp->fullWData(oldp+58,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[0U]),100);
    bufp->fullWData(oldp+62,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[1U]),100);
    bufp->fullWData(oldp+66,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[2U]),100);
    bufp->fullWData(oldp+70,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[3U]),100);
    bufp->fullWData(oldp+74,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[4U]),100);
    bufp->fullWData(oldp+78,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[5U]),100);
    bufp->fullWData(oldp+82,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[6U]),100);
    bufp->fullWData(oldp+86,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__IQ_array[7U]),100);
    bufp->fullIData(oldp+90,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_seq),32);
    bufp->fullCData(oldp+91,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__oldest_index),3);
    bufp->fullCData(oldp+92,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_index),3);
    bufp->fullBit(oldp+93,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__selected_valid));
    bufp->fullBit(oldp+94,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_iq__DOT__free_valid));
    bufp->fullBit(oldp+95,(((IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retire_valid) 
                            & vlSelfRef.datapath_tb__DOT__dut__DOT__rob_retired_entry[0U])));
    bufp->fullCData(oldp+96,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[0U]),4);
    bufp->fullCData(oldp+97,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[1U]),4);
    bufp->fullCData(oldp+98,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[2U]),4);
    bufp->fullCData(oldp+99,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[3U]),4);
    bufp->fullCData(oldp+100,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[4U]),4);
    bufp->fullCData(oldp+101,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[5U]),4);
    bufp->fullCData(oldp+102,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[6U]),4);
    bufp->fullCData(oldp+103,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[7U]),4);
    bufp->fullCData(oldp+104,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[8U]),4);
    bufp->fullCData(oldp+105,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[9U]),4);
    bufp->fullCData(oldp+106,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[10U]),4);
    bufp->fullCData(oldp+107,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[11U]),4);
    bufp->fullCData(oldp+108,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[12U]),4);
    bufp->fullCData(oldp+109,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[13U]),4);
    bufp->fullCData(oldp+110,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[14U]),4);
    bufp->fullCData(oldp+111,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[15U]),4);
    bufp->fullCData(oldp+112,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[16U]),4);
    bufp->fullCData(oldp+113,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[17U]),4);
    bufp->fullCData(oldp+114,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[18U]),4);
    bufp->fullCData(oldp+115,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[19U]),4);
    bufp->fullCData(oldp+116,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[20U]),4);
    bufp->fullCData(oldp+117,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[21U]),4);
    bufp->fullCData(oldp+118,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[22U]),4);
    bufp->fullCData(oldp+119,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[23U]),4);
    bufp->fullCData(oldp+120,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[24U]),4);
    bufp->fullCData(oldp+121,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[25U]),4);
    bufp->fullCData(oldp+122,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[26U]),4);
    bufp->fullCData(oldp+123,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[27U]),4);
    bufp->fullCData(oldp+124,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[28U]),4);
    bufp->fullCData(oldp+125,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[29U]),4);
    bufp->fullCData(oldp+126,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[30U]),4);
    bufp->fullCData(oldp+127,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt[31U]),4);
    bufp->fullCData(oldp+128,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__next_head),3);
    bufp->fullBit(oldp+129,((8U == (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count))));
    bufp->fullBit(oldp+130,((0U == (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count))));
    bufp->fullWData(oldp+131,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[0U]),72);
    bufp->fullWData(oldp+134,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[1U]),72);
    bufp->fullWData(oldp+137,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[2U]),72);
    bufp->fullWData(oldp+140,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[3U]),72);
    bufp->fullWData(oldp+143,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[4U]),72);
    bufp->fullWData(oldp+146,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[5U]),72);
    bufp->fullWData(oldp+149,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[6U]),72);
    bufp->fullWData(oldp+152,(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__ROB_array[7U]),72);
    bufp->fullBit(oldp+155,(vlSelfRef.datapath_tb__DOT__clk));
    bufp->fullCData(oldp+156,((7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt
                               [(0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                                >> 0x0000001aU))])),3);
    bufp->fullCData(oldp+157,((7U & vlSelfRef.datapath_tb__DOT__dut__DOT__u_rmt__DOT__rmt
                               [(0x0000001fU & (vlSelfRef.datapath_tb__DOT__dut__DOT__instruction_uop[0U] 
                                                >> 0x00000015U))])),3);
    bufp->fullCData(oldp+158,((7U & (((8U != (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_count)) 
                                      & (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__rob_alloc_valid))
                                      ? ((7U == (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr))
                                          ? 0U : ((IData)(1U) 
                                                  + (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr)))
                                      : (IData)(vlSelfRef.datapath_tb__DOT__dut__DOT__u_rob__DOT__tail_ptr)))),3);
}
