// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVecLiteralSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VVecLiteralSpec_Anon___024root.h"

VL_ATTR_COLD void VVecLiteralSpec_Anon___024root___settle__TOP__0(VVecLiteralSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVecLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecLiteralSpec_Anon___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->VecLiteralSpec_Anon__DOT___wrap_value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->VecLiteralSpec_Anon__DOT__counter)));
}

VL_ATTR_COLD void VVecLiteralSpec_Anon___024root___eval_initial(VVecLiteralSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVecLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecLiteralSpec_Anon___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VVecLiteralSpec_Anon___024root___eval_settle(VVecLiteralSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVecLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecLiteralSpec_Anon___024root___eval_settle\n"); );
    // Body
    VVecLiteralSpec_Anon___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VVecLiteralSpec_Anon___024root___final(VVecLiteralSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVecLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecLiteralSpec_Anon___024root___final\n"); );
}

VL_ATTR_COLD void VVecLiteralSpec_Anon___024root___ctor_var_reset(VVecLiteralSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVecLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecLiteralSpec_Anon___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->VecLiteralSpec_Anon__DOT__counter = VL_RAND_RESET_I(3);
    vlSelf->VecLiteralSpec_Anon__DOT___wrap_value_T_1 = VL_RAND_RESET_I(3);
    vlSelf->VecLiteralSpec_Anon__DOT__m__DOT__y_1 = VL_RAND_RESET_I(8);
    vlSelf->VecLiteralSpec_Anon__DOT__m__DOT__y_2 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
