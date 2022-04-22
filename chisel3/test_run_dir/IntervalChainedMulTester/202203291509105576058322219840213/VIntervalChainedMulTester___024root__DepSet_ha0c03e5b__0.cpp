// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalChainedMulTester.h for the primary calling header

#include "verilated.h"

#include "VIntervalChainedMulTester___024root.h"

VL_INLINE_OPT void VIntervalChainedMulTester___024root___sequent__TOP__0(VIntervalChainedMulTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalChainedMulTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedMulTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/IntervalChainedMulTester/202203291509105576058322219840213/IntervalChainedMulTester.v", 74, "");
        }
    }
}

void VIntervalChainedMulTester___024root___eval(VIntervalChainedMulTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalChainedMulTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedMulTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VIntervalChainedMulTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VIntervalChainedMulTester___024root___eval_debug_assertions(VIntervalChainedMulTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalChainedMulTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedMulTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
