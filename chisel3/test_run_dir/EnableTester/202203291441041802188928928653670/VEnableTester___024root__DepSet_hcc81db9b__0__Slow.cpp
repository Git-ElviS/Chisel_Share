// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEnableTester.h for the primary calling header

#include "verilated.h"

#include "VEnableTester___024root.h"

VL_ATTR_COLD void VEnableTester___024root___settle__TOP__0(VEnableTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEnableTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->EnableTester__DOT___cntEnVal_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->EnableTester__DOT__cntEnVal)));
    vlSelf->EnableTester__DOT__done_wrap_wrap = (0x20U 
                                                 == (IData)(vlSelf->EnableTester__DOT__done_value));
    vlSelf->EnableTester__DOT___done_wrap_value_T_1 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->EnableTester__DOT__done_value)));
}

VL_ATTR_COLD void VEnableTester___024root___eval_initial(VEnableTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEnableTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VEnableTester___024root___eval_settle(VEnableTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEnableTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester___024root___eval_settle\n"); );
    // Body
    VEnableTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VEnableTester___024root___final(VEnableTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEnableTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester___024root___final\n"); );
}

VL_ATTR_COLD void VEnableTester___024root___ctor_var_reset(VEnableTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEnableTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->EnableTester__DOT__ens = VL_RAND_RESET_I(29);
    vlSelf->EnableTester__DOT__cntEnVal = VL_RAND_RESET_I(5);
    vlSelf->EnableTester__DOT___cntEnVal_wrap_value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->EnableTester__DOT__done_value = VL_RAND_RESET_I(6);
    vlSelf->EnableTester__DOT__done_wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->EnableTester__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
