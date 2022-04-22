// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDequeueFullQueueEdgecaseTester.h for the primary calling header

#include "verilated.h"

#include "VDequeueFullQueueEdgecaseTester___024root.h"

VL_ATTR_COLD void VDequeueFullQueueEdgecaseTester___024root___settle__TOP__0(VDequeueFullQueueEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDequeueFullQueueEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDequeueFullQueueEdgecaseTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__wrap_1 
        = (4U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT___value_T_3 
        = (7U & ((IData)(1U) + (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value)));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__wrap 
        = (0x14U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__wrap 
        = (4U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value)));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_diff 
        = (7U & ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
                 - (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value)));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match 
        = ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
           == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT___currQCnt_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__flush 
        = (2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT___outCnt_T_1 
        = (0x1fU & ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt) 
                    + (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__full 
        = ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
           & (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__do_deq 
        = ((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)) 
           & (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                 & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full)))));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT___T 
        = (1U & ((~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__full)) 
                 & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister))));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__do_enq 
        = (1U & ((~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__full)) 
                 & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister))));
}

VL_ATTR_COLD void VDequeueFullQueueEdgecaseTester___024root___eval_initial(VDequeueFullQueueEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDequeueFullQueueEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDequeueFullQueueEdgecaseTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VDequeueFullQueueEdgecaseTester___024root___eval_settle(VDequeueFullQueueEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDequeueFullQueueEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDequeueFullQueueEdgecaseTester___024root___eval_settle\n"); );
    // Body
    VDequeueFullQueueEdgecaseTester___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VDequeueFullQueueEdgecaseTester___024root___final(VDequeueFullQueueEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDequeueFullQueueEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDequeueFullQueueEdgecaseTester___024root___final\n"); );
}

VL_ATTR_COLD void VDequeueFullQueueEdgecaseTester___024root___ctor_var_reset(VDequeueFullQueueEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDequeueFullQueueEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDequeueFullQueueEdgecaseTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__value = VL_RAND_RESET_I(5);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt = VL_RAND_RESET_I(5);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt = VL_RAND_RESET_I(3);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister = VL_RAND_RESET_I(1);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT___value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT___currQCnt_T_1 = VL_RAND_RESET_I(3);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT___outCnt_T_1 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value = VL_RAND_RESET_I(3);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value = VL_RAND_RESET_I(3);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT___value_T_1 = VL_RAND_RESET_I(3);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT___value_T_3 = VL_RAND_RESET_I(3);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_diff = VL_RAND_RESET_I(3);
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT____Vlvbound_he487b7cc__0 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
