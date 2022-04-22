// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLFSRResetTester.h for the primary calling header

#include "verilated.h"

#include "VLFSRResetTester___024root.h"

VL_ATTR_COLD void VLFSRResetTester___024root___settle__TOP__0(VLFSRResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->LFSRResetTester__DOT__wrap_wrap = (4U == (IData)(vlSelf->LFSRResetTester__DOT__count));
    vlSelf->LFSRResetTester__DOT___wrap_value_T_1 = 
        (7U & ((IData)(1U) + (IData)(vlSelf->LFSRResetTester__DOT__count)));
    vlSelf->LFSRResetTester__DOT__lfsr__DOT___GEN_4 
        = ((1U == (IData)(vlSelf->LFSRResetTester__DOT__count)) 
           | (IData)(vlSelf->LFSRResetTester__DOT__lfsr__DOT__state_0));
}

VL_ATTR_COLD void VLFSRResetTester___024root___eval_initial(VLFSRResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VLFSRResetTester___024root___eval_settle(VLFSRResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester___024root___eval_settle\n"); );
    // Body
    VLFSRResetTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VLFSRResetTester___024root___final(VLFSRResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester___024root___final\n"); );
}

VL_ATTR_COLD void VLFSRResetTester___024root___ctor_var_reset(VLFSRResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->LFSRResetTester__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->LFSRResetTester__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->LFSRResetTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(3);
    vlSelf->LFSRResetTester__DOT__lfsr__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->LFSRResetTester__DOT__lfsr__DOT___GEN_4 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
