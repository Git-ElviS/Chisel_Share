// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBundleLiteralSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VBundleLiteralSpec_Anon___024root.h"

VL_ATTR_COLD void VBundleLiteralSpec_Anon___024root___settle__TOP__0(VBundleLiteralSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBundleLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleLiteralSpec_Anon___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->BundleLiteralSpec_Anon__DOT___r_T_1 = (
                                                   ((IData)(vlSelf->BundleLiteralSpec_Anon__DOT__r_a) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->BundleLiteralSpec_Anon__DOT__r_b) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->BundleLiteralSpec_Anon__DOT__r_c)));
}

VL_ATTR_COLD void VBundleLiteralSpec_Anon___024root___eval_initial(VBundleLiteralSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBundleLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleLiteralSpec_Anon___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VBundleLiteralSpec_Anon___024root___eval_settle(VBundleLiteralSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBundleLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleLiteralSpec_Anon___024root___eval_settle\n"); );
    // Body
    VBundleLiteralSpec_Anon___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VBundleLiteralSpec_Anon___024root___final(VBundleLiteralSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBundleLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleLiteralSpec_Anon___024root___final\n"); );
}

VL_ATTR_COLD void VBundleLiteralSpec_Anon___024root___ctor_var_reset(VBundleLiteralSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBundleLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleLiteralSpec_Anon___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->BundleLiteralSpec_Anon__DOT__r_a = VL_RAND_RESET_I(8);
    vlSelf->BundleLiteralSpec_Anon__DOT__r_b = VL_RAND_RESET_I(1);
    vlSelf->BundleLiteralSpec_Anon__DOT__r_c = VL_RAND_RESET_I(1);
    vlSelf->BundleLiteralSpec_Anon__DOT___r_T_1 = VL_RAND_RESET_I(10);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
