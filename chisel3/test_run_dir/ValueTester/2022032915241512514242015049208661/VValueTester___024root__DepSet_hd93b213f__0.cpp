// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VValueTester.h for the primary calling header

#include "verilated.h"

#include "VValueTester___024root.h"

VL_INLINE_OPT void VValueTester___024root___sequent__TOP__0(VValueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VValueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VValueTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ValueTester/2022032915241512514242015049208661/ValueTester.v", 12, "");
        }
    }
}

void VValueTester___024root___eval(VValueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VValueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VValueTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VValueTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VValueTester___024root___eval_debug_assertions(VValueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VValueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VValueTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG