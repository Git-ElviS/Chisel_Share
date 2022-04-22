// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueGetsFlushedTester.h for the primary calling header

#include "verilated.h"

#include "VQueueGetsFlushedTester__Syms.h"
#include "VQueueGetsFlushedTester___024root.h"

VL_INLINE_OPT void VQueueGetsFlushedTester___024root___sequent__TOP__0(VQueueGetsFlushedTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueGetsFlushedTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__QueueGetsFlushedTester__DOT__currQCnt;
    CData/*0:0*/ __Vdlyvval__QueueGetsFlushedTester__DOT__q__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__QueueGetsFlushedTester__DOT__q__DOT__ram__v0;
    CData/*0:0*/ __Vdly__QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    CData/*0:0*/ __Vdly__QueueGetsFlushedTester__DOT__flush_prng__DOT__state_0;
    // Body
    __Vdlyvset__QueueGetsFlushedTester__DOT__q__DOT__ram__v0 = 0U;
    __Vdly__QueueGetsFlushedTester__DOT__currQCnt = vlSelf->QueueGetsFlushedTester__DOT__currQCnt;
    __Vdly__QueueGetsFlushedTester__DOT__flush_prng__DOT__state_0 
        = vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_0;
    __Vdly__QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    if (((~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full)) 
         & (0x14U > (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)))) {
        __Vdlyvval__QueueGetsFlushedTester__DOT__q__DOT__ram__v0 
            = ((0x13U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
               | ((0x12U != (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                  & ((0x11U != (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                     & ((0x10U != (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                        & ((0xfU != (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                           & ((0xeU != (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                              & ((0xdU != (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                                 & ((0xcU != (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                                    & ((0xbU == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                                       | ((0xaU != (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                                          & ((9U != (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                                             & ((8U 
                                                 == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                                                | ((7U 
                                                    == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                                                   | ((6U 
                                                       != (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                                                      & ((5U 
                                                          != (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                                                         & ((4U 
                                                             != (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                                                            & ((3U 
                                                                != (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                                                               & (2U 
                                                                  != (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)))))))))))))))))));
        __Vdlyvset__QueueGetsFlushedTester__DOT__q__DOT__ram__v0 = 1U;
    }
    __Vdly__QueueGetsFlushedTester__DOT__currQCnt = 
        ((IData)(vlSelf->reset) ? 0U : ((0x2000U & (IData)(vlSelf->QueueGetsFlushedTester__DOT___flush_T))
                                         ? 0U : ((IData)(vlSelf->QueueGetsFlushedTester__DOT___T_1)
                                                  ? 
                                                 ((0U 
                                                   < (IData)(vlSelf->QueueGetsFlushedTester__DOT__currQCnt))
                                                   ? (IData)(vlSelf->QueueGetsFlushedTester__DOT___currQCnt_T_5)
                                                   : (IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_22))
                                                  : (IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_22))));
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->QueueGetsFlushedTester__DOT___T_1) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flushRegister)))) {
            VL_WRITEF("[%0t] %%Error: QueueGetsFlushedTester.v:545: Assertion failed in %NQueueGetsFlushedTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueGetsFlushedTester/202203291511562484038384812561337/QueueGetsFlushedTester.v", 545, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->QueueGetsFlushedTester__DOT___T_1) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flushRegister)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:60 assert(flushRegister === false.B) //check queue isn't flushed (can't dequeue an empty queue)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->QueueGetsFlushedTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full)))) {
            VL_WRITEF("[%0t] %%Error: QueueGetsFlushedTester.v:569: Assertion failed in %NQueueGetsFlushedTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueGetsFlushedTester/202203291511562484038384812561337/QueueGetsFlushedTester.v", 569, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->QueueGetsFlushedTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:64 assert(q.io.count === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_61) 
                         & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full)))) {
            VL_WRITEF("[%0t] %%Error: QueueGetsFlushedTester.v:591: Assertion failed in %NQueueGetsFlushedTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueGetsFlushedTester/202203291511562484038384812561337/QueueGetsFlushedTester.v", 591, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_61) 
                         & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Expected to not be able to dequeue when flush is asserted the previous cycle\n    at QueueFlushSpec.scala:65 assert(!q.io.deq.valid, \"Expected to not be able to dequeue when flush is asserted the previous cycle\")\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_61) 
                         & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full)))) {
            VL_WRITEF("[%0t] %%Error: QueueGetsFlushedTester.v:615: Assertion failed in %NQueueGetsFlushedTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueGetsFlushedTester/202203291511562484038384812561337/QueueGetsFlushedTester.v", 615, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_61) 
                         & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Expected enqueue to be ready when flush was asserted the previous cycle because queue should be empty\n    at QueueFlushSpec.scala:66 assert(\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueGetsFlushedTester/202203291511562484038384812561337/QueueGetsFlushedTester.v", 639, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_58) 
                         & (1U < (IData)(vlSelf->QueueGetsFlushedTester__DOT__currQCnt))))) {
            VL_WRITEF("[%0t] %%Error: QueueGetsFlushedTester.v:650: Assertion failed in %NQueueGetsFlushedTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueGetsFlushedTester/202203291511562484038384812561337/QueueGetsFlushedTester.v", 650, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_58) 
                         & (1U < (IData)(vlSelf->QueueGetsFlushedTester__DOT__currQCnt))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:91 assert(currQCnt <= queueDepth.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_58) 
                         & (((0x13U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
                             | (IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_41)) 
                            != vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ram
                            [0U])))) {
            VL_WRITEF("[%0t] %%Error: QueueGetsFlushedTester.v:672: Assertion failed in %NQueueGetsFlushedTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueGetsFlushedTester/202203291511562484038384812561337/QueueGetsFlushedTester.v", 672, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_58) 
                         & (((0x13U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
                             | (IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_41)) 
                            != vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ram
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:92 assert(elems(outCnt) === q.io.deq.bits)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((((IData)(vlSelf->QueueGetsFlushedTester__DOT___flush_T) 
                                 >> 0xdU) & (~ (IData)(vlSelf->reset))) 
                               & (~ ((0U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__currQCnt)) 
                                     | (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full))))))) {
            VL_WRITEF("[%0t] %%Error: QueueGetsFlushedTester.v:695: Assertion failed in %NQueueGetsFlushedTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueGetsFlushedTester/202203291511562484038384812561337/QueueGetsFlushedTester.v", 695, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((((IData)(vlSelf->QueueGetsFlushedTester__DOT___flush_T) 
                                 >> 0xdU) & (~ (IData)(vlSelf->reset))) 
                               & (~ ((0U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__currQCnt)) 
                                     | (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:99 assert(currQCnt === 0.U || q.io.deq.valid)\n");
        }
    }
    __Vdly__QueueGetsFlushedTester__DOT__flush_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_15) 
                                       ^ (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_13)) 
                                      ^ (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_12)) 
                                     ^ (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_10)));
    __Vdly__QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_10)));
    if (__Vdlyvset__QueueGetsFlushedTester__DOT__q__DOT__ram__v0) {
        vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ram[0U] 
            = __Vdlyvval__QueueGetsFlushedTester__DOT__q__DOT__ram__v0;
    }
    vlSelf->QueueGetsFlushedTester__DOT__currQCnt = __Vdly__QueueGetsFlushedTester__DOT__currQCnt;
    vlSelf->QueueGetsFlushedTester__DOT__flushRegister 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->QueueGetsFlushedTester__DOT___flush_T) 
                                               >> 0xdU)));
    if (vlSelf->reset) {
        vlSelf->QueueGetsFlushedTester__DOT__outCnt = 0U;
        vlSelf->QueueGetsFlushedTester__DOT__value = 0U;
        vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full = 0U;
    } else {
        if ((0x2000U & (IData)(vlSelf->QueueGetsFlushedTester__DOT___flush_T))) {
            vlSelf->QueueGetsFlushedTester__DOT__outCnt 
                = vlSelf->QueueGetsFlushedTester__DOT___outCnt_T_7;
        } else if (vlSelf->QueueGetsFlushedTester__DOT___T_1) {
            vlSelf->QueueGetsFlushedTester__DOT__outCnt 
                = vlSelf->QueueGetsFlushedTester__DOT___outCnt_T_1;
        }
        if (vlSelf->QueueGetsFlushedTester__DOT___T) {
            vlSelf->QueueGetsFlushedTester__DOT__value 
                = ((IData)(vlSelf->QueueGetsFlushedTester__DOT__wrap)
                    ? 0U : (IData)(vlSelf->QueueGetsFlushedTester__DOT___value_T_1));
        }
        if ((0x2000U & (IData)(vlSelf->QueueGetsFlushedTester__DOT___flush_T))) {
            vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full = 0U;
        } else if (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_enq) 
                    != (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_deq))) {
            vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full 
                = vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_enq;
        }
    }
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_14));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    vlSelf->QueueGetsFlushedTester__DOT___GEN_41 = 
        ((0x12U != (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
         & ((0x11U != (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
            & ((0x10U != (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
               & ((0xfU != (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
                  & ((0xeU != (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
                     & ((0xdU != (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
                        & ((0xcU != (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
                           & ((0xbU == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
                              | ((0xaU != (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
                                 & ((9U != (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
                                    & ((8U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
                                       | ((7U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
                                          | ((6U != (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
                                             & ((5U 
                                                 != (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
                                                & ((4U 
                                                    != (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
                                                   & ((3U 
                                                       != (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)) 
                                                      & (2U 
                                                         != (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))))))))))))))))));
    vlSelf->QueueGetsFlushedTester__DOT___outCnt_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)));
    vlSelf->QueueGetsFlushedTester__DOT__wrap = (0x14U 
                                                 == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value));
    vlSelf->QueueGetsFlushedTester__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)));
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_enq 
        = ((~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full)) 
           & (0x14U > (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)));
    vlSelf->QueueGetsFlushedTester__DOT___T = ((~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full)) 
                                               & (0x14U 
                                                  > (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)));
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_13));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_13));
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
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_12));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_12));
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_11));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_11));
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_10));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_10));
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_9));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_9));
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_8));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_8));
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_7));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_7));
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_6));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_6));
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_5));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_5));
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_4));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_4));
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_3));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_3));
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_2));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_2));
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_1));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_1));
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_0));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_0));
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_0 
        = __Vdly__QueueGetsFlushedTester__DOT__flush_prng__DOT__state_0;
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = __Vdly__QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_0;
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
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_deq 
        = (((IData)(vlSelf->QueueGetsFlushedTester__DOT___q_io_deq_ready_T) 
            >> 0xaU) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full));
    vlSelf->QueueGetsFlushedTester__DOT___T_1 = (((IData)(vlSelf->QueueGetsFlushedTester__DOT___q_io_deq_ready_T) 
                                                  >> 0xaU) 
                                                 & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full));
}
