// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetAggregateTester.h for the primary calling header

#include "verilated.h"

#include "VAsyncResetAggregateTester___024root.h"

VL_ATTR_COLD void VAsyncResetAggregateTester___024root___settle__TOP__0(VAsyncResetAggregateTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->AsyncResetAggregateTester__DOT___cDiv_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->AsyncResetAggregateTester__DOT__cDiv_value)));
    vlSelf->AsyncResetAggregateTester__DOT__slowClk 
        = (3U == (IData)(vlSelf->AsyncResetAggregateTester__DOT__cDiv_value));
    vlSelf->AsyncResetAggregateTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->AsyncResetAggregateTester__DOT__count)));
    vlSelf->AsyncResetAggregateTester__DOT___T_19 = 
        ((5U <= (IData)(vlSelf->AsyncResetAggregateTester__DOT__count)) 
         & (7U > (IData)(vlSelf->AsyncResetAggregateTester__DOT__count)));
}

VL_ATTR_COLD void VAsyncResetAggregateTester___024root___eval_initial(VAsyncResetAggregateTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext 
        = vlSelf->__VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext;
    vlSelf->__Vclklast__TOP__AsyncResetAggregateTester__DOT__slowClk 
        = vlSelf->AsyncResetAggregateTester__DOT__slowClk;
}

VL_ATTR_COLD void VAsyncResetAggregateTester___024root___eval_settle(VAsyncResetAggregateTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root___eval_settle\n"); );
    // Body
    VAsyncResetAggregateTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VAsyncResetAggregateTester___024root___final(VAsyncResetAggregateTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root___final\n"); );
}

VL_ATTR_COLD void VAsyncResetAggregateTester___024root___ctor_var_reset(VAsyncResetAggregateTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->AsyncResetAggregateTester__DOT__cDiv_value = VL_RAND_RESET_I(2);
    vlSelf->AsyncResetAggregateTester__DOT___cDiv_wrap_value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->AsyncResetAggregateTester__DOT__slowClk = VL_RAND_RESET_I(1);
    vlSelf->AsyncResetAggregateTester__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->AsyncResetAggregateTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->AsyncResetAggregateTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    vlSelf->AsyncResetAggregateTester__DOT__reg_0_x = VL_RAND_RESET_I(8);
    vlSelf->AsyncResetAggregateTester__DOT__reg_0_y = VL_RAND_RESET_I(8);
    vlSelf->AsyncResetAggregateTester__DOT__reg_1_x = VL_RAND_RESET_I(8);
    vlSelf->AsyncResetAggregateTester__DOT__reg_1_y = VL_RAND_RESET_I(8);
    vlSelf->AsyncResetAggregateTester__DOT___T_19 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__AsyncResetAggregateTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
