// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSyncReadMemWriteCollisionTester.h for the primary calling header

#include "verilated.h"

#include "VSyncReadMemWriteCollisionTester___024root.h"

VL_ATTR_COLD void VSyncReadMemWriteCollisionTester___024root___settle__TOP__0(VSyncReadMemWriteCollisionTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWriteCollisionTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWriteCollisionTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt_wrap_wrap 
        = (4U == (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt));
    vlSelf->SyncReadMemWriteCollisionTester__DOT___cnt_wrap_value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt)));
}

VL_ATTR_COLD void VSyncReadMemWriteCollisionTester___024root___eval_initial(VSyncReadMemWriteCollisionTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWriteCollisionTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWriteCollisionTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VSyncReadMemWriteCollisionTester___024root___eval_settle(VSyncReadMemWriteCollisionTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWriteCollisionTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWriteCollisionTester___024root___eval_settle\n"); );
    // Body
    VSyncReadMemWriteCollisionTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VSyncReadMemWriteCollisionTester___024root___final(VSyncReadMemWriteCollisionTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWriteCollisionTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWriteCollisionTester___024root___final\n"); );
}

VL_ATTR_COLD void VSyncReadMemWriteCollisionTester___024root___ctor_var_reset(VSyncReadMemWriteCollisionTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWriteCollisionTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWriteCollisionTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->SyncReadMemWriteCollisionTester__DOT__m0[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->SyncReadMemWriteCollisionTester__DOT__m0_rd0_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->SyncReadMemWriteCollisionTester__DOT__m0_rd0_addr_pipe_0 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->SyncReadMemWriteCollisionTester__DOT__m1[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->SyncReadMemWriteCollisionTester__DOT__m1_rd1_data_pipe_0 = VL_RAND_RESET_I(2);
    vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt = VL_RAND_RESET_I(3);
    vlSelf->SyncReadMemWriteCollisionTester__DOT__cnt_wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->SyncReadMemWriteCollisionTester__DOT___cnt_wrap_value_T_1 = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
