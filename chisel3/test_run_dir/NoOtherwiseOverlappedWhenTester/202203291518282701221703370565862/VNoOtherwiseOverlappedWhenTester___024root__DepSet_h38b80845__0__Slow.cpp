// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNoOtherwiseOverlappedWhenTester.h for the primary calling header

#include "verilated.h"

#include "VNoOtherwiseOverlappedWhenTester___024root.h"

VL_ATTR_COLD void VNoOtherwiseOverlappedWhenTester___024root___settle__TOP__0(VNoOtherwiseOverlappedWhenTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoOtherwiseOverlappedWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoOtherwiseOverlappedWhenTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->NoOtherwiseOverlappedWhenTester__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->NoOtherwiseOverlappedWhenTester__DOT__value)));
}

VL_ATTR_COLD void VNoOtherwiseOverlappedWhenTester___024root___eval_initial(VNoOtherwiseOverlappedWhenTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoOtherwiseOverlappedWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoOtherwiseOverlappedWhenTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VNoOtherwiseOverlappedWhenTester___024root___eval_settle(VNoOtherwiseOverlappedWhenTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoOtherwiseOverlappedWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoOtherwiseOverlappedWhenTester___024root___eval_settle\n"); );
    // Body
    VNoOtherwiseOverlappedWhenTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VNoOtherwiseOverlappedWhenTester___024root___final(VNoOtherwiseOverlappedWhenTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoOtherwiseOverlappedWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoOtherwiseOverlappedWhenTester___024root___final\n"); );
}

VL_ATTR_COLD void VNoOtherwiseOverlappedWhenTester___024root___ctor_var_reset(VNoOtherwiseOverlappedWhenTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNoOtherwiseOverlappedWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoOtherwiseOverlappedWhenTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->NoOtherwiseOverlappedWhenTester__DOT__value = VL_RAND_RESET_I(2);
    vlSelf->NoOtherwiseOverlappedWhenTester__DOT___value_T_1 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
