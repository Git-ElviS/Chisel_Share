// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalRegisterTester.h for the primary calling header

#include "verilated.h"

#include "VIntervalRegisterTester___024root.h"

VL_ATTR_COLD void VIntervalRegisterTester___024root___settle__TOP__0(VIntervalRegisterTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalRegisterTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->IntervalRegisterTester__DOT___counter_T_1 
        = (0xfU & ((IData)(1U) + (0x1fU & VL_EXTENDS_II(5,4, (IData)(vlSelf->IntervalRegisterTester__DOT__counter)))));
}

VL_ATTR_COLD void VIntervalRegisterTester___024root___eval_initial(VIntervalRegisterTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalRegisterTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VIntervalRegisterTester___024root___eval_settle(VIntervalRegisterTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalRegisterTester___024root___eval_settle\n"); );
    // Body
    VIntervalRegisterTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VIntervalRegisterTester___024root___final(VIntervalRegisterTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalRegisterTester___024root___final\n"); );
}

VL_ATTR_COLD void VIntervalRegisterTester___024root___ctor_var_reset(VIntervalRegisterTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalRegisterTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->IntervalRegisterTester__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->IntervalRegisterTester__DOT___counter_T_1 = VL_RAND_RESET_I(4);
}
