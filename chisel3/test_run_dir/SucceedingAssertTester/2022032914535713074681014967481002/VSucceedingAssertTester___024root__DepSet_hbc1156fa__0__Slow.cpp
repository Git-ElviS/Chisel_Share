// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSucceedingAssertTester.h for the primary calling header

#include "verilated.h"

#include "VSucceedingAssertTester___024root.h"

VL_ATTR_COLD void VSucceedingAssertTester___024root___settle__TOP__0(VSucceedingAssertTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSucceedingAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->SucceedingAssertTester__DOT___done_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->SucceedingAssertTester__DOT__done_value)));
}

VL_ATTR_COLD void VSucceedingAssertTester___024root___eval_initial(VSucceedingAssertTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSucceedingAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VSucceedingAssertTester___024root___eval_settle(VSucceedingAssertTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSucceedingAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester___024root___eval_settle\n"); );
    // Body
    VSucceedingAssertTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VSucceedingAssertTester___024root___final(VSucceedingAssertTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSucceedingAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester___024root___final\n"); );
}

VL_ATTR_COLD void VSucceedingAssertTester___024root___ctor_var_reset(VSucceedingAssertTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSucceedingAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->SucceedingAssertTester__DOT__done_value = VL_RAND_RESET_I(2);
    vlSelf->SucceedingAssertTester__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(2);
}
