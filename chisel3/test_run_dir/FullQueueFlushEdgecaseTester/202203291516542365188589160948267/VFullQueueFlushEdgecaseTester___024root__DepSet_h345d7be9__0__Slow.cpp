// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFullQueueFlushEdgecaseTester.h for the primary calling header

#include "verilated.h"

#include "VFullQueueFlushEdgecaseTester___024root.h"

VL_ATTR_COLD void VFullQueueFlushEdgecaseTester___024root___settle__TOP__0(VFullQueueFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullQueueFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullQueueFlushEdgecaseTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_42 
        = ((0x13U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
            ? 7U : ((0x12U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                     ? 0U : ((0x11U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                              ? 0xfU : ((0x10U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                         ? 5U : ((0xfU 
                                                  == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                  ? 0U
                                                  : 
                                                 ((0xeU 
                                                   == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                   ? 7U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                    ? 5U
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                     ? 0xaU
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                      ? 0xdU
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                       ? 0xdU
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                        ? 7U
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                         ? 0xcU
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                          ? 0U
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                           ? 0xdU
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                            ? 0xdU
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                             ? 3U
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                              ? 6U
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                               ? 1U
                                                               : 
                                                              ((1U 
                                                                == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                                ? 8U
                                                                : 3U)))))))))))))))))));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___outCnt_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ptr_match 
        = ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
           == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__wrap 
        = (0x14U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__flush 
        = (2U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___currQCnt_T_3 
        = (7U & ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt) 
                 - (IData)(1U)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___outCnt_T_3 
        = (0x1fU & ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt) 
                    + (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_52 
        = ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__flushRegister) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___q_io_deq_ready_T 
        = (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_count 
        = ((((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__maybe_full) 
             & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ptr_match))
             ? 2U : 0U) | (1U & ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
                                 - (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value))));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__empty 
        = ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ptr_match) 
           & (~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__maybe_full)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__full 
        = ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ptr_match) 
           & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__maybe_full));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__do_deq 
        = (1U & ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                 & (~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__empty))));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___T_1 
        = (1U & ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                 & (~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__empty))));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__do_enq 
        = ((~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__full)) 
           & (0x14U > (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___T = 
        ((~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__full)) 
         & (0x14U > (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_49 
        = ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___T_1) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_22 
        = (7U & ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___T)
                  ? ((IData)(1U) + (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt))
                  : (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt)));
}

VL_ATTR_COLD void VFullQueueFlushEdgecaseTester___024root___eval_initial(VFullQueueFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullQueueFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullQueueFlushEdgecaseTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VFullQueueFlushEdgecaseTester___024root___eval_settle(VFullQueueFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullQueueFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullQueueFlushEdgecaseTester___024root___eval_settle\n"); );
    // Body
    VFullQueueFlushEdgecaseTester___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VFullQueueFlushEdgecaseTester___024root___final(VFullQueueFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullQueueFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullQueueFlushEdgecaseTester___024root___final\n"); );
}

VL_ATTR_COLD void VFullQueueFlushEdgecaseTester___024root___ctor_var_reset(VFullQueueFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullQueueFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullQueueFlushEdgecaseTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_count = VL_RAND_RESET_I(2);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__value = VL_RAND_RESET_I(5);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt = VL_RAND_RESET_I(5);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt = VL_RAND_RESET_I(3);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__flushRegister = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT___q_io_deq_ready_T = VL_RAND_RESET_I(16);
    vlSelf->FullQueueFlushEdgecaseTester__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT___value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_22 = VL_RAND_RESET_I(3);
    vlSelf->FullQueueFlushEdgecaseTester__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_42 = VL_RAND_RESET_I(4);
    vlSelf->FullQueueFlushEdgecaseTester__DOT___outCnt_T_1 = VL_RAND_RESET_I(5);
    vlSelf->FullQueueFlushEdgecaseTester__DOT___currQCnt_T_3 = VL_RAND_RESET_I(3);
    vlSelf->FullQueueFlushEdgecaseTester__DOT___outCnt_T_3 = VL_RAND_RESET_I(5);
    vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_49 = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_52 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ram[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ptr_match = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
