// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClockAsUIntTester.h for the primary calling header

#include "verilated.h"

#include "VClockAsUIntTester___024root.h"

VL_INLINE_OPT void VClockAsUIntTester___024root___sequent__TOP__0(VClockAsUIntTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VClockAsUIntTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockAsUIntTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ClockAsUIntTester/2022032915225514718920717525368265/ClockAsUIntTester.v", 57, "");
        }
    }
}

void VClockAsUIntTester___024root___eval(VClockAsUIntTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VClockAsUIntTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockAsUIntTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VClockAsUIntTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VClockAsUIntTester___024root___eval_debug_assertions(VClockAsUIntTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VClockAsUIntTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockAsUIntTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
