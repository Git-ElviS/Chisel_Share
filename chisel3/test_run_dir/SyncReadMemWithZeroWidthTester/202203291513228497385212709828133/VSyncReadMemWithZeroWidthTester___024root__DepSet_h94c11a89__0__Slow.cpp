// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSyncReadMemWithZeroWidthTester.h for the primary calling header

#include "verilated.h"

#include "VSyncReadMemWithZeroWidthTester___024root.h"

VL_ATTR_COLD void VSyncReadMemWithZeroWidthTester___024root___settle__TOP__0(VSyncReadMemWithZeroWidthTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWithZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWithZeroWidthTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->SyncReadMemWithZeroWidthTester__DOT__cnt_wrap_wrap 
        = (2U == (IData)(vlSelf->SyncReadMemWithZeroWidthTester__DOT__cnt));
    vlSelf->SyncReadMemWithZeroWidthTester__DOT___cnt_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->SyncReadMemWithZeroWidthTester__DOT__cnt)));
}

VL_ATTR_COLD void VSyncReadMemWithZeroWidthTester___024root___eval_initial(VSyncReadMemWithZeroWidthTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWithZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWithZeroWidthTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VSyncReadMemWithZeroWidthTester___024root___eval_settle(VSyncReadMemWithZeroWidthTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWithZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWithZeroWidthTester___024root___eval_settle\n"); );
    // Body
    VSyncReadMemWithZeroWidthTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VSyncReadMemWithZeroWidthTester___024root___final(VSyncReadMemWithZeroWidthTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWithZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWithZeroWidthTester___024root___final\n"); );
}

VL_ATTR_COLD void VSyncReadMemWithZeroWidthTester___024root___ctor_var_reset(VSyncReadMemWithZeroWidthTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWithZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWithZeroWidthTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->SyncReadMemWithZeroWidthTester__DOT__cnt = VL_RAND_RESET_I(2);
    vlSelf->SyncReadMemWithZeroWidthTester__DOT__cnt_wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->SyncReadMemWithZeroWidthTester__DOT___cnt_wrap_value_T_1 = VL_RAND_RESET_I(2);
}
