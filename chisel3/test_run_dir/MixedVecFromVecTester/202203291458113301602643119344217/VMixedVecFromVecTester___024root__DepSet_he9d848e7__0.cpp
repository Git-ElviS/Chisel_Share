// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecFromVecTester.h for the primary calling header

#include "verilated.h"

#include "VMixedVecFromVecTester___024root.h"

VL_INLINE_OPT void VMixedVecFromVecTester___024root___sequent__TOP__0(VMixedVecFromVecTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecFromVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecFromVecTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MixedVecFromVecTester/202203291458113301602643119344217/MixedVecFromVecTester.v", 12, "");
        }
    }
}

void VMixedVecFromVecTester___024root___eval(VMixedVecFromVecTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecFromVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecFromVecTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VMixedVecFromVecTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VMixedVecFromVecTester___024root___eval_debug_assertions(VMixedVecFromVecTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecFromVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecFromVecTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
