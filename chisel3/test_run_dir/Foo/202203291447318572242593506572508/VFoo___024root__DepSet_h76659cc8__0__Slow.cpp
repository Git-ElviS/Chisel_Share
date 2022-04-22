// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFoo.h for the primary calling header

#include "verilated.h"

#include "VFoo___024root.h"

VL_ATTR_COLD void VFoo___024root___settle__TOP__0(VFoo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFoo___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->Foo__DOT___done_wrap_value_T_1 = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelf->Foo__DOT__done_value)));
}

VL_ATTR_COLD void VFoo___024root___eval_initial(VFoo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFoo___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VFoo___024root___eval_settle(VFoo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFoo___024root___eval_settle\n"); );
    // Body
    VFoo___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VFoo___024root___final(VFoo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFoo___024root___final\n"); );
}

VL_ATTR_COLD void VFoo___024root___ctor_var_reset(VFoo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFoo___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->Foo__DOT__done_value = VL_RAND_RESET_I(2);
    vlSelf->Foo__DOT___done_wrap_value_T_1 = VL_RAND_RESET_I(2);
}
