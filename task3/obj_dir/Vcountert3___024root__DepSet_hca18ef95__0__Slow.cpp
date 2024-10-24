// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcountert3.h for the primary calling header

#include "verilated.h"

#include "Vcountert3___024root.h"

VL_ATTR_COLD void Vcountert3___024root___eval_initial(Vcountert3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcountert3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcountert3___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcountert3___024root___eval_settle(Vcountert3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcountert3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcountert3___024root___eval_settle\n"); );
}

VL_ATTR_COLD void Vcountert3___024root___final(Vcountert3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcountert3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcountert3___024root___final\n"); );
}

VL_ATTR_COLD void Vcountert3___024root___ctor_var_reset(Vcountert3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcountert3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcountert3___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ld = VL_RAND_RESET_I(1);
    vlSelf->v = VL_RAND_RESET_I(8);
    vlSelf->count = VL_RAND_RESET_I(8);
}
