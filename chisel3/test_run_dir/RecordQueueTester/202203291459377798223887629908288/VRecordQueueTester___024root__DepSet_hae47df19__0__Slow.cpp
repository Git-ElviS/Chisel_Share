// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRecordQueueTester.h for the primary calling header

#include "verilated.h"

#include "VRecordQueueTester___024root.h"

VL_ATTR_COLD void VRecordQueueTester___024root___settle__TOP__0(VRecordQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRecordQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->RecordQueueTester__DOT__queue__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__deq_ptr_value)));
    vlSelf->RecordQueueTester__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->RecordQueueTester__DOT__cycle)));
    vlSelf->RecordQueueTester__DOT__queue__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__enq_ptr_value)));
    vlSelf->RecordQueueTester__DOT__queue__DOT__ptr_match 
        = ((IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__enq_ptr_value) 
           == (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__deq_ptr_value));
    vlSelf->RecordQueueTester__DOT__queue__DOT__empty 
        = ((IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__ptr_match) 
           & (~ (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__maybe_full)));
    vlSelf->RecordQueueTester__DOT__queue__DOT__full 
        = ((IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__ptr_match) 
           & (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__maybe_full));
    vlSelf->RecordQueueTester__DOT__queue__DOT__do_enq 
        = ((~ (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__full)) 
           & (0U == (IData)(vlSelf->RecordQueueTester__DOT__cycle)));
}

VL_ATTR_COLD void VRecordQueueTester___024root___eval_initial(VRecordQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRecordQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VRecordQueueTester___024root___eval_settle(VRecordQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRecordQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester___024root___eval_settle\n"); );
    // Body
    VRecordQueueTester___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VRecordQueueTester___024root___final(VRecordQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRecordQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester___024root___final\n"); );
}

VL_ATTR_COLD void VRecordQueueTester___024root___ctor_var_reset(VRecordQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRecordQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->RecordQueueTester__DOT__cycle = VL_RAND_RESET_I(2);
    vlSelf->RecordQueueTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->RecordQueueTester__DOT__queue__DOT__ram_bar[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->RecordQueueTester__DOT__queue__DOT__ram_foo[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RecordQueueTester__DOT__queue__DOT__enq_ptr_value = VL_RAND_RESET_I(2);
    vlSelf->RecordQueueTester__DOT__queue__DOT__deq_ptr_value = VL_RAND_RESET_I(2);
    vlSelf->RecordQueueTester__DOT__queue__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->RecordQueueTester__DOT__queue__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->RecordQueueTester__DOT__queue__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->RecordQueueTester__DOT__queue__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->RecordQueueTester__DOT__queue__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->RecordQueueTester__DOT__queue__DOT___value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->RecordQueueTester__DOT__queue__DOT___value_T_3 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
