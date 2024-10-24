// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcountert3.h for the primary calling header

#include "verilated.h"

#include "Vcountert3__Syms.h"
#include "Vcountert3___024root.h"

void Vcountert3___024root___ctor_var_reset(Vcountert3___024root* vlSelf);

Vcountert3___024root::Vcountert3___024root(Vcountert3__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcountert3___024root___ctor_var_reset(this);
}

void Vcountert3___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcountert3___024root::~Vcountert3___024root() {
}
