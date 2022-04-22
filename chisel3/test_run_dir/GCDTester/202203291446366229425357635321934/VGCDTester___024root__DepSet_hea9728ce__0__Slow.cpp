// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGCDTester.h for the primary calling header

#include "verilated.h"

#include "VGCDTester___024root.h"

VL_ATTR_COLD void VGCDTester___024root___settle__TOP__0(VGCDTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCDTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->GCDTester__DOT__dut__DOT___x_T_1 = (vlSelf->GCDTester__DOT__dut__DOT__x 
                                                - vlSelf->GCDTester__DOT__dut__DOT__y);
    vlSelf->GCDTester__DOT__dut__DOT___y_T_1 = (vlSelf->GCDTester__DOT__dut__DOT__y 
                                                - vlSelf->GCDTester__DOT__dut__DOT__x);
    vlSelf->GCDTester__DOT___GEN_0 = 0U;
}

VL_ATTR_COLD void VGCDTester___024root___eval_initial(VGCDTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCDTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VGCDTester___024root___eval_settle(VGCDTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCDTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester___024root___eval_settle\n"); );
    // Body
    VGCDTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VGCDTester___024root___final(VGCDTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCDTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester___024root___final\n"); );
}

VL_ATTR_COLD void VGCDTester___024root___ctor_var_reset(VGCDTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCDTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->GCDTester__DOT__first = VL_RAND_RESET_I(1);
    vlSelf->GCDTester__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->GCDTester__DOT__dut__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->GCDTester__DOT__dut__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->GCDTester__DOT__dut__DOT___x_T_1 = VL_RAND_RESET_I(32);
    vlSelf->GCDTester__DOT__dut__DOT___y_T_1 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
