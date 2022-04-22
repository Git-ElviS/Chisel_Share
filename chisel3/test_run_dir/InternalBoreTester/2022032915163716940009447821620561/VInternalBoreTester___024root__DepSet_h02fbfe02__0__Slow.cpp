// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInternalBoreTester.h for the primary calling header

#include "verilated.h"

#include "VInternalBoreTester___024root.h"

VL_ATTR_COLD void VInternalBoreTester___024root___settle__TOP__0(VInternalBoreTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInternalBoreTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInternalBoreTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->InternalBoreTester__DOT___done_wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlSelf->InternalBoreTester__DOT__done_value)));
}

VL_ATTR_COLD void VInternalBoreTester___024root___eval_initial(VInternalBoreTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInternalBoreTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInternalBoreTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VInternalBoreTester___024root___eval_settle(VInternalBoreTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInternalBoreTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInternalBoreTester___024root___eval_settle\n"); );
    // Body
    VInternalBoreTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VInternalBoreTester___024root___final(VInternalBoreTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInternalBoreTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInternalBoreTester___024root___final\n"); );
}

VL_ATTR_COLD void VInternalBoreTester___024root___ctor_var_reset(VInternalBoreTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInternalBoreTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInternalBoreTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->InternalBoreTester__DOT__done_value = VL_RAND_RESET_I(1);
    vlSelf->InternalBoreTester__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(1);
}
