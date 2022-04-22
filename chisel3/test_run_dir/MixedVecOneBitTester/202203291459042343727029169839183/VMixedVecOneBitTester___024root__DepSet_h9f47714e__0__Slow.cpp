// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecOneBitTester.h for the primary calling header

#include "verilated.h"

#include "VMixedVecOneBitTester___024root.h"

VL_ATTR_COLD void VMixedVecOneBitTester___024root___settle__TOP__0(VMixedVecOneBitTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecOneBitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->MixedVecOneBitTester__DOT___GEN_1 = 1U;
}

VL_ATTR_COLD void VMixedVecOneBitTester___024root___eval_initial(VMixedVecOneBitTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecOneBitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VMixedVecOneBitTester___024root___eval_settle(VMixedVecOneBitTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecOneBitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester___024root___eval_settle\n"); );
    // Body
    VMixedVecOneBitTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VMixedVecOneBitTester___024root___final(VMixedVecOneBitTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecOneBitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester___024root___final\n"); );
}

VL_ATTR_COLD void VMixedVecOneBitTester___024root___ctor_var_reset(VMixedVecOneBitTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecOneBitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->MixedVecOneBitTester__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->MixedVecOneBitTester__DOT___GEN_1 = VL_RAND_RESET_I(1);
}
