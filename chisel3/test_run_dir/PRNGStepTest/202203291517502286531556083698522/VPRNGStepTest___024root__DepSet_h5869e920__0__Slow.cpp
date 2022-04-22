// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPRNGStepTest.h for the primary calling header

#include "verilated.h"

#include "VPRNGStepTest___024root.h"

VL_ATTR_COLD void VPRNGStepTest___024root___settle__TOP__0(VPRNGStepTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGStepTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->PRNGStepTest__DOT___done_wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->PRNGStepTest__DOT__done_value)));
    vlSelf->PRNGStepTest__DOT___count4_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->PRNGStepTest__DOT__count4)));
    vlSelf->PRNGStepTest__DOT__c_prng__DOT___GEN_0 
        = ((3U == (IData)(vlSelf->PRNGStepTest__DOT__count4))
            ? (IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_12)
            : (IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_0));
    vlSelf->PRNGStepTest__DOT___count2_wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlSelf->PRNGStepTest__DOT__count2)));
    vlSelf->PRNGStepTest__DOT__b_prng__DOT___GEN_0 
        = ((IData)(vlSelf->PRNGStepTest__DOT__count2)
            ? (IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_14)
            : (IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_0));
}

VL_ATTR_COLD void VPRNGStepTest___024root___eval_initial(VPRNGStepTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGStepTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VPRNGStepTest___024root___eval_settle(VPRNGStepTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGStepTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest___024root___eval_settle\n"); );
    // Body
    VPRNGStepTest___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VPRNGStepTest___024root___final(VPRNGStepTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGStepTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest___024root___final\n"); );
}

VL_ATTR_COLD void VPRNGStepTest___024root___ctor_var_reset(VPRNGStepTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGStepTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__count2 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT___count2_wrap_value_T_1 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__count4 = VL_RAND_RESET_I(2);
    vlSelf->PRNGStepTest__DOT___count4_wrap_value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->PRNGStepTest__DOT__done_value = VL_RAND_RESET_I(4);
    vlSelf->PRNGStepTest__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__b_prng__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    vlSelf->PRNGStepTest__DOT__c_prng__DOT___GEN_0 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
