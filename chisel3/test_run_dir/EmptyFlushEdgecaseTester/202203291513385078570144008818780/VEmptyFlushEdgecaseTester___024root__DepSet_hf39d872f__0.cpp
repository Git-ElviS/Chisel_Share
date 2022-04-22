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
    CData/*0:0*/ __Vdlyvval__EmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__EmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0;
    CData/*0:0*/ __Vdly__EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full;
    CData/*0:0*/ __Vdly__EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    // Body
    __Vdlyvset__EmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0 = 0U;
    __Vdly__EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full 
        = vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT___T_1) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__flushRegister)))) {
            VL_WRITEF("[%0t] %%Error: EmptyFlushEdgecaseTester.v:479: Assertion failed in %NEmptyFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EmptyFlushEdgecaseTester/202203291513385078570144008818780/EmptyFlushEdgecaseTester.v", 479, "");
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
                         & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)))) {
            VL_WRITEF("[%0t] %%Error: EmptyFlushEdgecaseTester.v:503: Assertion failed in %NEmptyFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EmptyFlushEdgecaseTester/202203291513385078570144008818780/EmptyFlushEdgecaseTester.v", 503, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:64 assert(q.io.count === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)))) {
            VL_WRITEF("[%0t] %%Error: EmptyFlushEdgecaseTester.v:525: Assertion failed in %NEmptyFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EmptyFlushEdgecaseTester/202203291513385078570144008818780/EmptyFlushEdgecaseTester.v", 525, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Expected to not be able to dequeue when flush is asserted the previous cycle\n    at QueueFlushSpec.scala:65 assert(!q.io.deq.valid, \"Expected to not be able to dequeue when flush is asserted the previous cycle\")\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)))) {
            VL_WRITEF("[%0t] %%Error: EmptyFlushEdgecaseTester.v:549: Assertion failed in %NEmptyFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EmptyFlushEdgecaseTester/202203291513385078570144008818780/EmptyFlushEdgecaseTester.v", 549, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__flushRegister) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Expected enqueue to be ready when flush was asserted the previous cycle because queue should be empty\n    at QueueFlushSpec.scala:66 assert(\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EmptyFlushEdgecaseTester/202203291513385078570144008818780/EmptyFlushEdgecaseTester.v", 573, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT___T_1) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((0x13U != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                             & ((0x12U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                | ((0x11U != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                   & ((0x10U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                      | ((0xfU != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                         & ((0xeU != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                            & ((0xdU 
                                                != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                               & ((0xcU 
                                                   == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                  | ((0xbU 
                                                      != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                     & ((0xaU 
                                                         == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                        | ((9U 
                                                            != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                           & ((8U 
                                                               == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                              | ((7U 
                                                                  == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                                 | ((6U 
                                                                     != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                                    & ((5U 
                                                                        != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                                       & ((4U 
                                                                           == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                                          | (3U 
                                                                             == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)))))))))))))))))) 
                            != vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ram
                            [0U])))) {
            VL_WRITEF("[%0t] %%Error: EmptyFlushEdgecaseTester.v:584: Assertion failed in %NEmptyFlushEdgecaseTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EmptyFlushEdgecaseTester/202203291513385078570144008818780/EmptyFlushEdgecaseTester.v", 584, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT___T_1) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((0x13U != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                             & ((0x12U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                | ((0x11U != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                   & ((0x10U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                      | ((0xfU != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                         & ((0xeU != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                            & ((0xdU 
                                                != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                               & ((0xcU 
                                                   == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                  | ((0xbU 
                                                      != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                     & ((0xaU 
                                                         == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                        | ((9U 
                                                            != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                           & ((8U 
                                                               == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                              | ((7U 
                                                                  == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                                 | ((6U 
                                                                     != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                                    & ((5U 
                                                                        != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                                       & ((4U 
                                                                           == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)) 
                                                                          | (3U 
                                                                             == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)))))))))))))))))) 
                            != vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ram
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueFlushSpec.scala:123 assert(elems(outCnt) === q.io.deq.bits)\n");
        }
    }
    __Vdly__EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    if (((~ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)) 
         & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_enq_valid))) {
        __Vdlyvval__EmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0 
            = ((0x13U != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
               & ((0x12U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                  | ((0x11U != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                     & ((0x10U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                        | ((0xfU != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                           & ((0xeU != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                              & ((0xdU != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                 & ((0xcU == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                    | ((0xbU != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                       & ((0xaU == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                          | ((9U != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                             & ((8U 
                                                 == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                                | ((7U 
                                                    == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                                   | ((6U 
                                                       != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                                      & ((5U 
                                                          != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                                         & ((4U 
                                                             == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                                            | (3U 
                                                               == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))))))))))))))))));
        __Vdlyvset__EmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0 = 1U;
    }
    if (vlSelf->reset) {
        __Vdly__EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full = 0U;
    } else if (((0U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value_1)) 
                & (0U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)))) {
        __Vdly__EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__do_enq) 
                != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__do_deq))) {
        __Vdly__EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full 
            = vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__do_enq;
    }
    __Vdly__EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10)));
    if (__Vdlyvset__EmptyFlushEdgecaseTester__DOT__q__DOT__ram__v0) {
        vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ram[0U] 
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
        vlSelf->EmptyFlushEdgecaseTester__DOT__value_1 = 0U;
        vlSelf->EmptyFlushEdgecaseTester__DOT__value = 0U;
    } else {
        vlSelf->EmptyFlushEdgecaseTester__DOT__value_1 
            = ((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__wrap_1)
                ? 0U : (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT___value_T_3));
        if (((~ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)) 
             & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_enq_valid))) {
            vlSelf->EmptyFlushEdgecaseTester__DOT__value 
                = ((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__wrap)
                    ? 0U : (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT___value_T_1));
        }
    }
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full 
        = __Vdly__EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full;
    vlSelf->EmptyFlushEdgecaseTester__DOT___outCnt_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt)));
    vlSelf->EmptyFlushEdgecaseTester__DOT__wrap_1 = 
        (0x14U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value_1));
    vlSelf->EmptyFlushEdgecaseTester__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value_1)));
    vlSelf->EmptyFlushEdgecaseTester__DOT__wrap = (0x14U 
                                                   == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value));
    vlSelf->EmptyFlushEdgecaseTester__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)));
    vlSelf->EmptyFlushEdgecaseTester__DOT__flush = 
        ((0U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value_1)) 
         & (0U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_enq_valid 
        = ((0x14U > (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
           & (~ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__flush)));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__do_enq 
        = ((~ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)) 
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
    vlSelf->EmptyFlushEdgecaseTester__DOT___T_1 = (
                                                   ((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                                                    >> 2U) 
                                                   & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full));
    vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__do_deq 
        = (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
            >> 2U) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full));
}
