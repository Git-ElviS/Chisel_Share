// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSyncReadMemTester.h for the primary calling header

#include "verilated.h"

#include "VSyncReadMemTester___024root.h"

VL_ATTR_COLD void VSyncReadMemTester___024root___settle__TOP__0(VSyncReadMemTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->SyncReadMemTester__DOT__cnt_wrap_wrap = 
        (4U == (IData)(vlSelf->SyncReadMemTester__DOT__cnt));
    vlSelf->SyncReadMemTester__DOT___cnt_wrap_value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->SyncReadMemTester__DOT__cnt)));
}

VL_ATTR_COLD void VSyncReadMemTester___024root___eval_initial(VSyncReadMemTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VSyncReadMemTester___024root___eval_settle(VSyncReadMemTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemTester___024root___eval_settle\n"); );
    // Body
    VSyncReadMemTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VSyncReadMemTester___024root___final(VSyncReadMemTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemTester___024root___final\n"); );
}

VL_ATTR_COLD void VSyncReadMemTester___024root___ctor_var_reset(VSyncReadMemTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->SyncReadMemTester__DOT__mem[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->SyncReadMemTester__DOT__mem_rdata_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->SyncReadMemTester__DOT__mem_rdata_addr_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->SyncReadMemTester__DOT__cnt = VL_RAND_RESET_I(3);
    vlSelf->SyncReadMemTester__DOT__cnt_wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->SyncReadMemTester__DOT___cnt_wrap_value_T_1 = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
