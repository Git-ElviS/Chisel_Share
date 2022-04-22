// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VAsyncResetSpec_Anon___024root.h"

VL_ATTR_COLD void VAsyncResetSpec_Anon___024root___settle__TOP__0(VAsyncResetSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->AsyncResetSpec_Anon__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->AsyncResetSpec_Anon__DOT__count)));
}

VL_ATTR_COLD void VAsyncResetSpec_Anon___024root___eval_initial(VAsyncResetSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

VL_ATTR_COLD void VAsyncResetSpec_Anon___024root___eval_settle(VAsyncResetSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon___024root___eval_settle\n"); );
    // Body
    VAsyncResetSpec_Anon___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VAsyncResetSpec_Anon___024root___final(VAsyncResetSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon___024root___final\n"); );
}

VL_ATTR_COLD void VAsyncResetSpec_Anon___024root___ctor_var_reset(VAsyncResetSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->AsyncResetSpec_Anon__DOT__reg_ = VL_RAND_RESET_I(7);
    vlSelf->AsyncResetSpec_Anon__DOT__count = VL_RAND_RESET_I(2);
    vlSelf->AsyncResetSpec_Anon__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
}
