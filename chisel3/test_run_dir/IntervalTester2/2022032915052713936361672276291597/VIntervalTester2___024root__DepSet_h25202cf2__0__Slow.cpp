// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalTester2.h for the primary calling header

#include "verilated.h"

#include "VIntervalTester2___024root.h"

VL_ATTR_COLD void VIntervalTester2___024root___settle__TOP__0(VIntervalTester2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalTester2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester2___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->IntervalTester2__DOT__wrap_wrap = (0xaU 
                                               == (IData)(vlSelf->IntervalTester2__DOT__cycle));
    vlSelf->IntervalTester2__DOT___wrap_value_T_1 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->IntervalTester2__DOT__cycle)));
}

VL_ATTR_COLD void VIntervalTester2___024root___eval_initial(VIntervalTester2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalTester2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester2___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VIntervalTester2___024root___eval_settle(VIntervalTester2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalTester2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester2___024root___eval_settle\n"); );
    // Body
    VIntervalTester2___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VIntervalTester2___024root___final(VIntervalTester2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalTester2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester2___024root___final\n"); );
}

VL_ATTR_COLD void VIntervalTester2___024root___ctor_var_reset(VIntervalTester2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalTester2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalTester2___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->IntervalTester2__DOT__cycle = VL_RAND_RESET_I(4);
    vlSelf->IntervalTester2__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->IntervalTester2__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
}