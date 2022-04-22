// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalSetBinaryPointTester.h for the primary calling header

#include "verilated.h"

#include "VIntervalSetBinaryPointTester___024root.h"

VL_INLINE_OPT void VIntervalSetBinaryPointTester___024root___sequent__TOP__0(VIntervalSetBinaryPointTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalSetBinaryPointTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSetBinaryPointTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/IntervalSetBinaryPointTester/202203291505443210619678195446054/IntervalSetBinaryPointTester.v", 11, "");
        }
    }
}

void VIntervalSetBinaryPointTester___024root___eval(VIntervalSetBinaryPointTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalSetBinaryPointTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSetBinaryPointTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VIntervalSetBinaryPointTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VIntervalSetBinaryPointTester___024root___eval_debug_assertions(VIntervalSetBinaryPointTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalSetBinaryPointTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSetBinaryPointTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
