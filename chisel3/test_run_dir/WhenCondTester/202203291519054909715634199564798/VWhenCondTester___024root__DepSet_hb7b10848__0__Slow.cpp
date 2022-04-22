// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWhenCondTester.h for the primary calling header

#include "verilated.h"

#include "VWhenCondTester___024root.h"

VL_ATTR_COLD void VWhenCondTester___024root___settle__TOP__0(VWhenCondTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWhenCondTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenCondTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->WhenCondTester__DOT___wrap_value_T_1 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->WhenCondTester__DOT__cycle)));
}

VL_ATTR_COLD void VWhenCondTester___024root___eval_initial(VWhenCondTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWhenCondTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenCondTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VWhenCondTester___024root___eval_settle(VWhenCondTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWhenCondTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenCondTester___024root___eval_settle\n"); );
    // Body
    VWhenCondTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VWhenCondTester___024root___final(VWhenCondTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWhenCondTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenCondTester___024root___final\n"); );
}

VL_ATTR_COLD void VWhenCondTester___024root___ctor_var_reset(VWhenCondTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWhenCondTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenCondTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->WhenCondTester__DOT__cycle = VL_RAND_RESET_I(4);
    vlSelf->WhenCondTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
