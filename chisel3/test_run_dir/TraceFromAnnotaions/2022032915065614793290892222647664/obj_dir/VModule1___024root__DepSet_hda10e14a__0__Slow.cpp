// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VModule1.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VModule1___024root.h"

VL_ATTR_COLD void VModule1___024root___settle__TOP__0(VModule1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModule1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModule1___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->Module1__DOT__m0__DOT__o_a_b = vlSelf->Module1__DOT__m0__DOT__r_a_b;
}

VL_ATTR_COLD void VModule1___024root___eval_initial(VModule1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModule1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModule1___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VModule1___024root___eval_settle(VModule1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModule1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModule1___024root___eval_settle\n"); );
    // Body
    VModule1___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VModule1___024root___final(VModule1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModule1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModule1___024root___final\n"); );
}

VL_ATTR_COLD void VModule1___024root___ctor_var_reset(VModule1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModule1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModule1___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->i_a_a = VL_RAND_RESET_I(8);
    vlSelf->i_a_b = VL_RAND_RESET_I(1);
    vlSelf->i_b_0_0 = VL_RAND_RESET_I(1);
    vlSelf->i_b_0_1 = VL_RAND_RESET_I(1);
    vlSelf->i_b_0_2 = VL_RAND_RESET_I(1);
    vlSelf->i_b_0_3 = VL_RAND_RESET_I(1);
    vlSelf->i_b_1_0 = VL_RAND_RESET_I(1);
    vlSelf->i_b_1_1 = VL_RAND_RESET_I(1);
    vlSelf->i_b_1_2 = VL_RAND_RESET_I(1);
    vlSelf->i_b_1_3 = VL_RAND_RESET_I(1);
    vlSelf->i_b_2_0 = VL_RAND_RESET_I(1);
    vlSelf->i_b_2_1 = VL_RAND_RESET_I(1);
    vlSelf->i_b_2_2 = VL_RAND_RESET_I(1);
    vlSelf->i_b_2_3 = VL_RAND_RESET_I(1);
    vlSelf->i_b_3_0 = VL_RAND_RESET_I(1);
    vlSelf->i_b_3_1 = VL_RAND_RESET_I(1);
    vlSelf->i_b_3_2 = VL_RAND_RESET_I(1);
    vlSelf->i_b_3_3 = VL_RAND_RESET_I(1);
    vlSelf->Module1__DOT__m0__DOT__o_a_b = VL_RAND_RESET_I(1);
    vlSelf->Module1__DOT__m0__DOT__r_a_b = VL_RAND_RESET_I(1);
}
