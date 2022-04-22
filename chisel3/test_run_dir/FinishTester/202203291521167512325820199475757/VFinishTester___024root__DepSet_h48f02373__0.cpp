// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFinishTester.h for the primary calling header

#include "verilated.h"

#include "VFinishTester___024root.h"

VL_INLINE_OPT void VFinishTester___024root___sequent__TOP__0(VFinishTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFinishTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFinishTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/FinishTester/202203291521167512325820199475757/FinishTester.v", 11, "");
        }
    }
}

void VFinishTester___024root___eval(VFinishTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFinishTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFinishTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VFinishTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VFinishTester___024root___eval_debug_assertions(VFinishTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFinishTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFinishTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
