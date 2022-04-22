// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBundle2UInt.h for the primary calling header

#include "verilated.h"

#include "VBundle2UInt___024root.h"

VL_ATTR_COLD void VBundle2UInt___024root___settle__TOP__0(VBundle2UInt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBundle2UInt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundle2UInt___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->Bundle2UInt__DOT___wrap_value_T_1 = (1U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->Bundle2UInt__DOT__cycle)));
}

VL_ATTR_COLD void VBundle2UInt___024root___eval_initial(VBundle2UInt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBundle2UInt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundle2UInt___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VBundle2UInt___024root___eval_settle(VBundle2UInt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBundle2UInt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundle2UInt___024root___eval_settle\n"); );
    // Body
    VBundle2UInt___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VBundle2UInt___024root___final(VBundle2UInt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBundle2UInt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundle2UInt___024root___final\n"); );
}

VL_ATTR_COLD void VBundle2UInt___024root___ctor_var_reset(VBundle2UInt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBundle2UInt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundle2UInt___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->Bundle2UInt__DOT__cycle = VL_RAND_RESET_I(1);
    vlSelf->Bundle2UInt__DOT___wrap_value_T_1 = VL_RAND_RESET_I(1);
}
