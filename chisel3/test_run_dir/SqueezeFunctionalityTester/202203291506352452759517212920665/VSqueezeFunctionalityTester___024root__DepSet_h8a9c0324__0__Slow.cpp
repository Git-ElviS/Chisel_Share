// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSqueezeFunctionalityTester.h for the primary calling header

#include "verilated.h"

#include "VSqueezeFunctionalityTester___024root.h"

VL_ATTR_COLD void VSqueezeFunctionalityTester___024root___settle__TOP__0(VSqueezeFunctionalityTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSqueezeFunctionalityTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->SqueezeFunctionalityTester__DOT___counter_T_1 
        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->SqueezeFunctionalityTester__DOT__counter)));
}

VL_ATTR_COLD void VSqueezeFunctionalityTester___024root___eval_initial(VSqueezeFunctionalityTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSqueezeFunctionalityTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VSqueezeFunctionalityTester___024root___eval_settle(VSqueezeFunctionalityTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSqueezeFunctionalityTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester___024root___eval_settle\n"); );
    // Body
    VSqueezeFunctionalityTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VSqueezeFunctionalityTester___024root___final(VSqueezeFunctionalityTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSqueezeFunctionalityTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester___024root___final\n"); );
}

VL_ATTR_COLD void VSqueezeFunctionalityTester___024root___ctor_var_reset(VSqueezeFunctionalityTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSqueezeFunctionalityTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->SqueezeFunctionalityTester__DOT__counter = VL_RAND_RESET_I(10);
    vlSelf->SqueezeFunctionalityTester__DOT___counter_T_1 = VL_RAND_RESET_I(10);
}
