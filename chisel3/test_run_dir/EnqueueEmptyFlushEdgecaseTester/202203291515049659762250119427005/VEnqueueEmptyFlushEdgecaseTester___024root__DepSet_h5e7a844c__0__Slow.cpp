// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEnqueueEmptyFlushEdgecaseTester.h for the primary calling header

#include "verilated.h"

#include "VEnqueueEmptyFlushEdgecaseTester___024root.h"

VL_ATTR_COLD void VEnqueueEmptyFlushEdgecaseTester___024root___settle__TOP__0(VEnqueueEmptyFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEnqueueEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnqueueEmptyFlushEdgecaseTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___T_22 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2)));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___GEN_40 
        = ((0x10U == (0x1fU & ((IData)(1U) + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
            ? 2U : ((0xfU == (0x1fU & ((IData)(1U) 
                                       + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                     ? 0U : ((0xeU == (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                              ? 6U : ((0xdU == (0x1fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                       ? 5U : ((0xcU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                ? 1U
                                                : (
                                                   (0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                    ? 6U
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                     ? 2U
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                      ? 2U
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                       ? 7U
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                        ? 0U
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                         ? 2U
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(1U) 
                                                              + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                          ? 5U
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(1U) 
                                                               + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                           ? 1U
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                            ? 5U
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                             ? 1U
                                                             : 5U)))))))))))))));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__wrap_2 
        = (0x14U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__wrap_1 
        = (2U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value)));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__wrap 
        = (2U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value)));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ptr_diff 
        = (3U & ((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
                 - (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value)));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ptr_match 
        = ((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
           == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__wrap 
        = (0x14U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value)));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__wrap_1 
        = (0x14U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1)));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_flush 
        = ((0U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1)) 
           & (0U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value)));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T 
        = (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__empty 
        = ((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ptr_match) 
           & (~ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__full 
        = ((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ptr_match) 
           & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___T_1 
        = (IData)((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                    >> 0xfU) & (~ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__empty))));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__do_deq 
        = (IData)((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                    >> 0xfU) & (~ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__empty))));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___T 
        = ((~ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__full)) 
           & (0x14U > (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value)));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__do_enq 
        = ((~ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__full)) 
           & (0x14U > (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value)));
}

VL_ATTR_COLD void VEnqueueEmptyFlushEdgecaseTester___024root___eval_initial(VEnqueueEmptyFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEnqueueEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnqueueEmptyFlushEdgecaseTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VEnqueueEmptyFlushEdgecaseTester___024root___eval_settle(VEnqueueEmptyFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEnqueueEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnqueueEmptyFlushEdgecaseTester___024root___eval_settle\n"); );
    // Body
    VEnqueueEmptyFlushEdgecaseTester___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VEnqueueEmptyFlushEdgecaseTester___024root___final(VEnqueueEmptyFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEnqueueEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnqueueEmptyFlushEdgecaseTester___024root___final\n"); );
}

VL_ATTR_COLD void VEnqueueEmptyFlushEdgecaseTester___024root___ctor_var_reset(VEnqueueEmptyFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEnqueueEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnqueueEmptyFlushEdgecaseTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_flush = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value = VL_RAND_RESET_I(5);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__flushRegister = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T = VL_RAND_RESET_I(16);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1 = VL_RAND_RESET_I(5);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2 = VL_RAND_RESET_I(5);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___value_T_3 = VL_RAND_RESET_I(5);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___T_22 = VL_RAND_RESET_I(5);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___GEN_40 = VL_RAND_RESET_I(3);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__wrap_2 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value = VL_RAND_RESET_I(2);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value = VL_RAND_RESET_I(2);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT___value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT___value_T_3 = VL_RAND_RESET_I(2);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ptr_diff = VL_RAND_RESET_I(2);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT____Vlvbound_he64e4fbc__0 = VL_RAND_RESET_I(3);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
