// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VResetTester.h for the primary calling header

#include "verilated.h"

#include "VResetTester___024root.h"

VL_ATTR_COLD void VResetTester___024root___settle__TOP__0(VResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->ResetTester__DOT___value_wrap_value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ResetTester__DOT__value)));
    vlSelf->ResetTester__DOT__triggerReset = (1U == (IData)(vlSelf->ResetTester__DOT__value));
}

VL_ATTR_COLD void VResetTester___024root___eval_initial(VResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VResetTester___024root___eval_settle(VResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetTester___024root___eval_settle\n"); );
    // Body
    VResetTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VResetTester___024root___final(VResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetTester___024root___final\n"); );
}

VL_ATTR_COLD void VResetTester___024root___ctor_var_reset(VResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->ResetTester__DOT__wasReset = VL_RAND_RESET_I(1);
    vlSelf->ResetTester__DOT__value = VL_RAND_RESET_I(3);
    vlSelf->ResetTester__DOT___value_wrap_value_T_1 = VL_RAND_RESET_I(3);
    vlSelf->ResetTester__DOT__triggerReset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
