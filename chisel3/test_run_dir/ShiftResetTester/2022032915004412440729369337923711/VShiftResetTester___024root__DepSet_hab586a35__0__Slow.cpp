// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShiftResetTester.h for the primary calling header

#include "verilated.h"

#include "VShiftResetTester___024root.h"

VL_ATTR_COLD void VShiftResetTester___024root___eval_initial(VShiftResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VShiftResetTester___024root___eval_settle(VShiftResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester___024root___eval_settle\n"); );
}

VL_ATTR_COLD void VShiftResetTester___024root___final(VShiftResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester___024root___final\n"); );
}

VL_ATTR_COLD void VShiftResetTester___024root___ctor_var_reset(VShiftResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->ShiftResetTester__DOT__sr_r = VL_RAND_RESET_I(5);
    vlSelf->ShiftResetTester__DOT__sr = VL_RAND_RESET_I(5);
}
