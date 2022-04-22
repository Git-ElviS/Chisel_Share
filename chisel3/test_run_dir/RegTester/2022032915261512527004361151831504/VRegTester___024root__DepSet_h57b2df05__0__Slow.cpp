// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegTester.h for the primary calling header

#include "verilated.h"

#include "VRegTester___024root.h"

VL_ATTR_COLD void VRegTester___024root___eval_initial(VRegTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VRegTester___024root___eval_settle(VRegTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegTester___024root___eval_settle\n"); );
}

VL_ATTR_COLD void VRegTester___024root___final(VRegTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegTester___024root___final\n"); );
}

VL_ATTR_COLD void VRegTester___024root___ctor_var_reset(VRegTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->RegTester__DOT__doneReg = VL_RAND_RESET_I(1);
    vlSelf->RegTester__DOT__dut__DOT__vecReg_0 = VL_RAND_RESET_I(3);
    vlSelf->RegTester__DOT__dut__DOT__vecReg_1 = VL_RAND_RESET_I(3);
    vlSelf->RegTester__DOT__dut__DOT__vecReg_2 = VL_RAND_RESET_I(3);
    vlSelf->RegTester__DOT__dut__DOT__vecReg_3 = VL_RAND_RESET_I(3);
    vlSelf->RegTester__DOT__dut__DOT__vecReg_4 = VL_RAND_RESET_I(3);
    vlSelf->RegTester__DOT__dut__DOT__vecReg_5 = VL_RAND_RESET_I(3);
    vlSelf->RegTester__DOT__dut__DOT__vecReg_6 = VL_RAND_RESET_I(3);
    vlSelf->RegTester__DOT__dut__DOT__vecReg_7 = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
