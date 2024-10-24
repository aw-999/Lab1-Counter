// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcountert3.h for the primary calling header

#ifndef VERILATED_VCOUNTERT3___024ROOT_H_
#define VERILATED_VCOUNTERT3___024ROOT_H_  // guard

#include "verilated.h"

class Vcountert3__Syms;

class Vcountert3___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ld,0,0);
    VL_IN8(v,7,0);
    VL_OUT8(count,7,0);
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vcountert3__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcountert3___024root(Vcountert3__Syms* symsp, const char* name);
    ~Vcountert3___024root();
    VL_UNCOPYABLE(Vcountert3___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
