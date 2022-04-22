// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiClockMemTest.h for the primary calling header

#include "verilated.h"

#include "VMultiClockMemTest___024root.h"

VL_ATTR_COLD void VMultiClockMemTest___024root___settle__TOP__0(VMultiClockMemTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->MultiClockMemTest__DOT__wrap_wrap = (0x13U 
                                                 == (IData)(vlSelf->MultiClockMemTest__DOT__cycle));
    vlSelf->MultiClockMemTest__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->MultiClockMemTest__DOT__cycle)));
    vlSelf->MultiClockMemTest__DOT___waddr_T_1 = (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->MultiClockMemTest__DOT__waddr)));
}

VL_ATTR_COLD void VMultiClockMemTest___024root___eval_initial(VMultiClockMemTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__MultiClockMemTest__DOT__cDiv 
        = vlSelf->__VinpClk__TOP__MultiClockMemTest__DOT__cDiv;
}

VL_ATTR_COLD void VMultiClockMemTest___024root___eval_settle(VMultiClockMemTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root___eval_settle\n"); );
    // Body
    VMultiClockMemTest___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VMultiClockMemTest___024root___final(VMultiClockMemTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root___final\n"); );
}

VL_ATTR_COLD void VMultiClockMemTest___024root___ctor_var_reset(VMultiClockMemTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->MultiClockMemTest__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->MultiClockMemTest__DOT__cDiv = VL_RAND_RESET_I(1);
    vlSelf->MultiClockMemTest__DOT__cycle = VL_RAND_RESET_I(5);
    vlSelf->MultiClockMemTest__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->MultiClockMemTest__DOT___wrap_value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->MultiClockMemTest__DOT__waddr = VL_RAND_RESET_I(3);
    vlSelf->MultiClockMemTest__DOT___waddr_T_1 = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvdim0__MultiClockMemTest__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvset__MultiClockMemTest__DOT__mem__v0 = 0;
    vlSelf->__Vdlyvdim0__MultiClockMemTest__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvset__MultiClockMemTest__DOT__mem__v1 = 0;
    vlSelf->__VinpClk__TOP__MultiClockMemTest__DOT__cDiv = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__MultiClockMemTest__DOT__cDiv = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
