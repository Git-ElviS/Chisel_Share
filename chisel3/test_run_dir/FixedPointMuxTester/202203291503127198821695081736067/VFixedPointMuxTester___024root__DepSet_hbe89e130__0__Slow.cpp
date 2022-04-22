// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFixedPointMuxTester.h for the primary calling header

#include "verilated.h"

#include "VFixedPointMuxTester___024root.h"

VL_ATTR_COLD void VFixedPointMuxTester___024root___eval_initial(VFixedPointMuxTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFixedPointMuxTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFixedPointMuxTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VFixedPointMuxTester___024root___eval_settle(VFixedPointMuxTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFixedPointMuxTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFixedPointMuxTester___024root___eval_settle\n"); );
}

VL_ATTR_COLD void VFixedPointMuxTester___024root___final(VFixedPointMuxTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFixedPointMuxTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFixedPointMuxTester___024root___final\n"); );
}

VL_ATTR_COLD void VFixedPointMuxTester___024root___ctor_var_reset(VFixedPointMuxTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFixedPointMuxTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFixedPointMuxTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
}
