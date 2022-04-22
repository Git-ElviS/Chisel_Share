// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBidirectionalTester3DFill.h for the primary calling header

#include "verilated.h"

#include "VBidirectionalTester3DFill___024root.h"

VL_ATTR_COLD void VBidirectionalTester3DFill___024root___eval_initial(VBidirectionalTester3DFill___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBidirectionalTester3DFill__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBidirectionalTester3DFill___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VBidirectionalTester3DFill___024root___eval_settle(VBidirectionalTester3DFill___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBidirectionalTester3DFill__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBidirectionalTester3DFill___024root___eval_settle\n"); );
}

VL_ATTR_COLD void VBidirectionalTester3DFill___024root___final(VBidirectionalTester3DFill___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBidirectionalTester3DFill__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBidirectionalTester3DFill___024root___final\n"); );
}

VL_ATTR_COLD void VBidirectionalTester3DFill___024root___ctor_var_reset(VBidirectionalTester3DFill___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBidirectionalTester3DFill__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBidirectionalTester3DFill___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
}
