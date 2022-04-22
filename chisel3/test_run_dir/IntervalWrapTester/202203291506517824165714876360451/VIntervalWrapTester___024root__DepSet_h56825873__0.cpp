// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalWrapTester.h for the primary calling header

#include "verilated.h"

#include "VIntervalWrapTester___024root.h"

VL_INLINE_OPT void VIntervalWrapTester___024root___sequent__TOP__0(VIntervalWrapTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalWrapTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/IntervalWrapTester/202203291506517824165714876360451/IntervalWrapTester.v", 83, "");
        }
    }
}

void VIntervalWrapTester___024root___eval(VIntervalWrapTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalWrapTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VIntervalWrapTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VIntervalWrapTester___024root___eval_debug_assertions(VIntervalWrapTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalWrapTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
