// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDequeueFullQueueEdgecaseTester.h for the primary calling header

#include "verilated.h"

#include "VDequeueFullQueueEdgecaseTester__Syms.h"
#include "VDequeueFullQueueEdgecaseTester___024root.h"

VL_INLINE_OPT void VDequeueFullQueueEdgecaseTester___024root___sequent__TOP__0(VDequeueFullQueueEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDequeueFullQueueEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDequeueFullQueueEdgecaseTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdlyvdim0__DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram__v0;
    CData/*2:0*/ __Vdlyvval__DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram__v0;
    // Body
    __Vdlyvset__DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)) 
                           & (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                                 & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister)))) {
            VL_WRITEF("[%0t] %%Error: DequeueFullQueueEdgecaseTester.v:257: Assertion failed in %NDequeueFullQueueEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DequeueFullQueueEdgecaseTester/2022032915194613826902286111048147/DequeueFullQueueEdgecaseTester.v", 257, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)) 
                           & (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                                 & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:60 assert(flushRegister === false.B) //check queue isn't flushed (can't dequeue an empty queue)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != ((((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full) 
                                     & (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match))
                                     ? 4U : 0U) | (3U 
                                                   & ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
                                                      - (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value)))))))) {
            VL_WRITEF("[%0t] %%Error: DequeueFullQueueEdgecaseTester.v:281: Assertion failed in %NDequeueFullQueueEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DequeueFullQueueEdgecaseTester/2022032915194613826902286111048147/DequeueFullQueueEdgecaseTester.v", 281, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != ((((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full) 
                                     & (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match))
                                     ? 4U : 0U) | (3U 
                                                   & ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
                                                      - (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:64 assert(q.io.count === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                               & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full))))))) {
            VL_WRITEF("[%0t] %%Error: DequeueFullQueueEdgecaseTester.v:303: Assertion failed in %NDequeueFullQueueEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DequeueFullQueueEdgecaseTester/2022032915194613826902286111048147/DequeueFullQueueEdgecaseTester.v", 303, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                               & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Expected to not be able to dequeue when flush is asserted the previous cycle\n    at QueueFlushSpec.scala:65 assert(!q.io.deq.valid, \"Expected to not be able to dequeue when flush is asserted the previous cycle\")\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__full)))) {
            VL_WRITEF("[%0t] %%Error: DequeueFullQueueEdgecaseTester.v:327: Assertion failed in %NDequeueFullQueueEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DequeueFullQueueEdgecaseTester/2022032915194613826902286111048147/DequeueFullQueueEdgecaseTester.v", 327, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__full)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Expected enqueue to be ready when flush was asserted the previous cycle because queue should be empty\n    at QueueFlushSpec.scala:66 assert(\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DequeueFullQueueEdgecaseTester/2022032915194613826902286111048147/DequeueFullQueueEdgecaseTester.v", 351, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)) 
                           & (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                                 & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (4U < (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt))))) {
            VL_WRITEF("[%0t] %%Error: DequeueFullQueueEdgecaseTester.v:362: Assertion failed in %NDequeueFullQueueEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DequeueFullQueueEdgecaseTester/2022032915194613826902286111048147/DequeueFullQueueEdgecaseTester.v", 362, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)) 
                           & (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                                 & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (4U < (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:217 assert(currQCnt <= queueDepth.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)) 
                           & (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                                 & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((0x13U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                              ? 3U : ((0x12U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                       ? 1U : ((0x11U 
                                                == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                ? 0U
                                                : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                    ? 0U
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                     ? 7U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                      ? 3U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                       ? 4U
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                        ? 2U
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                         ? 7U
                                                         : 
                                                        ((0xaU 
                                                          == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                          ? 5U
                                                          : 
                                                         ((9U 
                                                           == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                           ? 0U
                                                           : 
                                                          ((8U 
                                                            == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                            ? 6U
                                                            : 
                                                           ((7U 
                                                             == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                             ? 2U
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                              ? 4U
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                               ? 7U
                                                               : 
                                                              ((4U 
                                                                == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                                ? 4U
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                                 ? 4U
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                                  ? 3U
                                                                  : 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                                   ? 0U
                                                                   : 5U))))))))))))))))))) 
                            != vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram
                            [vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value])))) {
            VL_WRITEF("[%0t] %%Error: DequeueFullQueueEdgecaseTester.v:384: Assertion failed in %NDequeueFullQueueEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DequeueFullQueueEdgecaseTester/2022032915194613826902286111048147/DequeueFullQueueEdgecaseTester.v", 384, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)) 
                           & (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                                 & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((0x13U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                              ? 3U : ((0x12U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                       ? 1U : ((0x11U 
                                                == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                ? 0U
                                                : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                    ? 0U
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                     ? 7U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                      ? 3U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                       ? 4U
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                        ? 2U
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                         ? 7U
                                                         : 
                                                        ((0xaU 
                                                          == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                          ? 5U
                                                          : 
                                                         ((9U 
                                                           == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                           ? 0U
                                                           : 
                                                          ((8U 
                                                            == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                            ? 6U
                                                            : 
                                                           ((7U 
                                                             == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                             ? 2U
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                              ? 4U
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                               ? 7U
                                                               : 
                                                              ((4U 
                                                                == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                                ? 4U
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                                 ? 4U
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                                  ? 3U
                                                                  : 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt))
                                                                   ? 0U
                                                                   : 5U))))))))))))))))))) 
                            != vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram
                            [vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:218 assert(elems(outCnt) === q.io.deq.bits)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)) 
                           & (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                                 & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U >= (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt))))) {
            VL_WRITEF("[%0t] %%Error: DequeueFullQueueEdgecaseTester.v:407: Assertion failed in %NDequeueFullQueueEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DequeueFullQueueEdgecaseTester/2022032915194613826902286111048147/DequeueFullQueueEdgecaseTester.v", 407, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)) 
                           & (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                                 & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U >= (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:219 assert(currQCnt > 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((0U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)) 
                               | (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                                     & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full))))))))) {
            VL_WRITEF("[%0t] %%Error: DequeueFullQueueEdgecaseTester.v:429: Assertion failed in %NDequeueFullQueueEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DequeueFullQueueEdgecaseTester/2022032915194613826902286111048147/DequeueFullQueueEdgecaseTester.v", 429, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((0U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)) 
                               | (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                                     & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:225 assert(currQCnt === 0.U || q.io.deq.valid)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)) 
                            & (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                                  & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full)))))))) {
            VL_WRITEF("[%0t] %%Error: DequeueFullQueueEdgecaseTester.v:452: Assertion failed in %NDequeueFullQueueEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DequeueFullQueueEdgecaseTester/2022032915194613826902286111048147/DequeueFullQueueEdgecaseTester.v", 452, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)) 
                            & (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                                  & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:229 assert(q.io.deq.fire === false.B)\n");
        }
    }
    if ((1U & ((~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__full)) 
               & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister))))) {
        __Vdlyvval__DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram__v0 
            = ((0x13U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                ? 3U : ((0x12U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                         ? 1U : ((0x11U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                  ? 0U : ((0x10U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                           ? 0U : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                    ? 7U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                     ? 3U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                      ? 4U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                       ? 2U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                        ? 7U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                         ? 5U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                           ? 6U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                            ? 2U
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                             ? 4U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                              ? 7U
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                               ? 4U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                                ? 4U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                                 ? 3U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                                  ? 0U
                                                                  : 5U)))))))))))))))))));
        __Vdlyvset__DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram__v0 = 1U;
        __Vdlyvdim0__DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram__v0 
            = vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value;
    }
    if (__Vdlyvset__DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram__v0) {
        vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram[__Vdlyvdim0__DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram__v0] 
            = __Vdlyvval__DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram__v0;
    }
    if (vlSelf->reset) {
        vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt = 0U;
        vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full = 0U;
        vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value = 0U;
        vlSelf->DequeueFullQueueEdgecaseTester__DOT__value = 0U;
    } else {
        if ((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt))) {
            vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT___outCnt_T_1)));
            vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full = 0U;
            vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value = 0U;
        } else {
            if (((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__do_enq) 
                 != (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__do_deq))) {
                vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full 
                    = vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__do_enq;
            }
            if (vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__do_deq) {
                vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value 
                    = vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT___value_T_3;
            }
        }
        if (vlSelf->DequeueFullQueueEdgecaseTester__DOT___T) {
            vlSelf->DequeueFullQueueEdgecaseTester__DOT__value 
                = ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__wrap)
                    ? 0U : (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT___value_T_1));
        }
    }
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister 
        = ((~ (IData)(vlSelf->reset)) & (2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)));
    if (vlSelf->reset) {
        vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value = 0U;
    } else if ((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt))) {
        vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__do_enq) {
        vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value 
            = vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT___value_T_1;
    }
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value)));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__wrap 
        = (0x14U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value)));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match 
        = ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
           == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value));
    if (vlSelf->reset) {
        vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt = 0U;
    } else if (vlSelf->DequeueFullQueueEdgecaseTester__DOT__flush) {
        vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt = 0U;
    } else if (vlSelf->DequeueFullQueueEdgecaseTester__DOT___T) {
        vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt 
            = vlSelf->DequeueFullQueueEdgecaseTester__DOT___currQCnt_T_1;
    }
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__full 
        = ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
           & (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT___T 
        = (1U & ((~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__full)) 
                 & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister))));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__do_enq 
        = (1U & ((~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__full)) 
                 & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister))));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT___currQCnt_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__flush 
        = (2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT___outCnt_T_1 
        = (0x1fU & ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt) 
                    + (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)));
    vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__do_deq 
        = ((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt)) 
           & (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                 & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full)))));
}
