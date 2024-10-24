// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcountert3.h for the primary calling header

#include "verilated.h"

#include "Vcountert3___024root.h"

VL_INLINE_OPT void Vcountert3___024root___sequent__TOP__0(Vcountert3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcountert3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcountert3___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->count = (0xffU & ((IData)(vlSelf->rst) ? (IData)(vlSelf->v)
                               : ((IData)(vlSelf->ld)
                                   ? (IData)(vlSelf->v)
                                   : ((IData)(1U) + (IData)(vlSelf->count)))));
}

void Vcountert3___024root___eval(Vcountert3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcountert3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcountert3___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcountert3___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vcountert3___024root___eval_debug_assertions(Vcountert3___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcountert3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcountert3___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->ld & 0xfeU))) {
        Verilated::overWidthError("ld");}
}
#endif  // VL_DEBUG
