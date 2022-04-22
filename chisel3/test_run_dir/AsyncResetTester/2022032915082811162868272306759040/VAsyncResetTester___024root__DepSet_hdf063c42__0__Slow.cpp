// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetTester.h for the primary calling header

#include "verilated.h"

#include "VAsyncResetTester___024root.h"

VL_ATTR_COLD void VAsyncResetTester___024root___settle__TOP__0(VAsyncResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->AsyncResetTester__DOT___cDiv_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->AsyncResetTester__DOT__cDiv_value)));
    vlSelf->AsyncResetTester__DOT__slowClk = (3U == (IData)(vlSelf->AsyncResetTester__DOT__cDiv_value));
    vlSelf->AsyncResetTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->AsyncResetTester__DOT__count)));
}

VL_ATTR_COLD void VAsyncResetTester___024root___eval_initial(VAsyncResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext 
        = vlSelf->__VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext;
    vlSelf->__Vclklast__TOP__AsyncResetTester__DOT__slowClk 
        = vlSelf->AsyncResetTester__DOT__slowClk;
}

VL_ATTR_COLD void VAsyncResetTester___024root___eval_settle(VAsyncResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester___024root___eval_settle\n"); );
    // Body
    VAsyncResetTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VAsyncResetTester___024root___final(VAsyncResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester___024root___final\n"); );
}

VL_ATTR_COLD void VAsyncResetTester___024root___ctor_var_reset(VAsyncResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->AsyncResetTester__DOT__cDiv_value = VL_RAND_RESET_I(2);
    vlSelf->AsyncResetTester__DOT___cDiv_wrap_value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->AsyncResetTester__DOT__slowClk = VL_RAND_RESET_I(1);
    vlSelf->AsyncResetTester__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->AsyncResetTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->AsyncResetTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    vlSelf->AsyncResetTester__DOT__reg_ = VL_RAND_RESET_I(8);
    vlSelf->__VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__AsyncResetTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
