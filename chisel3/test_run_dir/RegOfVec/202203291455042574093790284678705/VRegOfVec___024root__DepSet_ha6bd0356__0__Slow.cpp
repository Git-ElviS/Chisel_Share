// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegOfVec.h for the primary calling header

#include "verilated.h"

#include "VRegOfVec___024root.h"

VL_ATTR_COLD void VRegOfVec___024root___settle__TOP__0(VRegOfVec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegOfVec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegOfVec___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->RegOfVec__DOT__wrap_wrap = (2U == (IData)(vlSelf->RegOfVec__DOT__cycle));
    vlSelf->RegOfVec__DOT___wrap_value_T_1 = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelf->RegOfVec__DOT__cycle)));
}

VL_ATTR_COLD void VRegOfVec___024root___eval_initial(VRegOfVec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegOfVec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegOfVec___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VRegOfVec___024root___eval_settle(VRegOfVec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegOfVec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegOfVec___024root___eval_settle\n"); );
    // Body
    VRegOfVec___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VRegOfVec___024root___final(VRegOfVec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegOfVec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegOfVec___024root___final\n"); );
}

VL_ATTR_COLD void VRegOfVec___024root___ctor_var_reset(VRegOfVec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegOfVec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegOfVec___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->RegOfVec__DOT__cycle = VL_RAND_RESET_I(2);
    vlSelf->RegOfVec__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->RegOfVec__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
}
