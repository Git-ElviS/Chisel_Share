// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFailingAssertTester.h for the primary calling header

#include "verilated.h"

#include "VFailingAssertTester___024root.h"

void VFailingAssertTester___024root___sequent__TOP__0(VFailingAssertTester___024root* vlSelf);

void VFailingAssertTester___024root___eval(VFailingAssertTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFailingAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VFailingAssertTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VFailingAssertTester___024root___eval_debug_assertions(VFailingAssertTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFailingAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
