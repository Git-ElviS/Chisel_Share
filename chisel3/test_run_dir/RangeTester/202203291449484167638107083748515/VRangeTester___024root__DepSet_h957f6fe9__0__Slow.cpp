// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRangeTester.h for the primary calling header

#include "verilated.h"

#include "VRangeTester___024root.h"

VL_ATTR_COLD void VRangeTester___024root___settle__TOP__0(VRangeTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRangeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRangeTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->RangeTester__DOT__wrap_wrap = (6U == (IData)(vlSelf->RangeTester__DOT__cnt));
    vlSelf->RangeTester__DOT___wrap_value_T_1 = (0x1fU 
                                                 & ((IData)(vlSelf->RangeTester__DOT__cnt) 
                                                    - (IData)(2U)));
    vlSelf->RangeTester__DOT___GEN_5 = ((6U == (IData)(vlSelf->RangeTester__DOT__cnt)) 
                                        | (IData)(vlSelf->RangeTester__DOT__checkWrap));
}

VL_ATTR_COLD void VRangeTester___024root___eval_initial(VRangeTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRangeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRangeTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VRangeTester___024root___eval_settle(VRangeTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRangeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRangeTester___024root___eval_settle\n"); );
    // Body
    VRangeTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VRangeTester___024root___final(VRangeTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRangeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRangeTester___024root___final\n"); );
}

VL_ATTR_COLD void VRangeTester___024root___ctor_var_reset(VRangeTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRangeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRangeTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->RangeTester__DOT__cnt = VL_RAND_RESET_I(5);
    vlSelf->RangeTester__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->RangeTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->RangeTester__DOT__checkWrap = VL_RAND_RESET_I(1);
    vlSelf->RangeTester__DOT___GEN_5 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
