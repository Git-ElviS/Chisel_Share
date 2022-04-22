// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClockDividerTest.h for the primary calling header

#include "verilated.h"

#include "VClockDividerTest___024root.h"

VL_ATTR_COLD void VClockDividerTest___024root___settle__TOP__0(VClockDividerTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VClockDividerTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDividerTest___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->ClockDividerTest__DOT___reg1_T_1 = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->ClockDividerTest__DOT__reg1)));
    vlSelf->ClockDividerTest__DOT___reg2_T_1 = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->ClockDividerTest__DOT__reg2)));
}

VL_ATTR_COLD void VClockDividerTest___024root___eval_initial(VClockDividerTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VClockDividerTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDividerTest___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ClockDividerTest__DOT__cDiv 
        = vlSelf->__VinpClk__TOP__ClockDividerTest__DOT__cDiv;
}

VL_ATTR_COLD void VClockDividerTest___024root___eval_settle(VClockDividerTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VClockDividerTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDividerTest___024root___eval_settle\n"); );
    // Body
    VClockDividerTest___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VClockDividerTest___024root___final(VClockDividerTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VClockDividerTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDividerTest___024root___final\n"); );
}

VL_ATTR_COLD void VClockDividerTest___024root___ctor_var_reset(VClockDividerTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VClockDividerTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDividerTest___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->ClockDividerTest__DOT__cDiv = VL_RAND_RESET_I(1);
    vlSelf->ClockDividerTest__DOT__reg1 = VL_RAND_RESET_I(8);
    vlSelf->ClockDividerTest__DOT___reg1_T_1 = VL_RAND_RESET_I(8);
    vlSelf->ClockDividerTest__DOT__reg2 = VL_RAND_RESET_I(8);
    vlSelf->ClockDividerTest__DOT___reg2_T_1 = VL_RAND_RESET_I(8);
    vlSelf->__VinpClk__TOP__ClockDividerTest__DOT__cDiv = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ClockDividerTest__DOT__cDiv = VL_RAND_RESET_I(1);
}
