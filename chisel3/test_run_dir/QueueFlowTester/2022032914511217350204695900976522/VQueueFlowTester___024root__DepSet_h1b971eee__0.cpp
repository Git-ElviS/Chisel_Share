// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueFlowTester.h for the primary calling header

#include "verilated.h"

#include "VQueueFlowTester__Syms.h"
#include "VQueueFlowTester___024root.h"

VL_INLINE_OPT void VQueueFlowTester___024root___sequent__TOP__0(VQueueFlowTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueFlowTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFlowTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_valid) 
                                     | ((~ (IData)(vlSelf->QueueFlowTester__DOT__q__DOT__maybe_full)) 
                                        & (~ ((~ (IData)(vlSelf->QueueFlowTester__DOT__q__DOT__maybe_full)) 
                                              & (0x14U 
                                                 > (IData)(vlSelf->QueueFlowTester__DOT__value))))))))))) {
            VL_WRITEF("[%0t] %%Error: QueueFlowTester.v:439: Assertion failed in %NQueueFlowTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueFlowTester/2022032914511217350204695900976522/QueueFlowTester.v", 439, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ ((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_valid) 
                                     | ((~ (IData)(vlSelf->QueueFlowTester__DOT__q__DOT__maybe_full)) 
                                        & (~ ((~ (IData)(vlSelf->QueueFlowTester__DOT__q__DOT__maybe_full)) 
                                              & (0x14U 
                                                 > (IData)(vlSelf->QueueFlowTester__DOT__value))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:169 assert(q.io.deq.valid || (q.io.count === 0.U && !q.io.enq.fire))\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlSelf->QueueFlowTester__DOT__value_1)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueFlowTester/2022032914511217350204695900976522/QueueFlowTester.v", 463, "");
        }
    }
    __Vdly__QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    __Vdly__QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_10)));
    if (vlSelf->reset) {
        vlSelf->QueueFlowTester__DOT__value_1 = 0U;
        vlSelf->QueueFlowTester__DOT__value = 0U;
        vlSelf->QueueFlowTester__DOT__q__DOT__maybe_full = 0U;
    } else {
        if ((((IData)(vlSelf->QueueFlowTester__DOT___q_io_deq_ready_T) 
              >> 0xbU) & (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_valid))) {
            vlSelf->QueueFlowTester__DOT__value_1 = 
                ((IData)(vlSelf->QueueFlowTester__DOT__wrap_1)
                  ? 0U : (IData)(vlSelf->QueueFlowTester__DOT___value_T_3));
        }
        if (vlSelf->QueueFlowTester__DOT___T_6) {
            vlSelf->QueueFlowTester__DOT__value = ((IData)(vlSelf->QueueFlowTester__DOT__wrap)
                                                    ? 0U
                                                    : (IData)(vlSelf->QueueFlowTester__DOT___value_T_1));
        }
        if (((IData)(vlSelf->QueueFlowTester__DOT__q__DOT__do_enq) 
             != (IData)(vlSelf->QueueFlowTester__DOT__q__DOT__do_deq))) {
            vlSelf->QueueFlowTester__DOT__q__DOT__maybe_full 
                = ((IData)(vlSelf->QueueFlowTester__DOT__q__DOT__empty)
                    ? ((~ ((IData)(vlSelf->QueueFlowTester__DOT___q_io_deq_ready_T) 
                           >> 0xbU)) & (IData)(vlSelf->QueueFlowTester__DOT__q__DOT___do_enq_T))
                    : (IData)(vlSelf->QueueFlowTester__DOT__q__DOT___do_enq_T));
        }
    }
    vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    vlSelf->QueueFlowTester__DOT__wrap_1 = (0x14U == (IData)(vlSelf->QueueFlowTester__DOT__value_1));
    vlSelf->QueueFlowTester__DOT___value_T_3 = (0x1fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->QueueFlowTester__DOT__value_1)));
    vlSelf->QueueFlowTester__DOT__wrap = (0x14U == (IData)(vlSelf->QueueFlowTester__DOT__value));
    vlSelf->QueueFlowTester__DOT___value_T_1 = (0x1fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->QueueFlowTester__DOT__value)));
    vlSelf->QueueFlowTester__DOT__q__DOT__empty = (1U 
                                                   & (~ (IData)(vlSelf->QueueFlowTester__DOT__q__DOT__maybe_full)));
    vlSelf->QueueFlowTester__DOT___T_6 = ((~ (IData)(vlSelf->QueueFlowTester__DOT__q__DOT__maybe_full)) 
                                          & (0x14U 
                                             > (IData)(vlSelf->QueueFlowTester__DOT__value)));
    vlSelf->QueueFlowTester__DOT__q__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->QueueFlowTester__DOT__q__DOT__maybe_full)) 
           & (0x14U > (IData)(vlSelf->QueueFlowTester__DOT__value)));
    vlSelf->QueueFlowTester__DOT__q_io_deq_valid = 
        ((0x14U > (IData)(vlSelf->QueueFlowTester__DOT__value)) 
         | (IData)(vlSelf->QueueFlowTester__DOT__q__DOT__maybe_full));
    vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_12));
    vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_11));
    vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_10));
    vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_9));
    vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_8));
    vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_7));
    vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_6));
    vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_5));
    vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_4));
    vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_3));
    vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_2));
    vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_1));
    vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_0));
    vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = __Vdly__QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    vlSelf->QueueFlowTester__DOT___q_io_deq_ready_T 
        = (((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
    if (vlSelf->QueueFlowTester__DOT__q__DOT__maybe_full) {
        vlSelf->QueueFlowTester__DOT__q__DOT__do_enq 
            = vlSelf->QueueFlowTester__DOT__q__DOT___do_enq_T;
        vlSelf->QueueFlowTester__DOT__q__DOT__do_deq 
            = (((IData)(vlSelf->QueueFlowTester__DOT___q_io_deq_ready_T) 
                >> 0xbU) & (IData)(vlSelf->QueueFlowTester__DOT__q_io_deq_valid));
    } else {
        vlSelf->QueueFlowTester__DOT__q__DOT__do_enq 
            = ((~ ((IData)(vlSelf->QueueFlowTester__DOT___q_io_deq_ready_T) 
                   >> 0xbU)) & (IData)(vlSelf->QueueFlowTester__DOT__q__DOT___do_enq_T));
        vlSelf->QueueFlowTester__DOT__q__DOT__do_deq = 0U;
    }
}
