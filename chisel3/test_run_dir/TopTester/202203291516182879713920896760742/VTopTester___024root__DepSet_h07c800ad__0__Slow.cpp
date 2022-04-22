// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopTester.h for the primary calling header

#include "verilated.h"

#include "VTopTester___024root.h"

VL_ATTR_COLD void VTopTester___024root___settle__TOP__0(VTopTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->TopTester__DOT___done_wrap_value_T_1 = 
        (1U & ((IData)(1U) + (IData)(vlSelf->TopTester__DOT__done_value)));
}

VL_ATTR_COLD void VTopTester___024root___eval_initial(VTopTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VTopTester___024root___eval_settle(VTopTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester___024root___eval_settle\n"); );
    // Body
    VTopTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VTopTester___024root___final(VTopTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester___024root___final\n"); );
}

VL_ATTR_COLD void VTopTester___024root___ctor_var_reset(VTopTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTopTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->TopTester__DOT__done_value = VL_RAND_RESET_I(1);
    vlSelf->TopTester__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(1);
}
