// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPopCountTester.h for the primary calling header

#include "verilated.h"

#include "VPopCountTester___024root.h"

VL_ATTR_COLD void VPopCountTester___024root___settle__TOP__0(VPopCountTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPopCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->PopCountTester__DOT___x_T_1 = (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->PopCountTester__DOT__x)));
}

VL_ATTR_COLD void VPopCountTester___024root___eval_initial(VPopCountTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPopCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VPopCountTester___024root___eval_settle(VPopCountTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPopCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester___024root___eval_settle\n"); );
    // Body
    VPopCountTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VPopCountTester___024root___final(VPopCountTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPopCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester___024root___final\n"); );
}

VL_ATTR_COLD void VPopCountTester___024root___ctor_var_reset(VPopCountTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPopCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->PopCountTester__DOT__x = VL_RAND_RESET_I(3);
    vlSelf->PopCountTester__DOT___x_T_1 = VL_RAND_RESET_I(3);
    vlSelf->PopCountTester__DOT__REG = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
