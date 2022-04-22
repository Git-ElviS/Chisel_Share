// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalChainedAddTester.h for the primary calling header

#include "verilated.h"

#include "VIntervalChainedAddTester___024root.h"

VL_ATTR_COLD void VIntervalChainedAddTester___024root___eval_initial(VIntervalChainedAddTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalChainedAddTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedAddTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VIntervalChainedAddTester___024root___eval_settle(VIntervalChainedAddTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalChainedAddTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedAddTester___024root___eval_settle\n"); );
}

VL_ATTR_COLD void VIntervalChainedAddTester___024root___final(VIntervalChainedAddTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalChainedAddTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedAddTester___024root___final\n"); );
}

VL_ATTR_COLD void VIntervalChainedAddTester___024root___ctor_var_reset(VIntervalChainedAddTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalChainedAddTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedAddTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
}
