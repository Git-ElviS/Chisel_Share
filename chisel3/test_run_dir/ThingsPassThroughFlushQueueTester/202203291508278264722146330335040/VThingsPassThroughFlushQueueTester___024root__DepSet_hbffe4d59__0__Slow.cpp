// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VThingsPassThroughFlushQueueTester.h for the primary calling header

#include "verilated.h"

#include "VThingsPassThroughFlushQueueTester___024root.h"

VL_ATTR_COLD void VThingsPassThroughFlushQueueTester___024root___settle__TOP__0(VThingsPassThroughFlushQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VThingsPassThroughFlushQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughFlushQueueTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__wrap_1 
        = (0x14U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1)));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__wrap 
        = (0x14U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value)));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT___T 
        = ((~ (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__maybe_full)) 
           & (0x14U > (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value)));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__do_enq 
        = ((~ (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__maybe_full)) 
           & (0x14U > (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value)));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT___q_io_deq_ready_T 
        = (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__do_deq 
        = (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT___q_io_deq_ready_T) 
            >> 4U) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__maybe_full));
}

VL_ATTR_COLD void VThingsPassThroughFlushQueueTester___024root___eval_initial(VThingsPassThroughFlushQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VThingsPassThroughFlushQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughFlushQueueTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VThingsPassThroughFlushQueueTester___024root___eval_settle(VThingsPassThroughFlushQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VThingsPassThroughFlushQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughFlushQueueTester___024root___eval_settle\n"); );
    // Body
    VThingsPassThroughFlushQueueTester___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VThingsPassThroughFlushQueueTester___024root___final(VThingsPassThroughFlushQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VThingsPassThroughFlushQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughFlushQueueTester___024root___final\n"); );
}

VL_ATTR_COLD void VThingsPassThroughFlushQueueTester___024root___ctor_var_reset(VThingsPassThroughFlushQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VThingsPassThroughFlushQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughFlushQueueTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__value = VL_RAND_RESET_I(5);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1 = VL_RAND_RESET_I(5);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT___q_io_deq_ready_T = VL_RAND_RESET_I(16);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__wrap = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT___value_T_1 = VL_RAND_RESET_I(5);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__wrap_1 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT___value_T_3 = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram_io_deq_bits_MPORT_en_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__maybe_full = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_4 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_5 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_6 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_7 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_8 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_9 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_10 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_11 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_12 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_13 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_14 = VL_RAND_RESET_I(1);
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_15 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
