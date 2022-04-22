// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAnalogSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VAnalogSpec_Anon___024root.h"

VL_ATTR_COLD void VAnalogSpec_Anon___024root___settle__TOP__0(VAnalogSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogSpec_Anon___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->AnalogSpec_Anon__DOT___wrap_value_T_1 = 
        (1U & ((IData)(1U) + (IData)(vlSelf->AnalogSpec_Anon__DOT__cycle)));
}

VL_ATTR_COLD void VAnalogSpec_Anon___024root___eval_initial(VAnalogSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogSpec_Anon___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VAnalogSpec_Anon___024root___eval_settle(VAnalogSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogSpec_Anon___024root___eval_settle\n"); );
    // Body
    VAnalogSpec_Anon___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VAnalogSpec_Anon___024root___final(VAnalogSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogSpec_Anon___024root___final\n"); );
}

VL_ATTR_COLD void VAnalogSpec_Anon___024root___ctor_var_reset(VAnalogSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogSpec_Anon___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->AnalogSpec_Anon__DOT__cycle = VL_RAND_RESET_I(1);
    vlSelf->AnalogSpec_Anon__DOT___wrap_value_T_1 = VL_RAND_RESET_I(1);
}
