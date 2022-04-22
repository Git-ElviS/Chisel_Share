// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStopImmediatelyTester.h for the primary calling header

#include "verilated.h"

#include "VStopImmediatelyTester___024root.h"

VL_ATTR_COLD void VStopImmediatelyTester___024root___settle__TOP__0(VStopImmediatelyTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStopImmediatelyTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->StopImmediatelyTester__DOT___cycle_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->StopImmediatelyTester__DOT__cycle)));
}

VL_ATTR_COLD void VStopImmediatelyTester___024root___eval_initial(VStopImmediatelyTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStopImmediatelyTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VStopImmediatelyTester___024root___eval_settle(VStopImmediatelyTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStopImmediatelyTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester___024root___eval_settle\n"); );
    // Body
    VStopImmediatelyTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VStopImmediatelyTester___024root___final(VStopImmediatelyTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStopImmediatelyTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester___024root___final\n"); );
}

VL_ATTR_COLD void VStopImmediatelyTester___024root___ctor_var_reset(VStopImmediatelyTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStopImmediatelyTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->StopImmediatelyTester__DOT__cycle = VL_RAND_RESET_I(4);
    vlSelf->StopImmediatelyTester__DOT___cycle_T_1 = VL_RAND_RESET_I(4);
}
