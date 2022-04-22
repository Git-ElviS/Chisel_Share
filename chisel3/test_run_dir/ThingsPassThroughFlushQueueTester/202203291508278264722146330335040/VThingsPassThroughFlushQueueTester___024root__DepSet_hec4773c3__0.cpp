// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VThingsPassThroughFlushQueueTester.h for the primary calling header

#include "verilated.h"

#include "VThingsPassThroughFlushQueueTester__Syms.h"
#include "VThingsPassThroughFlushQueueTester___024root.h"

VL_INLINE_OPT void VThingsPassThroughFlushQueueTester___024root___sequent__TOP__0(VThingsPassThroughFlushQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VThingsPassThroughFlushQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughFlushQueueTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdlyvval__ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram__v0;
    CData/*0:0*/ __Vdly__ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    // Body
    __Vdlyvset__ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT___q_io_deq_ready_T) 
                            >> 4U) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__maybe_full)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((0x13U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                              ? 3U : ((0x12U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                       ? 0U : ((0x11U 
                                                == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                ? 0U
                                                : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                    ? 0U
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                     ? 1U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                      ? 2U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                       ? 1U
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                        ? 0U
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                         ? 2U
                                                         : 
                                                        ((0xaU 
                                                          == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                          ? 0U
                                                          : 
                                                         ((9U 
                                                           == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                           ? 3U
                                                           : 
                                                          ((8U 
                                                            == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                            ? 0U
                                                            : 
                                                           ((7U 
                                                             == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                             ? 0U
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                              ? 2U
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                               ? 1U
                                                               : 
                                                              ((4U 
                                                                == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                                ? 0U
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                                 ? 3U
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                                  ? 0U
                                                                  : 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                                   ? 2U
                                                                   : 3U))))))))))))))))))) 
                            != ((0U >= (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0))
                                 ? vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram
                                [vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0]
                                 : 0U))))) {
            VL_WRITEF("[%0t] %%Error: ThingsPassThroughFlushQueueTester.v:484: Assertion failed in %NThingsPassThroughFlushQueueTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ThingsPassThroughFlushQueueTester/202203291508278264722146330335040/ThingsPassThroughFlushQueueTester.v", 484, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT___q_io_deq_ready_T) 
                            >> 4U) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__maybe_full)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((0x13U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                              ? 3U : ((0x12U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                       ? 0U : ((0x11U 
                                                == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                ? 0U
                                                : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                    ? 0U
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                     ? 1U
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                      ? 2U
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                       ? 1U
                                                       : 
                                                      ((0xcU 
                                                        == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                        ? 0U
                                                        : 
                                                       ((0xbU 
                                                         == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                         ? 2U
                                                         : 
                                                        ((0xaU 
                                                          == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                          ? 0U
                                                          : 
                                                         ((9U 
                                                           == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                           ? 3U
                                                           : 
                                                          ((8U 
                                                            == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                            ? 0U
                                                            : 
                                                           ((7U 
                                                             == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                             ? 0U
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                              ? 2U
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                               ? 1U
                                                               : 
                                                              ((4U 
                                                                == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                                ? 0U
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                                 ? 3U
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                                  ? 0U
                                                                  : 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))
                                                                   ? 2U
                                                                   : 3U))))))))))))))))))) 
                            != ((0U >= (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0))
                                 ? vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram
                                [vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0]
                                 : 0U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:36 assert(elems(outCnt.value) === q.io.deq.bits)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ThingsPassThroughFlushQueueTester/202203291508278264722146330335040/ThingsPassThroughFlushQueueTester.v", 507, "");
        }
    }
    __Vdly__ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram_io_deq_bits_MPORT_en_pipe_0 = 1U;
    if (((~ (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__maybe_full)) 
         & (0x14U > (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value)))) {
        __Vdlyvval__ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram__v0 
            = ((0x13U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                ? 3U : ((0x12U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                         ? 0U : ((0x11U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                  ? 0U : ((0x10U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                           ? 0U : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                    ? 1U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                     ? 2U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                      ? 1U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                       ? 0U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                        ? 2U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                         ? 0U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                          ? 3U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                           ? 0U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                            ? 0U
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                             ? 2U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                              ? 1U
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                               ? 0U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                                ? 3U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                                 ? 0U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                                  ? 2U
                                                                  : 3U)))))))))))))))))));
        __Vdlyvset__ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram__v0 = 1U;
    }
    __Vdly__ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_10)));
    if (__Vdlyvset__ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram__v0) {
        vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram[0U] 
            = __Vdlyvval__ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram__v0;
    }
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0 = 0U;
    if (vlSelf->reset) {
        vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1 = 0U;
        vlSelf->ThingsPassThroughFlushQueueTester__DOT__value = 0U;
    } else {
        if ((((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT___q_io_deq_ready_T) 
              >> 4U) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__maybe_full))) {
            vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1 
                = ((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__wrap_1)
                    ? 0U : (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT___value_T_3));
        }
        if (vlSelf->ThingsPassThroughFlushQueueTester__DOT___T) {
            vlSelf->ThingsPassThroughFlushQueueTester__DOT__value 
                = ((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__wrap)
                    ? 0U : (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT___value_T_1));
        }
    }
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__wrap_1 
        = (0x14U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1)));
    if (vlSelf->reset) {
        vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__do_enq) 
                != (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__do_deq))) {
        vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__maybe_full 
            = vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__do_enq;
    }
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__wrap 
        = (0x14U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value)));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT___T 
        = ((~ (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__maybe_full)) 
           & (0x14U > (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value)));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__do_enq 
        = ((~ (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__maybe_full)) 
           & (0x14U > (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value)));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_12));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_11));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_10));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_9));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_8));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_7));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_6));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_5));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_4));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_3));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_2));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_1));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_0));
    vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = __Vdly__ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_0;
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
