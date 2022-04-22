// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueGetsFlushedTester.h for the primary calling header

#include "verilated.h"

#include "VQueueGetsFlushedTester___024root.h"

VL_ATTR_COLD void VQueueGetsFlushedTester___024root___settle__TOP__0(VQueueGetsFlushedTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueGetsFlushedTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->QueueGetsFlushedTester__DOT___GEN_42 = 
        ((0x13U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
          ? 5U : ((0x12U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                   ? 5U : ((0x11U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                            ? 4U : ((0x10U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                     ? 3U : ((0xfU 
                                              == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                              ? 6U : 
                                             ((0xeU 
                                               == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                               ? 0U
                                               : ((0xdU 
                                                   == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                   ? 1U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                    ? 0U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                     ? 1U
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                      ? 0U
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                       ? 1U
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                        ? 5U
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                         ? 2U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                          ? 6U
                                                          : 
                                                         ((5U 
                                                           == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                           ? 3U
                                                           : 
                                                          ((4U 
                                                            == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                            ? 2U
                                                            : 
                                                           ((3U 
                                                             == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                             ? 0U
                                                             : 
                                                            ((2U 
                                                              == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                              ? 4U
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                               ? 1U
                                                               : 5U)))))))))))))))))));
    vlSelf->QueueGetsFlushedTester__DOT___outCnt_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)));
    vlSelf->QueueGetsFlushedTester__DOT__wrap = (0x14U 
                                                 == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value));
    vlSelf->QueueGetsFlushedTester__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)));
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__wrap 
        = (2U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__enq_ptr_value));
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__enq_ptr_value)));
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__wrap_1 
        = (2U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value));
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value)));
    vlSelf->QueueGetsFlushedTester__DOT___GEN_52 = 
        ((IData)(vlSelf->QueueGetsFlushedTester__DOT__flushRegister) 
         & (~ (IData)(vlSelf->reset)));
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ptr_diff 
        = (3U & ((IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__enq_ptr_value) 
                 - (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value)));
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ptr_match 
        = ((IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__enq_ptr_value) 
           == (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value));
    vlSelf->QueueGetsFlushedTester__DOT___flush_T = 
        (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_15) 
          << 0xfU) | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_14) 
                       << 0xeU) | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_13) 
                                    << 0xdU) | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_12) 
                                                 << 0xcU) 
                                                | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_11) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_10) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_9) 
                                                          << 9U) 
                                                         | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_8) 
                                                             << 8U) 
                                                            | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_7) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_6) 
                                                                   << 6U) 
                                                                  | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_5) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_4) 
                                                                         << 4U) 
                                                                        | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_3) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_2) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_0))))))))))))))));
    vlSelf->QueueGetsFlushedTester__DOT___q_io_deq_ready_T 
        = (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
    if (vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ptr_match) {
        vlSelf->QueueGetsFlushedTester__DOT__q_io_count 
            = (3U & ((IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full)
                      ? 3U : 0U));
        vlSelf->QueueGetsFlushedTester__DOT__q__DOT__empty 
            = (1U & (~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full)));
        vlSelf->QueueGetsFlushedTester__DOT__q__DOT__full 
            = vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full;
    } else {
        vlSelf->QueueGetsFlushedTester__DOT__q_io_count 
            = (3U & (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value) 
                      > (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__enq_ptr_value))
                      ? ((IData)(3U) + (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ptr_diff))
                      : (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ptr_diff)));
        vlSelf->QueueGetsFlushedTester__DOT__q__DOT__empty = 0U;
        vlSelf->QueueGetsFlushedTester__DOT__q__DOT__full = 0U;
    }
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_deq 
        = (1U & (((IData)(vlSelf->QueueGetsFlushedTester__DOT___q_io_deq_ready_T) 
                  >> 0xbU) & (~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__empty))));
    vlSelf->QueueGetsFlushedTester__DOT___T_1 = (1U 
                                                 & (((IData)(vlSelf->QueueGetsFlushedTester__DOT___q_io_deq_ready_T) 
                                                     >> 0xbU) 
                                                    & (~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__empty))));
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_enq 
        = ((~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__full)) 
           & (0x14U > (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)));
    vlSelf->QueueGetsFlushedTester__DOT___T = ((~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__full)) 
                                               & (0x14U 
                                                  > (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)));
    vlSelf->QueueGetsFlushedTester__DOT___GEN_49 = 
        ((IData)(vlSelf->QueueGetsFlushedTester__DOT___T_1) 
         & (~ (IData)(vlSelf->reset)));
    if (vlSelf->QueueGetsFlushedTester__DOT___T) {
        vlSelf->QueueGetsFlushedTester__DOT___currQCnt_T_5 
            = (7U & (IData)(vlSelf->QueueGetsFlushedTester__DOT__currQCnt));
        vlSelf->QueueGetsFlushedTester__DOT___GEN_22 
            = (7U & ((IData)(1U) + (IData)(vlSelf->QueueGetsFlushedTester__DOT__currQCnt)));
    } else {
        vlSelf->QueueGetsFlushedTester__DOT___currQCnt_T_5 
            = (7U & ((IData)(vlSelf->QueueGetsFlushedTester__DOT__currQCnt) 
                     - (IData)(1U)));
        vlSelf->QueueGetsFlushedTester__DOT___GEN_22 
            = (7U & (IData)(vlSelf->QueueGetsFlushedTester__DOT__currQCnt));
    }
    vlSelf->QueueGetsFlushedTester__DOT___outCnt_T_7 
        = (0x1fU & ((IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt) 
                    + (IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_22)));
}

