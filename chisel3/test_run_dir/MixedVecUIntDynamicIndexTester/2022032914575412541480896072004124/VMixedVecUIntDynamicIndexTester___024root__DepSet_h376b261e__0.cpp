// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecUIntDynamicIndexTester.h for the primary calling header

#include "verilated.h"

#include "VMixedVecUIntDynamicIndexTester___024root.h"

void VMixedVecUIntDynamicIndexTester___024root___sequent__TOP__0(VMixedVecUIntDynamicIndexTester___024root* vlSelf);

void VMixedVecUIntDynamicIndexTester___024root___eval(VMixedVecUIntDynamicIndexTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecUIntDynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VMixedVecUIntDynamicIndexTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VMixedVecUIntDynamicIndexTester___024root___eval_debug_assertions(VMixedVecUIntDynamicIndexTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecUIntDynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
