// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVecOfBool2UInt.h for the primary calling header

#include "verilated.h"

#include "VVecOfBool2UInt___024root.h"

VL_ATTR_COLD void VVecOfBool2UInt___024root___settle__TOP__0(VVecOfBool2UInt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVecOfBool2UInt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecOfBool2UInt___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->VecOfBool2UInt__DOT___wrap_value_T_1 = 
        (1U & ((IData)(1U) + (IData)(vlSelf->VecOfBool2UInt__DOT__cycle)));
}

VL_ATTR_COLD void VVecOfBool2UInt___024root___eval_initial(VVecOfBool2UInt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVecOfBool2UInt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecOfBool2UInt___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VVecOfBool2UInt___024root___eval_settle(VVecOfBool2UInt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVecOfBool2UInt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecOfBool2UInt___024root___eval_settle\n"); );
    // Body
    VVecOfBool2UInt___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VVecOfBool2UInt___024root___final(VVecOfBool2UInt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVecOfBool2UInt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecOfBool2UInt___024root___final\n"); );
}

VL_ATTR_COLD void VVecOfBool2UInt___024root___ctor_var_reset(VVecOfBool2UInt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVecOfBool2UInt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecOfBool2UInt___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->VecOfBool2UInt__DOT__cycle = VL_RAND_RESET_I(1);
    vlSelf->VecOfBool2UInt__DOT___wrap_value_T_1 = VL_RAND_RESET_I(1);
}
