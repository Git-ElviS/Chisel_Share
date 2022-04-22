// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBoringUtilsSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VBoringUtilsSpec_Anon___024root.h"

VL_ATTR_COLD void VBoringUtilsSpec_Anon___024root___settle__TOP__0(VBoringUtilsSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBoringUtilsSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBoringUtilsSpec_Anon___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->BoringUtilsSpec_Anon__DOT___done_wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlSelf->BoringUtilsSpec_Anon__DOT__done_value)));
}

VL_ATTR_COLD void VBoringUtilsSpec_Anon___024root___eval_initial(VBoringUtilsSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBoringUtilsSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBoringUtilsSpec_Anon___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VBoringUtilsSpec_Anon___024root___eval_settle(VBoringUtilsSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBoringUtilsSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBoringUtilsSpec_Anon___024root___eval_settle\n"); );
    // Body
    VBoringUtilsSpec_Anon___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VBoringUtilsSpec_Anon___024root___final(VBoringUtilsSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBoringUtilsSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBoringUtilsSpec_Anon___024root___final\n"); );
}

VL_ATTR_COLD void VBoringUtilsSpec_Anon___024root___ctor_var_reset(VBoringUtilsSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBoringUtilsSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBoringUtilsSpec_Anon___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->BoringUtilsSpec_Anon__DOT__done_value = VL_RAND_RESET_I(1);
    vlSelf->BoringUtilsSpec_Anon__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(1);
}
