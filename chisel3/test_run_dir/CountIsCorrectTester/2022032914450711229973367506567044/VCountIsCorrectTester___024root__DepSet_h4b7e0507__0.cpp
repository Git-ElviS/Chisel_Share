// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCountIsCorrectTester.h for the primary calling header

#include "verilated.h"

#include "VCountIsCorrectTester__Syms.h"
#include "VCountIsCorrectTester___024root.h"

VL_INLINE_OPT void VCountIsCorrectTester___024root___sequent__TOP__0(VCountIsCorrectTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCountIsCorrectTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountIsCorrectTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__full)) 
                           & (0x14U > (IData)(vlSelf->CountIsCorrectTester__DOT__value))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((((IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__maybe_full) 
                               & (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__ptr_match))
                               ? 4U : 0U) | (3U & ((IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value) 
                                                   - (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value)))) 
                            != (0x1fU & ((IData)(vlSelf->CountIsCorrectTester__DOT__value) 
                                         - (IData)(vlSelf->CountIsCorrectTester__DOT__value_1))))))) {
            VL_WRITEF("[%0t] %%Error: CountIsCorrectTester.v:433: Assertion failed in %NCountIsCorrectTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/CountIsCorrectTester/2022032914450711229973367506567044/CountIsCorrectTester.v", 433, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__full)) 
                           & (0x14U > (IData)(vlSelf->CountIsCorrectTester__DOT__value))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((((IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__maybe_full) 
                               & (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__ptr_match))
                               ? 4U : 0U) | (3U & ((IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value) 
                                                   - (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value)))) 
                            != (0x1fU & ((IData)(vlSelf->CountIsCorrectTester__DOT__value) 
                                         - (IData)(vlSelf->CountIsCorrectTester__DOT__value_1))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:88 assert(q.io.count === (inCnt.value - outCnt.value))\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((IData)(vlSelf->CountIsCorrectTester__DOT___q_io_deq_ready_T) 
                            >> 0xcU) & (~ (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__empty))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((((IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__maybe_full) 
                               & (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__ptr_match))
                               ? 4U : 0U) | (3U & ((IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value) 
                                                   - (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value)))) 
                            != (0x1fU & ((IData)(vlSelf->CountIsCorrectTester__DOT__value) 
                                         - (IData)(vlSelf->CountIsCorrectTester__DOT__value_1))))))) {
            VL_WRITEF("[%0t] %%Error: CountIsCorrectTester.v:456: Assertion failed in %NCountIsCorrectTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/CountIsCorrectTester/2022032914450711229973367506567044/CountIsCorrectTester.v", 456, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((IData)(vlSelf->CountIsCorrectTester__DOT___q_io_deq_ready_T) 
                            >> 0xcU) & (~ (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__empty))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((((IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__maybe_full) 
                               & (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__ptr_match))
                               ? 4U : 0U) | (3U & ((IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value) 
                                                   - (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value)))) 
                            != (0x1fU & ((IData)(vlSelf->CountIsCorrectTester__DOT__value) 
                                         - (IData)(vlSelf->CountIsCorrectTester__DOT__value_1))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:92 assert(q.io.count === (inCnt.value - outCnt.value))\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlSelf->CountIsCorrectTester__DOT__value_1)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/CountIsCorrectTester/2022032914450711229973367506567044/CountIsCorrectTester.v", 479, "");
        }
    }
    __Vdly__CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    __Vdly__CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((((IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_10)));
    if (vlSelf->reset) {
        vlSelf->CountIsCorrectTester__DOT__value = 0U;
        vlSelf->CountIsCorrectTester__DOT__value_1 = 0U;
        vlSelf->CountIsCorrectTester__DOT__q__DOT__maybe_full = 0U;
        vlSelf->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value = 0U;
        vlSelf->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value = 0U;
    } else {
        if (vlSelf->CountIsCorrectTester__DOT___T) {
            vlSelf->CountIsCorrectTester__DOT__value 
                = ((IData)(vlSelf->CountIsCorrectTester__DOT__wrap)
                    ? 0U : (IData)(vlSelf->CountIsCorrectTester__DOT___value_T_1));
        }
        if ((1U & (((IData)(vlSelf->CountIsCorrectTester__DOT___q_io_deq_ready_T) 
                    >> 0xcU) & (~ (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__empty))))) {
            vlSelf->CountIsCorrectTester__DOT__value_1 
                = ((IData)(vlSelf->CountIsCorrectTester__DOT__wrap_1)
                    ? 0U : (IData)(vlSelf->CountIsCorrectTester__DOT___value_T_3));
        }
        if (((IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__do_enq) 
             != (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__do_deq))) {
            vlSelf->CountIsCorrectTester__DOT__q__DOT__maybe_full 
                = vlSelf->CountIsCorrectTester__DOT__q__DOT__do_enq;
        }
        if (vlSelf->CountIsCorrectTester__DOT__q__DOT__do_enq) {
            vlSelf->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value 
                = vlSelf->CountIsCorrectTester__DOT__q__DOT___value_T_1;
        }
        if (vlSelf->CountIsCorrectTester__DOT__q__DOT__do_deq) {
            vlSelf->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value 
                = vlSelf->CountIsCorrectTester__DOT__q__DOT___value_T_3;
        }
    }
    vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    vlSelf->CountIsCorrectTester__DOT__wrap = (0x14U 
                                               == (IData)(vlSelf->CountIsCorrectTester__DOT__value));
    vlSelf->CountIsCorrectTester__DOT___value_T_1 = 
        (0x1fU & ((IData)(1U) + (IData)(vlSelf->CountIsCorrectTester__DOT__value)));
    vlSelf->CountIsCorrectTester__DOT__wrap_1 = (0x14U 
                                                 == (IData)(vlSelf->CountIsCorrectTester__DOT__value_1));
    vlSelf->CountIsCorrectTester__DOT___value_T_3 = 
        (0x1fU & ((IData)(1U) + (IData)(vlSelf->CountIsCorrectTester__DOT__value_1)));
    vlSelf->CountIsCorrectTester__DOT__q__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value)));
    vlSelf->CountIsCorrectTester__DOT__q__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value)));
    vlSelf->CountIsCorrectTester__DOT__q__DOT__ptr_match 
        = ((IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__enq_ptr_value) 
           == (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__deq_ptr_value));
    vlSelf->CountIsCorrectTester__DOT__q__DOT__empty 
        = ((IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__ptr_match) 
           & (~ (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__maybe_full)));
    vlSelf->CountIsCorrectTester__DOT__q__DOT__full 
        = ((IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__ptr_match) 
           & (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__maybe_full));
    vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    vlSelf->CountIsCorrectTester__DOT___T = ((~ (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__full)) 
                                             & (0x14U 
                                                > (IData)(vlSelf->CountIsCorrectTester__DOT__value)));
    vlSelf->CountIsCorrectTester__DOT__q__DOT__do_enq 
        = ((~ (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__full)) 
           & (0x14U > (IData)(vlSelf->CountIsCorrectTester__DOT__value)));
    vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_12));
    vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_11));
    vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_10));
    vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_9));
    vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_8));
    vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_7));
    vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_6));
    vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_5));
    vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_4));
    vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_3));
    vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_2));
    vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_1));
    vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0));
    vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = __Vdly__CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    vlSelf->CountIsCorrectTester__DOT___q_io_deq_ready_T 
        = (((IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->CountIsCorrectTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
    vlSelf->CountIsCorrectTester__DOT__q__DOT__do_deq 
        = (1U & (((IData)(vlSelf->CountIsCorrectTester__DOT___q_io_deq_ready_T) 
                  >> 0xcU) & (~ (IData)(vlSelf->CountIsCorrectTester__DOT__q__DOT__empty))));
}
