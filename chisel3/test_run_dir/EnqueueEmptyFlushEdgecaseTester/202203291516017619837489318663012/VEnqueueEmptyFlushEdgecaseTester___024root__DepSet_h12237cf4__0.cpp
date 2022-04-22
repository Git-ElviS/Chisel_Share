// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEnqueueEmptyFlushEdgecaseTester.h for the primary calling header

#include "verilated.h"

#include "VEnqueueEmptyFlushEdgecaseTester__Syms.h"
#include "VEnqueueEmptyFlushEdgecaseTester___024root.h"

VL_INLINE_OPT void VEnqueueEmptyFlushEdgecaseTester___024root___sequent__TOP__0(VEnqueueEmptyFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEnqueueEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnqueueEmptyFlushEdgecaseTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdlyvval__EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0;
    CData/*0:0*/ __Vdly__EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    // Body
    __Vdlyvset__EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___T_1) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__flushRegister)))) {
            VL_WRITEF("[%0t] %%Error: EnqueueEmptyFlushEdgecaseTester.v:501: Assertion failed in %NEnqueueEmptyFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EnqueueEmptyFlushEdgecaseTester/202203291516017619837489318663012/EnqueueEmptyFlushEdgecaseTester.v", 501, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___T_1) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__flushRegister)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:60 assert(flushRegister === false.B) //check queue isn't flushed (can't dequeue an empty queue)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)))) {
            VL_WRITEF("[%0t] %%Error: EnqueueEmptyFlushEdgecaseTester.v:525: Assertion failed in %NEnqueueEmptyFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EnqueueEmptyFlushEdgecaseTester/202203291516017619837489318663012/EnqueueEmptyFlushEdgecaseTester.v", 525, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:64 assert(q.io.count === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)))) {
            VL_WRITEF("[%0t] %%Error: EnqueueEmptyFlushEdgecaseTester.v:547: Assertion failed in %NEnqueueEmptyFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EnqueueEmptyFlushEdgecaseTester/202203291516017619837489318663012/EnqueueEmptyFlushEdgecaseTester.v", 547, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Expected to not be able to dequeue when flush is asserted the previous cycle\n    at QueueFlushSpec.scala:65 assert(!q.io.deq.valid, \"Expected to not be able to dequeue when flush is asserted the previous cycle\")\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)))) {
            VL_WRITEF("[%0t] %%Error: EnqueueEmptyFlushEdgecaseTester.v:571: Assertion failed in %NEnqueueEmptyFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EnqueueEmptyFlushEdgecaseTester/202203291516017619837489318663012/EnqueueEmptyFlushEdgecaseTester.v", 571, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Expected enqueue to be ready when flush was asserted the previous cycle because queue should be empty\n    at QueueFlushSpec.scala:66 assert(\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EnqueueEmptyFlushEdgecaseTester/202203291516017619837489318663012/EnqueueEmptyFlushEdgecaseTester.v", 595, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___T_1) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((0x13U == (0x1fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                              ? 3U : ((0x12U == (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                       ? 1U : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                ? 2U
                                                : (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___GEN_40)))) 
                            != vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram
                            [0U])))) {
            VL_WRITEF("[%0t] %%Error: EnqueueEmptyFlushEdgecaseTester.v:606: Assertion failed in %NEnqueueEmptyFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EnqueueEmptyFlushEdgecaseTester/202203291516017619837489318663012/EnqueueEmptyFlushEdgecaseTester.v", 606, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___T_1) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((0x13U == (0x1fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                              ? 3U : ((0x12U == (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                       ? 1U : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                ? 2U
                                                : (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___GEN_40)))) 
                            != vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:153 assert(elems(outCounter.value + 1.U) === q.io.deq.bits) //ensure that what comes out is what comes in\n");
        }
    }
    __Vdly__EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    if (((~ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)) 
         & (0x14U > (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value)))) {
        __Vdlyvval__EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0 
            = ((0x13U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                ? 3U : ((0x12U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                         ? 1U : ((0x11U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                  ? 2U : ((0x10U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                           ? 1U : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                    ? 0U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                     ? 1U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                      ? 3U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                       ? 3U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                        ? 1U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                         ? 3U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                          ? 3U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                           ? 0U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                            ? 1U
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                             ? 1U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                               ? 2U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                                ? 2U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                                 ? 3U
                                                                 : 1U))))))))))))))))));
        __Vdlyvset__EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0 = 1U;
    }
    __Vdly__EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10)));
    if (__Vdlyvset__EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0) {
        vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram[0U] 
            = __Vdlyvval__EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0;
    }
    if (vlSelf->reset) {
        vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2 = 0U;
    } else if (vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___T_1) {
        vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2 
            = ((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__wrap_2)
                ? 0U : (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___T_22));
    }
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__flushRegister 
        = ((~ (IData)(vlSelf->reset)) & ((0U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1)) 
                                         & (0U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))));
    if (vlSelf->reset) {
        vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full = 0U;
    } else if (((0U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1)) 
                & (0U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value)))) {
        vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__do_enq) 
                != (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__do_deq))) {
        vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full 
            = vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__do_enq;
    }
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___T_22 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2)));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___GEN_40 
        = ((0x10U == (0x1fU & ((IData)(1U) + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
            ? 1U : ((0xfU == (0x1fU & ((IData)(1U) 
                                       + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                     ? 0U : ((0xeU == (0x1fU & ((IData)(1U) 
                                                + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                              ? 1U : ((0xdU == (0x1fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                       ? 3U : ((0xcU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                ? 3U
                                                : (
                                                   (0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                    ? 1U
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                     ? 3U
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                      ? 3U
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                       ? 0U
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                        ? 1U
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                         ? 1U
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(1U) 
                                                              + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                          ? 0U
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(1U) 
                                                               + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                           ? 2U
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                            ? 2U
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))))
                                                             ? 3U
                                                             : 1U)))))))))))))));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__wrap_2 
        = (0x14U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2));
    if (vlSelf->reset) {
        vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1 = 0U;
        vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value = 0U;
    } else {
        vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1 
            = ((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__wrap_1)
                ? 0U : (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___value_T_3));
        if (vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___T) {
            vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value 
                = ((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__wrap)
                    ? 0U : (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___value_T_1));
        }
    }
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__wrap_1 
        = (0x14U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1)));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__wrap 
        = (0x14U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value)));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___T 
        = ((~ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)) 
           & (0x14U > (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value)));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__do_enq 
        = ((~ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)) 
           & (0x14U > (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value)));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = __Vdly__EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T 
        = (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___T_1 
        = (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
            >> 2U) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full));
    vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__do_deq 
        = (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
            >> 2U) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full));
}
