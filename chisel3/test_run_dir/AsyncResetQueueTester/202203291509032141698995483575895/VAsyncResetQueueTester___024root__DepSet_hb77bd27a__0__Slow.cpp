// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetQueueTester.h for the primary calling header

#include "verilated.h"

#include "VAsyncResetQueueTester___024root.h"

VL_ATTR_COLD void VAsyncResetQueueTester___024root___settle__TOP__0(VAsyncResetQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->AsyncResetQueueTester__DOT___cDiv_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->AsyncResetQueueTester__DOT__cDiv_value)));
    vlSelf->AsyncResetQueueTester__DOT__queue_clock 
        = (3U == (IData)(vlSelf->AsyncResetQueueTester__DOT__cDiv_value));
    vlSelf->AsyncResetQueueTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->AsyncResetQueueTester__DOT__count)));
    vlSelf->AsyncResetQueueTester__DOT__queue__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value)));
    vlSelf->AsyncResetQueueTester__DOT__queue__DOT__full 
        = ((0U == (IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value)) 
           & (IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__maybe_full));
    vlSelf->AsyncResetQueueTester__DOT__queue_io_count 
        = ((((IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__maybe_full) 
             & (0U == (IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value)))
             ? 4U : 0U) | (IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value));
}

VL_ATTR_COLD void VAsyncResetQueueTester___024root___eval_initial(VAsyncResetQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext 
        = vlSelf->__VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext;
    vlSelf->__Vclklast__TOP__AsyncResetQueueTester__DOT__queue_clock 
        = vlSelf->AsyncResetQueueTester__DOT__queue_clock;
}

VL_ATTR_COLD void VAsyncResetQueueTester___024root___eval_settle(VAsyncResetQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root___eval_settle\n"); );
    // Body
    VAsyncResetQueueTester___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VAsyncResetQueueTester___024root___final(VAsyncResetQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root___final\n"); );
}

VL_ATTR_COLD void VAsyncResetQueueTester___024root___ctor_var_reset(VAsyncResetQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->AsyncResetQueueTester__DOT__queue_clock = VL_RAND_RESET_I(1);
    vlSelf->AsyncResetQueueTester__DOT__queue_io_count = VL_RAND_RESET_I(3);
    vlSelf->AsyncResetQueueTester__DOT__cDiv_value = VL_RAND_RESET_I(2);
    vlSelf->AsyncResetQueueTester__DOT___cDiv_wrap_value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->AsyncResetQueueTester__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->AsyncResetQueueTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->AsyncResetQueueTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    vlSelf->AsyncResetQueueTester__DOT__doCheck = VL_RAND_RESET_I(1);
    vlSelf->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value = VL_RAND_RESET_I(2);
    vlSelf->AsyncResetQueueTester__DOT__queue__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->AsyncResetQueueTester__DOT__queue__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->AsyncResetQueueTester__DOT__queue__DOT___value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->__VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__AsyncResetQueueTester__DOT__asyncResetNext = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
