// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComplexAssignTester.h for the primary calling header

#include "verilated.h"

#include "VComplexAssignTester___024root.h"

VL_ATTR_COLD void VComplexAssignTester___024root___settle__TOP__0(VComplexAssignTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->ComplexAssignTester__DOT___wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlSelf->ComplexAssignTester__DOT__cnt)));
}

VL_ATTR_COLD void VComplexAssignTester___024root___eval_initial(VComplexAssignTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VComplexAssignTester___024root___eval_settle(VComplexAssignTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester___024root___eval_settle\n"); );
    // Body
    VComplexAssignTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VComplexAssignTester___024root___final(VComplexAssignTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester___024root___final\n"); );
}

VL_ATTR_COLD void VComplexAssignTester___024root___ctor_var_reset(VComplexAssignTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->ComplexAssignTester__DOT__cnt = VL_RAND_RESET_I(1);
    vlSelf->ComplexAssignTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
