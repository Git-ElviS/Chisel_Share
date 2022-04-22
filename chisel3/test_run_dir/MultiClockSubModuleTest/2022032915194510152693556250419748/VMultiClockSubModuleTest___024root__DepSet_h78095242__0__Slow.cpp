// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiClockSubModuleTest.h for the primary calling header

#include "verilated.h"

#include "VMultiClockSubModuleTest___024root.h"

VL_ATTR_COLD void VMultiClockSubModuleTest___024root___settle__TOP__0(VMultiClockSubModuleTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->MultiClockSubModuleTest__DOT__inst__DOT__cycle_wrap_wrap 
        = (9U == (IData)(vlSelf->MultiClockSubModuleTest__DOT__inst__DOT__cycle));
    vlSelf->MultiClockSubModuleTest__DOT__inst__DOT___cycle_wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->MultiClockSubModuleTest__DOT__inst__DOT__cycle)));
    vlSelf->MultiClockSubModuleTest__DOT__wrap_wrap 
        = (9U == (IData)(vlSelf->MultiClockSubModuleTest__DOT__cycle));
    vlSelf->MultiClockSubModuleTest__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->MultiClockSubModuleTest__DOT__cycle)));
}

VL_ATTR_COLD void VMultiClockSubModuleTest___024root___eval_initial(VMultiClockSubModuleTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__MultiClockSubModuleTest__DOT__cDiv 
        = vlSelf->__VinpClk__TOP__MultiClockSubModuleTest__DOT__cDiv;
}

VL_ATTR_COLD void VMultiClockSubModuleTest___024root___eval_settle(VMultiClockSubModuleTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root___eval_settle\n"); );
    // Body
    VMultiClockSubModuleTest___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VMultiClockSubModuleTest___024root___final(VMultiClockSubModuleTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root___final\n"); );
}

VL_ATTR_COLD void VMultiClockSubModuleTest___024root___ctor_var_reset(VMultiClockSubModuleTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->MultiClockSubModuleTest__DOT__cycle = VL_RAND_RESET_I(4);
    vlSelf->MultiClockSubModuleTest__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->MultiClockSubModuleTest__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->MultiClockSubModuleTest__DOT__cDiv = VL_RAND_RESET_I(1);
    vlSelf->MultiClockSubModuleTest__DOT__inst__DOT__cycle = VL_RAND_RESET_I(4);
    vlSelf->MultiClockSubModuleTest__DOT__inst__DOT__cycle_wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->MultiClockSubModuleTest__DOT__inst__DOT___cycle_wrap_value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->__VinpClk__TOP__MultiClockSubModuleTest__DOT__cDiv = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__MultiClockSubModuleTest__DOT__cDiv = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
