// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecUIntDynamicIndexTester.h for the primary calling header

#include "verilated.h"

#include "VMixedVecUIntDynamicIndexTester___024root.h"

VL_ATTR_COLD void VMixedVecUIntDynamicIndexTester___024root___settle__TOP__0(VMixedVecUIntDynamicIndexTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecUIntDynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->MixedVecUIntDynamicIndexTester__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->MixedVecUIntDynamicIndexTester__DOT__cycle)));
}

VL_ATTR_COLD void VMixedVecUIntDynamicIndexTester___024root___eval_initial(VMixedVecUIntDynamicIndexTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecUIntDynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VMixedVecUIntDynamicIndexTester___024root___eval_settle(VMixedVecUIntDynamicIndexTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecUIntDynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester___024root___eval_settle\n"); );
    // Body
    VMixedVecUIntDynamicIndexTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VMixedVecUIntDynamicIndexTester___024root___final(VMixedVecUIntDynamicIndexTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecUIntDynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester___024root___final\n"); );
}

VL_ATTR_COLD void VMixedVecUIntDynamicIndexTester___024root___ctor_var_reset(VMixedVecUIntDynamicIndexTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecUIntDynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->MixedVecUIntDynamicIndexTester__DOT__cycle = VL_RAND_RESET_I(2);
    vlSelf->MixedVecUIntDynamicIndexTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
}
