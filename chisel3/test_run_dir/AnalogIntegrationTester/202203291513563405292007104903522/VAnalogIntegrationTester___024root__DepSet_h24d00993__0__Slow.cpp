// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAnalogIntegrationTester.h for the primary calling header

#include "verilated.h"

#include "VAnalogIntegrationTester___024root.h"

VL_ATTR_COLD void VAnalogIntegrationTester___024root___settle__TOP__0(VAnalogIntegrationTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogIntegrationTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogIntegrationTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->AnalogIntegrationTester__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle)));
}

VL_ATTR_COLD void VAnalogIntegrationTester___024root___eval_initial(VAnalogIntegrationTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogIntegrationTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogIntegrationTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VAnalogIntegrationTester___024root___eval_settle(VAnalogIntegrationTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogIntegrationTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogIntegrationTester___024root___eval_settle\n"); );
    // Body
    VAnalogIntegrationTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VAnalogIntegrationTester___024root___final(VAnalogIntegrationTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogIntegrationTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogIntegrationTester___024root___final\n"); );
}

VL_ATTR_COLD void VAnalogIntegrationTester___024root___ctor_var_reset(VAnalogIntegrationTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogIntegrationTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogIntegrationTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->AnalogIntegrationTester__DOT__cycle = VL_RAND_RESET_I(2);
    vlSelf->AnalogIntegrationTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
