// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSyncReadMemBundleTester.h for the primary calling header

#include "verilated.h"

#include "VSyncReadMemBundleTester___024root.h"

VL_ATTR_COLD void VSyncReadMemBundleTester___024root___settle__TOP__0(VSyncReadMemBundleTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemBundleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemBundleTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->SyncReadMemBundleTester__DOT__cnt_wrap_wrap 
        = (4U == (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt));
    vlSelf->SyncReadMemBundleTester__DOT___cnt_wrap_value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->SyncReadMemBundleTester__DOT__cnt)));
}

VL_ATTR_COLD void VSyncReadMemBundleTester___024root___eval_initial(VSyncReadMemBundleTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemBundleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemBundleTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VSyncReadMemBundleTester___024root___eval_settle(VSyncReadMemBundleTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemBundleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemBundleTester___024root___eval_settle\n"); );
    // Body
    VSyncReadMemBundleTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VSyncReadMemBundleTester___024root___final(VSyncReadMemBundleTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemBundleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemBundleTester___024root___final\n"); );
}

VL_ATTR_COLD void VSyncReadMemBundleTester___024root___ctor_var_reset(VSyncReadMemBundleTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemBundleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemBundleTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->SyncReadMemBundleTester__DOT__mem_foo[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->SyncReadMemBundleTester__DOT__mem_foo_rdata_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->SyncReadMemBundleTester__DOT__mem_foo_rdata_addr_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->SyncReadMemBundleTester__DOT__cnt = VL_RAND_RESET_I(3);
    vlSelf->SyncReadMemBundleTester__DOT__cnt_wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->SyncReadMemBundleTester__DOT___cnt_wrap_value_T_1 = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
