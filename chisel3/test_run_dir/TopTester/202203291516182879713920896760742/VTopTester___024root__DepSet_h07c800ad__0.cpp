// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopTester.h for the primary calling header

#include "verilated.h"

#include "VTopTester___024root.h"

VL_INLINE_OPT void VTopTester___024root___sequent__TOP__0(VTopTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->TopTester__DOT__done_value) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/TopTester/202203291516182879713920896760742/TopTester.v", 286, "");
        }
    }
    vlSelf->TopTester__DOT__done_value = ((~ (IData)(vlSelf->reset)) 
                                          & (IData)(vlSelf->TopTester__DOT___done_wrap_value_T_1));
    vlSelf->TopTester__DOT___done_wrap_value_T_1 = 
        (1U & ((IData)(1U) + (IData)(vlSelf->TopTester__DOT__done_value)));
}

void VTopTester___024root___eval(VTopTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VTopTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VTopTester___024root___eval_debug_assertions(VTopTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
