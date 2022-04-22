// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSubmoduleWhenTester.h for the primary calling header

#include "verilated.h"

#include "VSubmoduleWhenTester___024root.h"

VL_ATTR_COLD void VSubmoduleWhenTester___024root___settle__TOP__0(VSubmoduleWhenTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSubmoduleWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleWhenTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->SubmoduleWhenTester__DOT__wrap_wrap = (2U 
                                                   == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle));
    vlSelf->SubmoduleWhenTester__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle)));
}

VL_ATTR_COLD void VSubmoduleWhenTester___024root___eval_initial(VSubmoduleWhenTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSubmoduleWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleWhenTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VSubmoduleWhenTester___024root___eval_settle(VSubmoduleWhenTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSubmoduleWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleWhenTester___024root___eval_settle\n"); );
    // Body
    VSubmoduleWhenTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VSubmoduleWhenTester___024root___final(VSubmoduleWhenTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSubmoduleWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleWhenTester___024root___final\n"); );
}

VL_ATTR_COLD void VSubmoduleWhenTester___024root___ctor_var_reset(VSubmoduleWhenTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSubmoduleWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleWhenTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->SubmoduleWhenTester__DOT__cycle = VL_RAND_RESET_I(2);
    vlSelf->SubmoduleWhenTester__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->SubmoduleWhenTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