VL_ATTR_COLD void VQueueGetsFlushedTester___024root___eval_initial(VQueueGetsFlushedTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueGetsFlushedTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VQueueGetsFlushedTester___024root___eval_settle(VQueueGetsFlushedTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueGetsFlushedTester___024root___eval_settle\n"); );
    // Body
    VQueueGetsFlushedTester___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VQueueGetsFlushedTester___024root___final(VQueueGetsFlushedTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueGetsFlushedTester___024root___final\n"); );
}

VL_ATTR_COLD void VQueueGetsFlushedTester___024root___ctor_var_reset(VQueueGetsFlushedTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueGetsFlushedTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q_io_count = VL_RAND_RESET_I(2);
    vlSelf->QueueGetsFlushedTester__DOT__value = VL_RAND_RESET_I(5);
    vlSelf->QueueGetsFlushedTester__DOT__outCnt = VL_RAND_RESET_I(5);
    vlSelf->QueueGetsFlushedTester__DOT__currQCnt = VL_RAND_RESET_I(3);
    vlSelf->QueueGetsFlushedTester__DOT__flushRegister = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT___q_io_deq_ready_T = VL_RAND_RESET_I(16);
    vlSelf->QueueGetsFlushedTester__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT___value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->QueueGetsFlushedTester__DOT___GEN_22 = VL_RAND_RESET_I(3);
    vlSelf->QueueGetsFlushedTester__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT___flush_T = VL_RAND_RESET_I(16);
    vlSelf->QueueGetsFlushedTester__DOT___GEN_42 = VL_RAND_RESET_I(3);
    vlSelf->QueueGetsFlushedTester__DOT___outCnt_T_1 = VL_RAND_RESET_I(5);
    vlSelf->QueueGetsFlushedTester__DOT___currQCnt_T_5 = VL_RAND_RESET_I(3);
    vlSelf->QueueGetsFlushedTester__DOT___outCnt_T_7 = VL_RAND_RESET_I(5);
    vlSelf->QueueGetsFlushedTester__DOT___GEN_49 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT___GEN_52 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ram[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__enq_ptr_value = VL_RAND_RESET_I(2);
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value = VL_RAND_RESET_I(2);
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT___value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT___value_T_3 = VL_RAND_RESET_I(2);
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ptr_diff = VL_RAND_RESET_I(2);
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT____Vlvbound_he64e4fbc__0 = VL_RAND_RESET_I(3);
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
