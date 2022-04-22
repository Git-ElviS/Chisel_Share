// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPRNGUpdateSeedTest.h for the primary calling header

#include "verilated.h"

#include "VPRNGUpdateSeedTest___024root.h"

VL_ATTR_COLD void VPRNGUpdateSeedTest___024root___settle__TOP__0(VPRNGUpdateSeedTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGUpdateSeedTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->PRNGUpdateSeedTest__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count)));
}

VL_ATTR_COLD void VPRNGUpdateSeedTest___024root___eval_initial(VPRNGUpdateSeedTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGUpdateSeedTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VPRNGUpdateSeedTest___024root___eval_settle(VPRNGUpdateSeedTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGUpdateSeedTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest___024root___eval_settle\n"); );
    // Body
    VPRNGUpdateSeedTest___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VPRNGUpdateSeedTest___024root___final(VPRNGUpdateSeedTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGUpdateSeedTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest___024root___final\n"); );
}

VL_ATTR_COLD void VPRNGUpdateSeedTest___024root___ctor_var_reset(VPRNGUpdateSeedTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGUpdateSeedTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->PRNGUpdateSeedTest__DOT__count = VL_RAND_RESET_I(2);
    vlSelf->PRNGUpdateSeedTest__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_2 = VL_RAND_RESET_I(1);
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_3 = VL_RAND_RESET_I(1);
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_4 = VL_RAND_RESET_I(1);
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_5 = VL_RAND_RESET_I(1);
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_6 = VL_RAND_RESET_I(1);
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_7 = VL_RAND_RESET_I(1);
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_8 = VL_RAND_RESET_I(1);
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_9 = VL_RAND_RESET_I(1);
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_10 = VL_RAND_RESET_I(1);
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_11 = VL_RAND_RESET_I(1);
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_12 = VL_RAND_RESET_I(1);
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_13 = VL_RAND_RESET_I(1);
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_14 = VL_RAND_RESET_I(1);
    vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_15 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
