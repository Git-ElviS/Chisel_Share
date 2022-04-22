// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShiftRegisterTester.h for the primary calling header

#include "verilated.h"

#include "VShiftRegisterTester___024root.h"

VL_ATTR_COLD void VShiftRegisterTester___024root___settle__TOP__0(VShiftRegisterTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftRegisterTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->ShiftRegisterTester__DOT___wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlSelf->ShiftRegisterTester__DOT__cnt)));
}

VL_ATTR_COLD void VShiftRegisterTester___024root___eval_initial(VShiftRegisterTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftRegisterTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VShiftRegisterTester___024root___eval_settle(VShiftRegisterTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftRegisterTester___024root___eval_settle\n"); );
    // Body
    VShiftRegisterTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VShiftRegisterTester___024root___final(VShiftRegisterTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftRegisterTester___024root___final\n"); );
}

VL_ATTR_COLD void VShiftRegisterTester___024root___ctor_var_reset(VShiftRegisterTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftRegisterTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->ShiftRegisterTester__DOT__cnt = VL_RAND_RESET_I(1);
    vlSelf->ShiftRegisterTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(1);
    vlSelf->ShiftRegisterTester__DOT__shifter_0 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
