// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUInt2Bundle.h for the primary calling header

#include "verilated.h"

#include "VUInt2Bundle___024root.h"

VL_ATTR_COLD void VUInt2Bundle___024root___settle__TOP__0(VUInt2Bundle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUInt2Bundle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2Bundle___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->UInt2Bundle__DOT___wrap_value_T_1 = (1U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->UInt2Bundle__DOT__cycle)));
}

VL_ATTR_COLD void VUInt2Bundle___024root___eval_initial(VUInt2Bundle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUInt2Bundle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2Bundle___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VUInt2Bundle___024root___eval_settle(VUInt2Bundle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUInt2Bundle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2Bundle___024root___eval_settle\n"); );
    // Body
    VUInt2Bundle___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VUInt2Bundle___024root___final(VUInt2Bundle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUInt2Bundle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2Bundle___024root___final\n"); );
}

VL_ATTR_COLD void VUInt2Bundle___024root___ctor_var_reset(VUInt2Bundle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUInt2Bundle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2Bundle___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->UInt2Bundle__DOT__cycle = VL_RAND_RESET_I(1);
    vlSelf->UInt2Bundle__DOT___wrap_value_T_1 = VL_RAND_RESET_I(1);
}
