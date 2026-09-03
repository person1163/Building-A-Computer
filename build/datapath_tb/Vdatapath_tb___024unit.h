// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdatapath_tb.h for the primary calling header

#ifndef VERILATED_VDATAPATH_TB___024UNIT_H_
#define VERILATED_VDATAPATH_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdatapath_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdatapath_tb___024unit final {
  public:

    // INTERNAL VARIABLES
    Vdatapath_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdatapath_tb___024unit();
    ~Vdatapath_tb___024unit();
    void ctor(Vdatapath_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdatapath_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
