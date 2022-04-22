// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWidthTester.h for the primary calling header

#include "verilated.h"

#include "VWidthTester___024root.h"

VL_INLINE_OPT void VWidthTester___024root___sequent__TOP__0(VWidthTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWidthTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/WidthTester/202203291445485795870356892498002/WidthTester.v", 11, "");
        }
    }
}

void VWidthTester___024root___eval(VWidthTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWidthTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VWidthTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VWidthTester___024root___eval_debug_assertions(VWidthTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWidthTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
