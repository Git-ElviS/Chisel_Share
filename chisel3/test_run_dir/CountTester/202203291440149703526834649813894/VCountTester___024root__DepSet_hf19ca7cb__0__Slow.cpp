// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCountTester.h for the primary calling header

#include "verilated.h"

#include "VCountTester___024root.h"

VL_ATTR_COLD void VCountTester___024root___settle__TOP__0(VCountTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->CountTester__DOT___value_T_1 = (1U & ((IData)(1U) 
                                                  + (IData)(vlSelf->CountTester__DOT__value)));
}

VL_ATTR_COLD void VCountTester___024root___eval_initial(VCountTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VCountTester___024root___eval_settle(VCountTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountTester___024root___eval_settle\n"); );
    // Body
    VCountTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VCountTester___024root___final(VCountTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountTester___024root___final\n"); );
}

VL_ATTR_COLD void VCountTester___024root___ctor_var_reset(VCountTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->CountTester__DOT__value = VL_RAND_RESET_I(1);
    vlSelf->CountTester__DOT___value_T_1 = VL_RAND_RESET_I(1);
}
