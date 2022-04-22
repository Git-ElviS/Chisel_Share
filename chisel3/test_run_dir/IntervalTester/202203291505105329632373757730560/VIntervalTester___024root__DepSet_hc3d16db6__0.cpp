// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalTester.h for the primary calling header

#include "verilated.h"

#include "VIntervalTester___024root.h"

VL_INLINE_OPT void VIntervalTester___024root___sequent__TOP__0(VIntervalTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0xaU == (IData)(vlSelf->IntervalTester__DOT__cycle)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/IntervalTester/202203291505105329632373757730560/IntervalTester.v", 25, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/IntervalTester/202203291505105329632373757730560/IntervalTester.v", 36, "");
        }
    }
    vlSelf->IntervalTester__DOT__cycle = ((IData)(vlSelf->reset)
                                           ? 0U : ((IData)(vlSelf->IntervalTester__DOT__wrap_wrap)
                                                    ? 0U
                                                    : (IData)(vlSelf->IntervalTester__DOT___wrap_value_T_1)));
    vlSelf->IntervalTester__DOT__wrap_wrap = (0xaU 
                                              == (IData)(vlSelf->IntervalTester__DOT__cycle));
    vlSelf->IntervalTester__DOT___wrap_value_T_1 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->IntervalTester__DOT__cycle)));
}

void VIntervalTester___024root___eval(VIntervalTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VIntervalTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VIntervalTester___024root___eval_debug_assertions(VIntervalTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
