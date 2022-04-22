// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelinedResetTester.h for the primary calling header

#include "verilated.h"

#include "VPipelinedResetTester___024root.h"

VL_ATTR_COLD void VPipelinedResetTester___024root___settle__TOP__0(VPipelinedResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelinedResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->PipelinedResetTester__DOT___done_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->PipelinedResetTester__DOT__done_value)));
}

VL_ATTR_COLD void VPipelinedResetTester___024root___eval_initial(VPipelinedResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelinedResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VPipelinedResetTester___024root___eval_settle(VPipelinedResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelinedResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester___024root___eval_settle\n"); );
    // Body
    VPipelinedResetTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VPipelinedResetTester___024root___final(VPipelinedResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelinedResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester___024root___final\n"); );
}

VL_ATTR_COLD void VPipelinedResetTester___024root___ctor_var_reset(VPipelinedResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelinedResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->PipelinedResetTester__DOT__done_value = VL_RAND_RESET_I(2);
    vlSelf->PipelinedResetTester__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(2);
}
