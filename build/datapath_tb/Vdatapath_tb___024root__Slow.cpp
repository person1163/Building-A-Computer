// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdatapath_tb.h for the primary calling header

#include "Vdatapath_tb__pch.h"

void Vdatapath_tb___024root___ctor_var_reset(Vdatapath_tb___024root* vlSelf);

Vdatapath_tb___024root::Vdatapath_tb___024root(Vdatapath_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vdatapath_tb___024root___ctor_var_reset(this);
}

void Vdatapath_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdatapath_tb___024root::~Vdatapath_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
