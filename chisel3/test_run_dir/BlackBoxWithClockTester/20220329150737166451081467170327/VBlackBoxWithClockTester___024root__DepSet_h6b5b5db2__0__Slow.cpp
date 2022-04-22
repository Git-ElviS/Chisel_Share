// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlackBoxWithClockTester.h for the primary calling header

#include "verilated.h"

#include "VBlackBoxWithClockTester___024root.h"

VL_ATTR_COLD void VBlackBoxWithClockTester___024root___settle__TOP__0(VBlackBoxWithClockTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithClockTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->BlackBoxWithClockTester__DOT__wrap_wrap 
        = (0xeU == (IData)(vlSelf->BlackBoxWithClockTester__DOT__cycles));
    vlSelf->BlackBoxWithClockTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->BlackBoxWithClockTester__DOT__cycles)));
}

VL_ATTR_COLD void VBlackBoxWithClockTester___024root___eval_initial(VBlackBoxWithClockTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithClockTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VBlackBoxWithClockTester___024root___eval_settle(VBlackBoxWithClockTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithClockTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester___024root___eval_settle\n"); );
    // Body
    VBlackBoxWithClockTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VBlackBoxWithClockTester___024root___final(VBlackBoxWithClockTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithClockTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester___024root___final\n"); );
}

VL_ATTR_COLD void VBlackBoxWithClockTester___024root___ctor_var_reset(VBlackBoxWithClockTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithClockTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->BlackBoxWithClockTester__DOT__model = VL_RAND_RESET_I(1);
    vlSelf->BlackBoxWithClockTester__DOT__cycles = VL_RAND_RESET_I(4);
    vlSelf->BlackBoxWithClockTester__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->BlackBoxWithClockTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->BlackBoxWithClockTester__DOT__blackBox__DOT__register = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
