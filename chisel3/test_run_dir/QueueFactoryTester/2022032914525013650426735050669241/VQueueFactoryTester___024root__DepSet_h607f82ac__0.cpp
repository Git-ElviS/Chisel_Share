// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueFactoryTester.h for the primary calling header

#include "verilated.h"

#include "VQueueFactoryTester__Syms.h"
#include "VQueueFactoryTester___024root.h"

VL_INLINE_OPT void VQueueFactoryTester___024root___sequent__TOP__0(VQueueFactoryTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueFactoryTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdlyvdim0__QueueFactoryTester__DOT__deq__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvval__QueueFactoryTester__DOT__deq__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__QueueFactoryTester__DOT__deq__DOT__ram__v0;
    CData/*0:0*/ __Vdly__QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0;
    // Body
    __Vdlyvset__QueueFactoryTester__DOT__deq__DOT__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((IData)(vlSelf->QueueFactoryTester__DOT___deq_io_deq_ready_T) 
                            >> 0xeU) & (~ (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__empty))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((0x13U != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                             & ((0x12U != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                & ((0x11U == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                   | ((0x10U == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                      | ((0xfU != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                         & ((0xeU == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                            | ((0xdU 
                                                == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                               | ((0xcU 
                                                   == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                  | ((0xbU 
                                                      != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                     & ((0xaU 
                                                         == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                        | ((9U 
                                                            != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                           & ((8U 
                                                               != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                              & ((7U 
                                                                  != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                                 & ((6U 
                                                                     == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                                    | ((5U 
                                                                        == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                                       | ((4U 
                                                                           != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                                          & ((3U 
                                                                              != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                                             & ((2U 
                                                                                == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                                                | (1U 
                                                                                == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)))))))))))))))))))) 
                            != vlSelf->QueueFactoryTester__DOT__deq__DOT__ram
                            [vlSelf->QueueFactoryTester__DOT__deq__DOT__value_1])))) {
            VL_WRITEF("[%0t] %%Error: QueueFactoryTester.v:476: Assertion failed in %NQueueFactoryTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueFactoryTester/2022032914525013650426735050669241/QueueFactoryTester.v", 476, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((IData)(vlSelf->QueueFactoryTester__DOT___deq_io_deq_ready_T) 
                            >> 0xeU) & (~ (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__empty))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((0x13U != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                             & ((0x12U != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                & ((0x11U == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                   | ((0x10U == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                      | ((0xfU != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                         & ((0xeU == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                            | ((0xdU 
                                                == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                               | ((0xcU 
                                                   == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                  | ((0xbU 
                                                      != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                     & ((0xaU 
                                                         == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                        | ((9U 
                                                            != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                           & ((8U 
                                                               != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                              & ((7U 
                                                                  != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                                 & ((6U 
                                                                     == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                                    | ((5U 
                                                                        == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                                       | ((4U 
                                                                           != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                                          & ((3U 
                                                                              != (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                                             & ((2U 
                                                                                == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                                                                                | (1U 
                                                                                == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)))))))))))))))))))) 
                            != vlSelf->QueueFactoryTester__DOT__deq__DOT__ram
                            [vlSelf->QueueFactoryTester__DOT__deq__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:203 assert(elems(outCnt.value) === deq.bits)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlSelf->QueueFactoryTester__DOT__value_1)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/QueueFactoryTester/2022032914525013650426735050669241/QueueFactoryTester.v", 499, "");
        }
    }
    __Vdly__QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0 
        = vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0;
    if (vlSelf->reset) {
        vlSelf->QueueFactoryTester__DOT__deq__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__do_enq) 
                != (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__do_deq))) {
        vlSelf->QueueFactoryTester__DOT__deq__DOT__maybe_full 
            = vlSelf->QueueFactoryTester__DOT__deq__DOT__do_enq;
    }
    if (((~ (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__full)) 
         & (0x14U > (IData)(vlSelf->QueueFactoryTester__DOT__value)))) {
        __Vdlyvval__QueueFactoryTester__DOT__deq__DOT__ram__v0 
            = ((0x13U != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
               & ((0x12U != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                  & ((0x11U == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                     | ((0x10U == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                        | ((0xfU != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                           & ((0xeU == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                              | ((0xdU == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                 | ((0xcU == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                    | ((0xbU != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                       & ((0xaU == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                          | ((9U != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                             & ((8U 
                                                 != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                & ((7U 
                                                    != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                   & ((6U 
                                                       == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                      | ((5U 
                                                          == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                         | ((4U 
                                                             != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                            & ((3U 
                                                                != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                               & ((2U 
                                                                   == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                                  | (1U 
                                                                     == (IData)(vlSelf->QueueFactoryTester__DOT__value))))))))))))))))))));
        __Vdlyvset__QueueFactoryTester__DOT__deq__DOT__ram__v0 = 1U;
        __Vdlyvdim0__QueueFactoryTester__DOT__deq__DOT__ram__v0 
            = vlSelf->QueueFactoryTester__DOT__deq__DOT__value;
    }
    __Vdly__QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_10)));
    if (__Vdlyvset__QueueFactoryTester__DOT__deq__DOT__ram__v0) {
        vlSelf->QueueFactoryTester__DOT__deq__DOT__ram[__Vdlyvdim0__QueueFactoryTester__DOT__deq__DOT__ram__v0] 
            = __Vdlyvval__QueueFactoryTester__DOT__deq__DOT__ram__v0;
    }
    if (vlSelf->reset) {
        vlSelf->QueueFactoryTester__DOT__value_1 = 0U;
        vlSelf->QueueFactoryTester__DOT__deq__DOT__value_1 = 0U;
        vlSelf->QueueFactoryTester__DOT__value = 0U;
        vlSelf->QueueFactoryTester__DOT__deq__DOT__value = 0U;
    } else {
        if ((1U & (((IData)(vlSelf->QueueFactoryTester__DOT___deq_io_deq_ready_T) 
                    >> 0xeU) & (~ (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__empty))))) {
            vlSelf->QueueFactoryTester__DOT__value_1 
                = ((IData)(vlSelf->QueueFactoryTester__DOT__wrap_1)
                    ? 0U : (IData)(vlSelf->QueueFactoryTester__DOT___value_T_3));
        }
        if (vlSelf->QueueFactoryTester__DOT__deq__DOT__do_deq) {
            vlSelf->QueueFactoryTester__DOT__deq__DOT__value_1 
                = vlSelf->QueueFactoryTester__DOT__deq__DOT___value_T_3;
        }
        if (vlSelf->QueueFactoryTester__DOT___T) {
            vlSelf->QueueFactoryTester__DOT__value 
                = ((IData)(vlSelf->QueueFactoryTester__DOT__wrap)
                    ? 0U : (IData)(vlSelf->QueueFactoryTester__DOT___value_T_1));
        }
        if (vlSelf->QueueFactoryTester__DOT__deq__DOT__do_enq) {
            vlSelf->QueueFactoryTester__DOT__deq__DOT__value 
                = vlSelf->QueueFactoryTester__DOT__deq__DOT___value_T_1;
        }
    }
    vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_14));
    vlSelf->QueueFactoryTester__DOT__wrap_1 = (0x14U 
                                               == (IData)(vlSelf->QueueFactoryTester__DOT__value_1));
    vlSelf->QueueFactoryTester__DOT___value_T_3 = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->QueueFactoryTester__DOT__value_1)));
    vlSelf->QueueFactoryTester__DOT__deq__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__value_1)));
    vlSelf->QueueFactoryTester__DOT__wrap = (0x14U 
                                             == (IData)(vlSelf->QueueFactoryTester__DOT__value));
    vlSelf->QueueFactoryTester__DOT___value_T_1 = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->QueueFactoryTester__DOT__value)));
    vlSelf->QueueFactoryTester__DOT__deq__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__value)));
    vlSelf->QueueFactoryTester__DOT__deq__DOT__ptr_match 
        = ((IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__value) 
           == (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__value_1));
    vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_13));
    vlSelf->QueueFactoryTester__DOT__deq__DOT__empty 
        = ((IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__ptr_match) 
           & (~ (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__maybe_full)));
    vlSelf->QueueFactoryTester__DOT__deq__DOT__full 
        = ((IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__ptr_match) 
           & (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__maybe_full));
    vlSelf->QueueFactoryTester__DOT___T = ((~ (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__full)) 
                                           & (0x14U 
                                              > (IData)(vlSelf->QueueFactoryTester__DOT__value)));
    vlSelf->QueueFactoryTester__DOT__deq__DOT__do_enq 
        = ((~ (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__full)) 
           & (0x14U > (IData)(vlSelf->QueueFactoryTester__DOT__value)));
    vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_12));
    vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_11));
    vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_10));
    vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_9));
    vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_8));
    vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_7));
    vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_6));
    vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_5));
    vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_4));
    vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_3));
    vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_2));
    vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_1));
    vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0));
    vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0 
        = __Vdly__QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0;
    vlSelf->QueueFactoryTester__DOT___deq_io_deq_ready_T 
        = (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0))))))))))))))));
    vlSelf->QueueFactoryTester__DOT__deq__DOT__do_deq 
        = (1U & (((IData)(vlSelf->QueueFactoryTester__DOT___deq_io_deq_ready_T) 
                  >> 0xeU) & (~ (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__empty))));
}
