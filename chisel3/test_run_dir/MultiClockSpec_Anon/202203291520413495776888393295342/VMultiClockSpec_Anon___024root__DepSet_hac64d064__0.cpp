// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiClockSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VMultiClockSpec_Anon___024root.h"

VL_INLINE_OPT void VMultiClockSpec_Anon___024root___sequent__TOP__0(VMultiClockSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSpec_Anon___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->MultiClockSpec_Anon__DOT__done_value) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MultiClockSpec_Anon/202203291520413495776888393295342/MultiClockSpec_Anon.v", 21, "");
        }
    }
    vlSelf->MultiClockSpec_Anon__DOT__done_value = 
        ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->MultiClockSpec_Anon__DOT___done_wrap_value_T_1));
    vlSelf->MultiClockSpec_Anon__DOT___done_wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlSelf->MultiClockSpec_Anon__DOT__done_value)));
}

void VMultiClockSpec_Anon___024root___eval(VMultiClockSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSpec_Anon___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VMultiClockSpec_Anon___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VMultiClockSpec_Anon___024root___eval_debug_assertions(VMultiClockSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSpec_Anon___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
