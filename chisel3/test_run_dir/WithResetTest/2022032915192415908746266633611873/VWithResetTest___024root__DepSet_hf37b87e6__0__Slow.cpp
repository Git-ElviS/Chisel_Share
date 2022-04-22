// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWithResetTest.h for the primary calling header

#include "verilated.h"

#include "VWithResetTest___024root.h"

VL_ATTR_COLD void VWithResetTest___024root___settle__TOP__0(VWithResetTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWithResetTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWithResetTest___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->WithResetTest__DOT___reg_T_3 = (0xffU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->WithResetTest__DOT__reg_)));
    vlSelf->WithResetTest__DOT__wrap_wrap = (9U == (IData)(vlSelf->WithResetTest__DOT__cycle));
    vlSelf->WithResetTest__DOT___wrap_value_T_1 = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->WithResetTest__DOT__cycle)));
}

VL_ATTR_COLD void VWithResetTest___024root___eval_initial(VWithResetTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWithResetTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWithResetTest___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VWithResetTest___024root___eval_settle(VWithResetTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWithResetTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWithResetTest___024root___eval_settle\n"); );
    // Body
    VWithResetTest___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VWithResetTest___024root___final(VWithResetTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWithResetTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWithResetTest___024root___final\n"); );
}

VL_ATTR_COLD void VWithResetTest___024root___ctor_var_reset(VWithResetTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWithResetTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWithResetTest___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->WithResetTest__DOT__cycle = VL_RAND_RESET_I(4);
    vlSelf->WithResetTest__DOT__reg_ = VL_RAND_RESET_I(8);
    vlSelf->WithResetTest__DOT___reg_T_3 = VL_RAND_RESET_I(8);
    vlSelf->WithResetTest__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->WithResetTest__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
