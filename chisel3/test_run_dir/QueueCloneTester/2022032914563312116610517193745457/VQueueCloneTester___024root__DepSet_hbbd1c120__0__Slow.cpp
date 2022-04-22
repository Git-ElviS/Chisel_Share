// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueCloneTester.h for the primary calling header

#include "verilated.h"

#include "VQueueCloneTester___024root.h"

VL_ATTR_COLD void VQueueCloneTester___024root___settle__TOP__0(VQueueCloneTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueCloneTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ptr_match 
        = ((IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__enq_ptr_value) 
           == (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__deq_ptr_value));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__ptr_match 
        = ((IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__enq_ptr_value) 
           == (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__deq_ptr_value));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__empty 
        = ((IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ptr_match) 
           & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__maybe_full)));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__full 
        = ((IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ptr_match) 
           & (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__maybe_full));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__empty 
        = ((IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__ptr_match) 
           & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__maybe_full)));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__full 
        = ((IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__ptr_match) 
           & (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__maybe_full));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__do_deq 
        = ((IData)(vlSelf->QueueCloneTester__DOT__accept) 
           & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__empty)));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__do_deq 
        = (1U & ((~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__full)) 
                 & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__empty))));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__do_enq 
        = (1U & ((~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__full)) 
                 & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__empty))));
    vlSelf->QueueCloneTester__DOT___start_T = ((~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__full)) 
                                               & (IData)(vlSelf->QueueCloneTester__DOT__start));
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__do_enq 
        = ((~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__full)) 
           & (IData)(vlSelf->QueueCloneTester__DOT__start));
}

VL_ATTR_COLD void VQueueCloneTester___024root___eval_initial(VQueueCloneTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueCloneTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VQueueCloneTester___024root___eval_settle(VQueueCloneTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueCloneTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester___024root___eval_settle\n"); );
    // Body
    VQueueCloneTester___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VQueueCloneTester___024root___final(VQueueCloneTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueCloneTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester___024root___final\n"); );
}

VL_ATTR_COLD void VQueueCloneTester___024root___ctor_var_reset(VQueueCloneTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueCloneTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->QueueCloneTester__DOT___start_T = VL_RAND_RESET_I(1);
    vlSelf->QueueCloneTester__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->QueueCloneTester__DOT__accept = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__enq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__deq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__enq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__deq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__do_deq = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
