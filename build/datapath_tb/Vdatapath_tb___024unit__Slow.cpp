// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdatapath_tb.h for the primary calling header

#include "Vdatapath_tb__pch.h"

void Vdatapath_tb___024unit___ctor_var_reset(Vdatapath_tb___024unit* vlSelf);

Vdatapath_tb___024unit::Vdatapath_tb___024unit() = default;
Vdatapath_tb___024unit::~Vdatapath_tb___024unit() = default;

void Vdatapath_tb___024unit::ctor(Vdatapath_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vdatapath_tb___024unit___ctor_var_reset(this);
}

void Vdatapath_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdatapath_tb___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
