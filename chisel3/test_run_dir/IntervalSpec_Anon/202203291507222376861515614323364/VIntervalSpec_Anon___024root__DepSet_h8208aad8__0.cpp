// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VIntervalSpec_Anon___024root.h"

VL_INLINE_OPT void VIntervalSpec_Anon___024root___sequent__TOP__0(VIntervalSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSpec_Anon___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/IntervalSpec_Anon/202203291507222376861515614323364/IntervalSpec_Anon.v", 12, "");
        }
    }
}

void VIntervalSpec_Anon___024root___eval(VIntervalSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSpec_Anon___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VIntervalSpec_Anon___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VIntervalSpec_Anon___024root___eval_debug_assertions(VIntervalSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSpec_Anon___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
