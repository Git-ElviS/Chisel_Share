// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFullQueueFlushEdgecaseTester.h for the primary calling header

#include "verilated.h"

#include "VFullQueueFlushEdgecaseTester__Syms.h"
#include "VFullQueueFlushEdgecaseTester___024root.h"

VL_INLINE_OPT void VFullQueueFlushEdgecaseTester___024root___sequent__TOP__0(VFullQueueFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullQueueFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullQueueFlushEdgecaseTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__FullQueueFlushEdgecaseTester__DOT__currQCnt;
    CData/*1:0*/ __Vdlyvdim0__FullQueueFlushEdgecaseTester__DOT__q__DOT__ram__v0;
    CData/*2:0*/ __Vdlyvval__FullQueueFlushEdgecaseTester__DOT__q__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__FullQueueFlushEdgecaseTester__DOT__q__DOT__ram__v0;
    CData/*0:0*/ __Vdly__FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    // Body
    __Vdlyvset__FullQueueFlushEdgecaseTester__DOT__q__DOT__ram__v0 = 0U;
    __Vdly__FullQueueFlushEdgecaseTester__DOT__currQCnt 
        = vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt;
    __Vdly__FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    if (vlSelf->reset) {
        vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt = 0U;
        vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__maybe_full = 0U;
    } else if ((4U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt))) {
        vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt 
            = vlSelf->FullQueueFlushEdgecaseTester__DOT___outCnt_T_3;
        vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__maybe_full = 0U;
    } else {
        if (vlSelf->FullQueueFlushEdgecaseTester__DOT___T_1) {
            vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt 
                = vlSelf->FullQueueFlushEdgecaseTester__DOT___outCnt_T_1;
        }
        if (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__do_enq) 
             != (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__do_deq))) {
            vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__maybe_full 
                = vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__do_enq;
        }
    }
    if (((~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__full)) 
         & (0x14U > (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)))) {
        __Vdlyvval__FullQueueFlushEdgecaseTester__DOT__q__DOT__ram__v0 
            = ((0x13U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                ? 5U : ((0x12U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                         ? 5U : ((0x11U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                  ? 4U : ((0x10U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                           ? 1U : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                    ? 2U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                     ? 0U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                      ? 0U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                       ? 2U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                        ? 2U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                         ? 7U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                          ? 4U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                           ? 2U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                            ? 1U
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                             ? 3U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                              ? 7U
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                               ? 0U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                                ? 7U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                                 ? 0U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                                  ? 0U
                                                                  : 2U)))))))))))))))))));
        __Vdlyvset__FullQueueFlushEdgecaseTester__DOT__q__DOT__ram__v0 = 1U;
        __Vdlyvdim0__FullQueueFlushEdgecaseTester__DOT__q__DOT__ram__v0 
            = vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value;
    }
    __Vdly__FullQueueFlushEdgecaseTester__DOT__currQCnt 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__flush)
                                           ? 0U : ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___T_1)
                                                    ? 
                                                   ((0U 
                                                     < (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt))
                                                     ? (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___currQCnt_T_3)
                                                     : (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_22))
                                                    : (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_22))));
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___T_1) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__flushRegister)))) {
            VL_WRITEF("[%0t] %%Error: FullQueueFlushEdgecaseTester.v:538: Assertion failed in %NFullQueueFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/FullQueueFlushEdgecaseTester/2022032915180916416581397737331604/FullQueueFlushEdgecaseTester.v", 538, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___T_1) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__flushRegister)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:60 assert(flushRegister === false.B) //check queue isn't flushed (can't dequeue an empty queue)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_count))))) {
            VL_WRITEF("[%0t] %%Error: FullQueueFlushEdgecaseTester.v:562: Assertion failed in %NFullQueueFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/FullQueueFlushEdgecaseTester/2022032915180916416581397737331604/FullQueueFlushEdgecaseTester.v", 562, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_count))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:64 assert(q.io.count === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_52) 
                         & (~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__empty))))) {
            VL_WRITEF("[%0t] %%Error: FullQueueFlushEdgecaseTester.v:584: Assertion failed in %NFullQueueFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/FullQueueFlushEdgecaseTester/2022032915180916416581397737331604/FullQueueFlushEdgecaseTester.v", 584, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_52) 
                         & (~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__empty))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Expected to not be able to dequeue when flush is asserted the previous cycle\n    at QueueFlushSpec.scala:65 assert(!q.io.deq.valid, \"Expected to not be able to dequeue when flush is asserted the previous cycle\")\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_52) 
                         & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__full)))) {
            VL_WRITEF("[%0t] %%Error: FullQueueFlushEdgecaseTester.v:608: Assertion failed in %NFullQueueFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/FullQueueFlushEdgecaseTester/2022032915180916416581397737331604/FullQueueFlushEdgecaseTester.v", 608, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_52) 
                         & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__full)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Expected enqueue to be ready when flush was asserted the previous cycle because queue should be empty\n    at QueueFlushSpec.scala:66 assert(\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/FullQueueFlushEdgecaseTester/2022032915180916416581397737331604/FullQueueFlushEdgecaseTester.v", 632, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_49) 
                         & (4U < (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt))))) {
            VL_WRITEF("[%0t] %%Error: FullQueueFlushEdgecaseTester.v:643: Assertion failed in %NFullQueueFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/FullQueueFlushEdgecaseTester/2022032915180916416581397737331604/FullQueueFlushEdgecaseTester.v", 643, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_49) 
                         & (4U < (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:179 assert(currQCnt <= queueDepth.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_49) 
                         & ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_42) 
                            != vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ram
                            [vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value])))) {
            VL_WRITEF("[%0t] %%Error: FullQueueFlushEdgecaseTester.v:665: Assertion failed in %NFullQueueFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/FullQueueFlushEdgecaseTester/2022032915180916416581397737331604/FullQueueFlushEdgecaseTester.v", 665, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_49) 
                         & ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_42) 
                            != vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ram
                            [vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:180 assert(elems(outCnt) === q.io.deq.bits)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__flush) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((0U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt)) 
                               | (~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__empty))))))) {
            VL_WRITEF("[%0t] %%Error: FullQueueFlushEdgecaseTester.v:688: Assertion failed in %NFullQueueFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/FullQueueFlushEdgecaseTester/2022032915180916416581397737331604/FullQueueFlushEdgecaseTester.v", 688, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__flush) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((0U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt)) 
                               | (~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__empty))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:189 assert(currQCnt === 0.U || q.io.deq.valid)\n");
        }
    }
    __Vdly__FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10)));
    if (__Vdlyvset__FullQueueFlushEdgecaseTester__DOT__q__DOT__ram__v0) {
        vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ram[__Vdlyvdim0__FullQueueFlushEdgecaseTester__DOT__q__DOT__ram__v0] 
            = __Vdlyvval__FullQueueFlushEdgecaseTester__DOT__q__DOT__ram__v0;
    }
    vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_42 
        = ((0x13U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
            ? 5U : ((0x12U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                     ? 5U : ((0x11U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                              ? 4U : ((0x10U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                       ? 1U : ((0xfU 
                                                == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                ? 2U
                                                : (
                                                   (0xeU 
                                                    == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                    ? 0U
                                                    : 
                                                   ((0xdU 
                                                     == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                     ? 0U
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                      ? 2U
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                       ? 2U
                                                       : 
                                                      ((0xaU 
                                                        == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                        ? 7U
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                         ? 4U
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                          ? 2U
                                                          : 
                                                         ((7U 
                                                           == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                           ? 1U
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                            ? 3U
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                             ? 7U
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                              ? 0U
                                                              : 
                                                             ((3U 
                                                               == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                               ? 7U
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt))
                                                                 ? 0U
                                                                 : 2U)))))))))))))))))));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___outCnt_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt)));
    if (vlSelf->reset) {
        vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value = 0U;
    } else if ((4U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt))) {
        vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__do_enq) {
        vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value 
            = vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT___value_T_1;
    }
    vlSelf->FullQueueFlushEdgecaseTester__DOT__flushRegister 
        = ((~ (IData)(vlSelf->reset)) & (4U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt)));
    if (vlSelf->reset) {
        vlSelf->FullQueueFlushEdgecaseTester__DOT__value = 0U;
        vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value = 0U;
    } else {
        if (vlSelf->FullQueueFlushEdgecaseTester__DOT___T) {
            vlSelf->FullQueueFlushEdgecaseTester__DOT__value 
                = ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__wrap)
                    ? 0U : (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___value_T_1));
        }
        if ((4U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt))) {
            vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value = 0U;
        } else if (vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__do_deq) {
            vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value 
                = vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT___value_T_3;
        }
    }
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt 
        = __Vdly__FullQueueFlushEdgecaseTester__DOT__currQCnt;
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__wrap 
        = (0x14U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__flush 
        = (4U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___currQCnt_T_3 
        = (7U & ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt) 
                 - (IData)(1U)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___outCnt_T_3 
        = (0x1fU & ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt) 
                    + (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ptr_match 
        = ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
           == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_count 
        = ((((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__maybe_full) 
             & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ptr_match))
             ? 4U : 0U) | (3U & ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
                                 - (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value))));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__empty 
        = ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ptr_match) 
           & (~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__maybe_full)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__full 
        = ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ptr_match) 
           & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__maybe_full));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__do_enq 
        = ((~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__full)) 
           & (0x14U > (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___T = 
        ((~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__full)) 
         & (0x14U > (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_22 
        = (7U & ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___T)
                  ? ((IData)(1U) + (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt))
                  : (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0));
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = __Vdly__FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0;
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
    vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__do_deq 
        = (1U & (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                  >> 4U) & (~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__empty))));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___T_1 
        = (1U & (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                  >> 4U) & (~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__empty))));
}
