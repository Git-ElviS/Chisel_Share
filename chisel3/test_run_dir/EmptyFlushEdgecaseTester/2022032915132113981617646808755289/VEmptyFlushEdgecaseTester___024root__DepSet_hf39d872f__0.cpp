// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEmptyFlushEdgecaseTester.h for the primary calling header

#include "verilated.h"

#include "VEmptyFlushEdgecaseTester__Syms.h"
#include "VEmptyFlushEdgecaseTester___024root.h"

VL_INLINE_OPT void VEmptyFlushEdgecaseTester___024root___sequent__TOP__0(VEmptyFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmptyFlushEdgecaseTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdlyvdim0__EmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0;
    CData/*1:0*/ __Vdlyvval__EmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__EmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0;
    CData/*0:0*/ __Vdly__EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    // Body
    __Vdlyvset__EmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT___T_1) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__flushRegister)))) {
            VL_WRITEF("[%0t] %%Error: EmptyFlushEdgecaseTester.v:550: Assertion failed in %NEmptyFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EmptyFlushEdgecaseTester/2022032915132113981617646808755289/EmptyFlushEdgecaseTester.v", 550, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT___T_1) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__flushRegister)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:60 assert(flushRegister === false.B) //check queue isn't flushed (can't dequeue an empty queue)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (3U & ((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ptr_match)
                                          ? ((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)
                                              ? 3U : 0U)
                                          : (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value) 
                                              > (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value))
                                              ? ((IData)(3U) 
                                                 + (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ptr_diff))
                                              : (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ptr_diff)))))))) {
            VL_WRITEF("[%0t] %%Error: EmptyFlushEdgecaseTester.v:574: Assertion failed in %NEmptyFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EmptyFlushEdgecaseTester/2022032915132113981617646808755289/EmptyFlushEdgecaseTester.v", 574, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (3U & ((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ptr_match)
                                          ? ((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)
                                              ? 3U : 0U)
                                          : (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value) 
                                              > (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value))
                                              ? ((IData)(3U) 
                                                 + (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ptr_diff))
                                              : (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ptr_diff)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:64 assert(q.io.count === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__empty))))) {
            VL_WRITEF("[%0t] %%Error: EmptyFlushEdgecaseTester.v:596: Assertion failed in %NEmptyFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EmptyFlushEdgecaseTester/2022032915132113981617646808755289/EmptyFlushEdgecaseTester.v", 596, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__empty))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Expected to not be able to dequeue when flush is asserted the previous cycle\n    at QueueFlushSpec.scala:65 assert(!q.io.deq.valid, \"Expected to not be able to dequeue when flush is asserted the previous cycle\")\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__full)))) {
            VL_WRITEF("[%0t] %%Error: EmptyFlushEdgecaseTester.v:620: Assertion failed in %NEmptyFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EmptyFlushEdgecaseTester/2022032915132113981617646808755289/EmptyFlushEdgecaseTester.v", 620, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__full)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Expected enqueue to be ready when flush was asserted the previous cycle because queue should be empty\n    at QueueFlushSpec.scala:66 assert(\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EmptyFlushEdgecaseTester/2022032915132113981617646808755289/EmptyFlushEdgecaseTester.v", 644, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT___T_1) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((0x13U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                              ? 3U : ((0x12U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                       ? 2U : ((0x11U 
                                                == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                ? 3U
                                                : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                    ? 1U
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                     ? 1U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                      ? 3U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                       ? 3U
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                        ? 1U
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                         ? 0U
                                                         : 
                                                        ((0xaU 
                                                          == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                          ? 2U
                                                          : 
                                                         ((9U 
                                                           == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                           ? 1U
                                                           : 
                                                          ((8U 
                                                            == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                            ? 0U
                                                            : 
                                                           ((7U 
                                                             == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                             ? 2U
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                              ? 0U
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                               ? 3U
                                                               : 
                                                              ((4U 
                                                                == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                                ? 2U
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                                 ? 0U
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                                  ? 2U
                                                                  : 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                                   ? 1U
                                                                   : 0U))))))))))))))))))) 
                            != ((2U >= (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value))
                                 ? vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ram
                                [vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value]
                                 : 0U))))) {
            VL_WRITEF("[%0t] %%Error: EmptyFlushEdgecaseTester.v:655: Assertion failed in %NEmptyFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EmptyFlushEdgecaseTester/2022032915132113981617646808755289/EmptyFlushEdgecaseTester.v", 655, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT___T_1) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((0x13U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                              ? 3U : ((0x12U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                       ? 2U : ((0x11U 
                                                == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                ? 3U
                                                : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                    ? 1U
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                     ? 1U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                      ? 3U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                       ? 3U
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                        ? 1U
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                         ? 0U
                                                         : 
                                                        ((0xaU 
                                                          == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                          ? 2U
                                                          : 
                                                         ((9U 
                                                           == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                           ? 1U
                                                           : 
                                                          ((8U 
                                                            == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                            ? 0U
                                                            : 
                                                           ((7U 
                                                             == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                             ? 2U
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                              ? 0U
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                               ? 3U
                                                               : 
                                                              ((4U 
                                                                == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                                ? 2U
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                                 ? 0U
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                                  ? 2U
                                                                  : 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt))
                                                                   ? 1U
                                                                   : 0U))))))))))))))))))) 
                            != ((2U >= (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value))
                                 ? vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ram
                                [vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value]
                                 : 0U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:123 assert(elems(outCnt) === q.io.deq.bits)\n");
        }
    }
    __Vdly__EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    vlSelf->EmptyFlushEdgecaseTester__DOT__value_1 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__wrap_1)
                                           ? 0U : (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT___value_T_3)));
    if (((~ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__full)) 
         & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_enq_valid))) {
        vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT____Vlvbound_h7234a2a6__0 
            = ((0x13U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                ? 3U : ((0x12U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                         ? 2U : ((0x11U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                                  ? 3U : ((0x10U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                                           ? 1U : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                                                    ? 1U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                                                     ? 3U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                                                      ? 3U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                                                       ? 1U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                                                        ? 0U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                                                         ? 2U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                                                          ? 1U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                                                           ? 0U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                                                            ? 2U
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                                                             ? 0U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                                                              ? 3U
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                                                               ? 2U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                                                                ? 0U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                                                                 ? 2U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))
                                                                  ? 1U
                                                                  : 0U)))))))))))))))))));
        if ((2U >= (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value))) {
            __Vdlyvval__EmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0 
                = vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT____Vlvbound_h7234a2a6__0;
            __Vdlyvset__EmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0 = 1U;
            __Vdlyvdim0__EmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0 
                = vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value;
        }
    }
    __Vdly__EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10)));
    if (__Vdlyvset__EmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0) {
        vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ram[__Vdlyvdim0__EmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0] 
            = __Vdlyvval__EmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0;
    }
    if (vlSelf->reset) {
        vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt = 0U;
    } else if (vlSelf->EmptyFlushEdgecaseTester__DOT___T_1) {
        vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt 
            = vlSelf->EmptyFlushEdgecaseTester__DOT___outCnt_T_1;
    }
    vlSelf->EmptyFlushEdgecaseTester__DOT__flushRegister 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__flush));
    if (vlSelf->reset) {
        vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full = 0U;
        vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value = 0U;
    } else if (vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_flush) {
        vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full = 0U;
        vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value = 0U;
    } else {
        if (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__do_enq) 
             != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__do_deq))) {
            vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full 
                = vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__do_enq;
        }
        if (vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__do_deq) {
            vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value 
                = ((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__wrap_1)
                    ? 0U : (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT___value_T_3));
        }
    }
    vlSelf->EmptyFlushEdgecaseTester__DOT__wrap_1 = 
        (0x14U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value_1));
    vlSelf->EmptyFlushEdgecaseTester__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value_1)));
    if (vlSelf->reset) {
        vlSelf->EmptyFlushEdgecaseTester__DOT__value = 0U;
        vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value = 0U;
    } else {
        if (((~ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__full)) 
             & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_enq_valid))) {
            vlSelf->EmptyFlushEdgecaseTester__DOT__value 
                = ((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__wrap)
                    ? 0U : (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT___value_T_1));
        }
        if (vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_flush) {
            vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value = 0U;
        } else if (vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__do_enq) {
            vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value 
                = ((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__wrap)
                    ? 0U : (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT___value_T_1));
        }
    }
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    vlSelf->EmptyFlushEdgecaseTester__DOT___outCnt_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__wrap_1 
        = (2U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value)));
    vlSelf->EmptyFlushEdgecaseTester__DOT__wrap = (0x14U 
                                                   == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value));
    vlSelf->EmptyFlushEdgecaseTester__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_flush 
        = ((0U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value_1)) 
           & (0U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)));
    vlSelf->EmptyFlushEdgecaseTester__DOT__flush = 
        ((0U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value_1)) 
         & (0U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__wrap 
        = (2U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value)));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ptr_diff 
        = (3U & ((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
                 - (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value)));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ptr_match 
        = ((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
           == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_enq_valid 
        = ((0x14U > (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
           & (~ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__flush)));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__full 
        = ((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ptr_match) 
           & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__empty 
        = ((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ptr_match) 
           & (~ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__do_enq 
        = ((~ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__full)) 
           & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_enq_valid));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = __Vdly__EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    vlSelf->EmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T 
        = (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
    vlSelf->EmptyFlushEdgecaseTester__DOT___T_1 = (1U 
                                                   & (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                                                       >> 0xeU) 
                                                      & (~ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__empty))));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__do_deq 
        = (1U & (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                  >> 0xeU) & (~ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__empty))));
}
