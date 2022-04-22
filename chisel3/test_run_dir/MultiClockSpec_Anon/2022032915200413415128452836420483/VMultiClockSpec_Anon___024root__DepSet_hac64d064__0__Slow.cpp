// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiClockSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VMultiClockSpec_Anon___024root.h"

VL_ATTR_COLD void VMultiClockSpec_Anon___024root___settle__TOP__0(VMultiClockSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSpec_Anon___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->MultiClockSpec_Anon__DOT___done_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->MultiClockSpec_Anon__DOT__done_value)));
}

VL_ATTR_COLD void VMultiClockSpec_Anon___024root___eval_initial(VMultiClockSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSpec_Anon___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VMultiClockSpec_Anon___024root___eval_settle(VMultiClockSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSpec_Anon___024root___eval_settle\n"); );
    // Body
    VMultiClockSpec_Anon___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VMultiClockSpec_Anon___024root___final(VMultiClockSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSpec_Anon___024root___final\n"); );
}

VL_ATTR_COLD void VMultiClockSpec_Anon___024root___ctor_var_reset(VMultiClockSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSpec_Anon___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->MultiClockSpec_Anon__DOT__done_value = VL_RAND_RESET_I(2);
    vlSelf->MultiClockSpec_Anon__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(2);
}
