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
    CData/*1:0*/ __Vdlyvdim0__QueueGetsFlushedTester__DOT__q__DOT__ram__v0;
    CData/*2:0*/ __Vdlyvval__QueueGetsFlushedTester__DOT__q__DOT__ram__v0;
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
    if (vlSelf->reset) {
        vlSelf->QueueGetsFlushedTester__DOT__outCnt = 0U;
        vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full = 0U;
    } else if ((0x200U & (IData)(vlSelf->QueueGetsFlushedTester__DOT___flush_T))) {
        vlSelf->QueueGetsFlushedTester__DOT__outCnt 
            = vlSelf->QueueGetsFlushedTester__DOT___outCnt_T_7;
        vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full = 0U;
    } else {
        if (vlSelf->QueueGetsFlushedTester__DOT___T_1) {
            vlSelf->QueueGetsFlushedTester__DOT__outCnt 
                = vlSelf->QueueGetsFlushedTester__DOT___outCnt_T_1;
        }
        if (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_enq) 
             != (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_deq))) {
            vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full 
                = vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_enq;
        }
    }
    if (((~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__full)) 
         & (0x14U > (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)))) {
        __Vdlyvval__QueueGetsFlushedTester__DOT__q__DOT__ram__v0 
            = ((0x13U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                ? 5U : ((0x12U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                         ? 7U : ((0x11U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                  ? 5U : ((0x10U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                           ? 5U : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                    ? 7U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                     ? 7U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                      ? 5U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                       ? 1U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                        ? 2U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                         ? 0U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                          ? 3U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                           ? 2U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                            ? 0U
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                             ? 5U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                              ? 7U
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                               ? 6U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                                ? 6U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                                 ? 7U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                                  ? 3U
                                                                  : 6U)))))))))))))))))));
        __Vdlyvset__QueueGetsFlushedTester__DOT__q__DOT__ram__v0 = 1U;
        __Vdlyvdim0__QueueGetsFlushedTester__DOT__q__DOT__ram__v0 
            = vlSelf->QueueGetsFlushedTester__DOT__q__DOT__enq_ptr_value;
    }
    __Vdly__QueueGetsFlushedTester__DOT__currQCnt = 
        ((IData)(vlSelf->reset) ? 0U : ((0x200U & (IData)(vlSelf->QueueGetsFlushedTester__DOT___flush_T))
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
            VL_WRITEF("[%0t] %%Error: QueueGetsFlushedTester.v:583: Assertion failed in %NQueueGetsFlushedTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueGetsFlushedTester/202203291511399196132414777358970/QueueGetsFlushedTester.v", 583, "");
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
                         & (0U != (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_count))))) {
            VL_WRITEF("[%0t] %%Error: QueueGetsFlushedTester.v:607: Assertion failed in %NQueueGetsFlushedTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueGetsFlushedTester/202203291511399196132414777358970/QueueGetsFlushedTester.v", 607, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->QueueGetsFlushedTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_count))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:64 assert(q.io.count === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_52) 
                         & (~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__empty))))) {
            VL_WRITEF("[%0t] %%Error: QueueGetsFlushedTester.v:629: Assertion failed in %NQueueGetsFlushedTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueGetsFlushedTester/202203291511399196132414777358970/QueueGetsFlushedTester.v", 629, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_52) 
                         & (~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__empty))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Expected to not be able to dequeue when flush is asserted the previous cycle\n    at QueueFlushSpec.scala:65 assert(!q.io.deq.valid, \"Expected to not be able to dequeue when flush is asserted the previous cycle\")\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_52) 
                         & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__full)))) {
            VL_WRITEF("[%0t] %%Error: QueueGetsFlushedTester.v:653: Assertion failed in %NQueueGetsFlushedTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueGetsFlushedTester/202203291511399196132414777358970/QueueGetsFlushedTester.v", 653, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_52) 
                         & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__full)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Expected enqueue to be ready when flush was asserted the previous cycle because queue should be empty\n    at QueueFlushSpec.scala:66 assert(\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueGetsFlushedTester/202203291511399196132414777358970/QueueGetsFlushedTester.v", 677, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_49) 
                         & (4U < (IData)(vlSelf->QueueGetsFlushedTester__DOT__currQCnt))))) {
            VL_WRITEF("[%0t] %%Error: QueueGetsFlushedTester.v:688: Assertion failed in %NQueueGetsFlushedTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueGetsFlushedTester/202203291511399196132414777358970/QueueGetsFlushedTester.v", 688, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_49) 
                         & (4U < (IData)(vlSelf->QueueGetsFlushedTester__DOT__currQCnt))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:91 assert(currQCnt <= queueDepth.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_49) 
                         & ((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_42) 
                            != vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ram
                            [vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value])))) {
            VL_WRITEF("[%0t] %%Error: QueueGetsFlushedTester.v:710: Assertion failed in %NQueueGetsFlushedTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueGetsFlushedTester/202203291511399196132414777358970/QueueGetsFlushedTester.v", 710, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_49) 
                         & ((IData)(vlSelf->QueueGetsFlushedTester__DOT___GEN_42) 
                            != vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ram
                            [vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:92 assert(elems(outCnt) === q.io.deq.bits)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((((IData)(vlSelf->QueueGetsFlushedTester__DOT___flush_T) 
                                 >> 9U) & (~ (IData)(vlSelf->reset))) 
                               & (~ ((0U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__currQCnt)) 
                                     | (~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__empty)))))))) {
            VL_WRITEF("[%0t] %%Error: QueueGetsFlushedTester.v:733: Assertion failed in %NQueueGetsFlushedTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueGetsFlushedTester/202203291511399196132414777358970/QueueGetsFlushedTester.v", 733, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((((IData)(vlSelf->QueueGetsFlushedTester__DOT___flush_T) 
                                 >> 9U) & (~ (IData)(vlSelf->reset))) 
                               & (~ ((0U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__currQCnt)) 
                                     | (~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__empty)))))))) {
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
        vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ram[__Vdlyvdim0__QueueGetsFlushedTester__DOT__q__DOT__ram__v0] 
            = __Vdlyvval__QueueGetsFlushedTester__DOT__q__DOT__ram__v0;
    }
    vlSelf->QueueGetsFlushedTester__DOT__currQCnt = __Vdly__QueueGetsFlushedTester__DOT__currQCnt;
    vlSelf->QueueGetsFlushedTester__DOT___GEN_42 = 
        ((0x13U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
          ? 5U : ((0x12U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                   ? 7U : ((0x11U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                            ? 5U : ((0x10U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                     ? 5U : ((0xfU 
                                              == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                              ? 7U : 
                                             ((0xeU 
                                               == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                               ? 7U
                                               : ((0xdU 
                                                   == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                   ? 5U
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                    ? 1U
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                     ? 2U
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                      ? 0U
                                                      : 
                                                     ((9U 
                                                       == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                       ? 3U
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                        ? 2U
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                         ? 0U
                                                         : 
                                                        ((6U 
                                                          == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                          ? 5U
                                                          : 
                                                         ((5U 
                                                           == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                            ? 6U
                                                            : 
                                                           ((3U 
                                                             == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                             ? 6U
                                                             : 
                                                            ((2U 
                                                              == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                              ? 7U
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt))
                                                               ? 3U
                                                               : 6U)))))))))))))))))));
    vlSelf->QueueGetsFlushedTester__DOT___outCnt_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->QueueGetsFlushedTester__DOT__outCnt)));
    if (vlSelf->reset) {
        vlSelf->QueueGetsFlushedTester__DOT__q__DOT__enq_ptr_value = 0U;
    } else if ((0x200U & (IData)(vlSelf->QueueGetsFlushedTester__DOT___flush_T))) {
        vlSelf->QueueGetsFlushedTester__DOT__q__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_enq) {
        vlSelf->QueueGetsFlushedTester__DOT__q__DOT__enq_ptr_value 
            = vlSelf->QueueGetsFlushedTester__DOT__q__DOT___value_T_1;
    }
    vlSelf->QueueGetsFlushedTester__DOT__flushRegister 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->QueueGetsFlushedTester__DOT___flush_T) 
                                               >> 9U)));
    if (vlSelf->reset) {
        vlSelf->QueueGetsFlushedTester__DOT__value = 0U;
        vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value = 0U;
    } else {
        if (vlSelf->QueueGetsFlushedTester__DOT___T) {
            vlSelf->QueueGetsFlushedTester__DOT__value 
                = ((IData)(vlSelf->QueueGetsFlushedTester__DOT__wrap)
                    ? 0U : (IData)(vlSelf->QueueGetsFlushedTester__DOT___value_T_1));
        }
        if ((0x200U & (IData)(vlSelf->QueueGetsFlushedTester__DOT___flush_T))) {
            vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value = 0U;
        } else if (vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_deq) {
            vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value 
                = vlSelf->QueueGetsFlushedTester__DOT__q__DOT___value_T_3;
        }
    }
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_14));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__enq_ptr_value)));
    vlSelf->QueueGetsFlushedTester__DOT__wrap = (0x14U 
                                                 == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value));
    vlSelf->QueueGetsFlushedTester__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)));
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value)));
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ptr_match 
        = ((IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__enq_ptr_value) 
           == (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value));
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_13));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_count 
        = ((((IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full) 
             & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ptr_match))
             ? 4U : 0U) | (3U & ((IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__enq_ptr_value) 
                                 - (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value))));
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__empty 
        = ((IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ptr_match) 
           & (~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full)));
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__full 
        = ((IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ptr_match) 
           & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full));
    vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_enq 
        = ((~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__full)) 
           & (0x14U > (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)));
    vlSelf->QueueGetsFlushedTester__DOT___T = ((~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__full)) 
                                               & (0x14U 
                                                  > (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)));
    vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_12));
    vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_12));
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
        = (1U & (((IData)(vlSelf->QueueGetsFlushedTester__DOT___q_io_deq_ready_T) 
                  >> 6U) & (~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__empty))));
    vlSelf->QueueGetsFlushedTester__DOT___T_1 = (1U 
                                                 & (((IData)(vlSelf->QueueGetsFlushedTester__DOT___q_io_deq_ready_T) 
                                                     >> 6U) 
                                                    & (~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__empty))));
}
