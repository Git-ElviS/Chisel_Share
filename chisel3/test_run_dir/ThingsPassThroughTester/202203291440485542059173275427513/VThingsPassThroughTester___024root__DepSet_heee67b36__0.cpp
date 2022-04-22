// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VThingsPassThroughTester.h for the primary calling header

#include "verilated.h"

#include "VThingsPassThroughTester__Syms.h"
#include "VThingsPassThroughTester___024root.h"

VL_INLINE_OPT void VThingsPassThroughTester___024root___sequent__TOP__0(VThingsPassThroughTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VThingsPassThroughTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvval__ThingsPassThroughTester__DOT__q__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ThingsPassThroughTester__DOT__q__DOT__ram__v0;
    CData/*0:0*/ __Vdly__ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    // Body
    __Vdlyvset__ThingsPassThroughTester__DOT__q__DOT__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((IData)(vlSelf->ThingsPassThroughTester__DOT___q_io_deq_ready_T) 
                            >> 8U) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q__DOT__maybe_full)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((0x13U == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                             | ((0x12U == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                | ((0x11U != (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                   & ((0x10U == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                      | ((0xfU == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                         | ((0xeU == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                            | ((0xdU 
                                                != (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                               & ((0xcU 
                                                   == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                  | ((0xbU 
                                                      == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                     | ((0xaU 
                                                         == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                        | ((9U 
                                                            == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                           | ((8U 
                                                               != (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                              & ((7U 
                                                                  == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                                 | ((6U 
                                                                     != (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                                    & ((5U 
                                                                        != (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                                       & ((4U 
                                                                           == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                                          | ((3U 
                                                                              == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                                             | (2U 
                                                                                == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1))))))))))))))))))) 
                            != ((0U >= (IData)(vlSelf->ThingsPassThroughTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0)) 
                                & vlSelf->ThingsPassThroughTester__DOT__q__DOT__ram
                                [vlSelf->ThingsPassThroughTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0]))))) {
            VL_WRITEF("[%0t] %%Error: ThingsPassThroughTester.v:458: Assertion failed in %NThingsPassThroughTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ThingsPassThroughTester/202203291440485542059173275427513/ThingsPassThroughTester.v", 458, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((IData)(vlSelf->ThingsPassThroughTester__DOT___q_io_deq_ready_T) 
                            >> 8U) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q__DOT__maybe_full)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (((0x13U == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                             | ((0x12U == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                | ((0x11U != (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                   & ((0x10U == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                      | ((0xfU == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                         | ((0xeU == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                            | ((0xdU 
                                                != (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                               & ((0xcU 
                                                   == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                  | ((0xbU 
                                                      == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                     | ((0xaU 
                                                         == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                        | ((9U 
                                                            == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                           | ((8U 
                                                               != (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                              & ((7U 
                                                                  == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                                 | ((6U 
                                                                     != (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                                    & ((5U 
                                                                        != (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                                       & ((4U 
                                                                           == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                                          | ((3U 
                                                                              == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                                                                             | (2U 
                                                                                == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1))))))))))))))))))) 
                            != ((0U >= (IData)(vlSelf->ThingsPassThroughTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0)) 
                                & vlSelf->ThingsPassThroughTester__DOT__q__DOT__ram
                                [vlSelf->ThingsPassThroughTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at QueueSpec.scala:36 assert(elems(outCnt.value) === q.io.deq.bits)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x14U == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ThingsPassThroughTester/202203291440485542059173275427513/ThingsPassThroughTester.v", 481, "");
        }
    }
    __Vdly__ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    vlSelf->ThingsPassThroughTester__DOT__q__DOT__ram_io_deq_bits_MPORT_en_pipe_0 = 1U;
    if (((~ (IData)(vlSelf->ThingsPassThroughTester__DOT__q__DOT__maybe_full)) 
         & (0x14U > (IData)(vlSelf->ThingsPassThroughTester__DOT__value)))) {
        __Vdlyvval__ThingsPassThroughTester__DOT__q__DOT__ram__v0 
            = ((0x13U == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
               | ((0x12U == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                  | ((0x11U != (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                     & ((0x10U == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                        | ((0xfU == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                           | ((0xeU == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                              | ((0xdU != (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                 & ((0xcU == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                    | ((0xbU == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                       | ((0xaU == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                          | ((9U == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                             | ((8U 
                                                 != (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                                & ((7U 
                                                    == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                                   | ((6U 
                                                       != (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                                      & ((5U 
                                                          != (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                                         & ((4U 
                                                             == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                                            | ((3U 
                                                                == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                                               | (2U 
                                                                  == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)))))))))))))))))));
        __Vdlyvset__ThingsPassThroughTester__DOT__q__DOT__ram__v0 = 1U;
    }
    __Vdly__ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
                                       ^ (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_13)) 
                                      ^ (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_12)) 
                                     ^ (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_10)));
    if (__Vdlyvset__ThingsPassThroughTester__DOT__q__DOT__ram__v0) {
        vlSelf->ThingsPassThroughTester__DOT__q__DOT__ram[0U] 
            = __Vdlyvval__ThingsPassThroughTester__DOT__q__DOT__ram__v0;
    }
    vlSelf->ThingsPassThroughTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0 = 0U;
    if (vlSelf->reset) {
        vlSelf->ThingsPassThroughTester__DOT__value_1 = 0U;
        vlSelf->ThingsPassThroughTester__DOT__value = 0U;
    } else {
        if ((((IData)(vlSelf->ThingsPassThroughTester__DOT___q_io_deq_ready_T) 
              >> 8U) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q__DOT__maybe_full))) {
            vlSelf->ThingsPassThroughTester__DOT__value_1 
                = ((IData)(vlSelf->ThingsPassThroughTester__DOT__wrap_1)
                    ? 0U : (IData)(vlSelf->ThingsPassThroughTester__DOT___value_T_3));
        }
        if (vlSelf->ThingsPassThroughTester__DOT___T) {
            vlSelf->ThingsPassThroughTester__DOT__value 
                = ((IData)(vlSelf->ThingsPassThroughTester__DOT__wrap)
                    ? 0U : (IData)(vlSelf->ThingsPassThroughTester__DOT___value_T_1));
        }
    }
    vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_15 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    vlSelf->ThingsPassThroughTester__DOT__wrap_1 = 
        (0x14U == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1));
    vlSelf->ThingsPassThroughTester__DOT___value_T_3 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1)));
    if (vlSelf->reset) {
        vlSelf->ThingsPassThroughTester__DOT__q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->ThingsPassThroughTester__DOT__q__DOT__do_enq) 
                != (IData)(vlSelf->ThingsPassThroughTester__DOT__q__DOT__do_deq))) {
        vlSelf->ThingsPassThroughTester__DOT__q__DOT__maybe_full 
            = vlSelf->ThingsPassThroughTester__DOT__q__DOT__do_enq;
    }
    vlSelf->ThingsPassThroughTester__DOT__wrap = (0x14U 
                                                  == (IData)(vlSelf->ThingsPassThroughTester__DOT__value));
    vlSelf->ThingsPassThroughTester__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ThingsPassThroughTester__DOT__value)));
    vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_14 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    vlSelf->ThingsPassThroughTester__DOT___T = ((~ (IData)(vlSelf->ThingsPassThroughTester__DOT__q__DOT__maybe_full)) 
                                                & (0x14U 
                                                   > (IData)(vlSelf->ThingsPassThroughTester__DOT__value)));
    vlSelf->ThingsPassThroughTester__DOT__q__DOT__do_enq 
        = ((~ (IData)(vlSelf->ThingsPassThroughTester__DOT__q__DOT__maybe_full)) 
           & (0x14U > (IData)(vlSelf->ThingsPassThroughTester__DOT__value)));
    vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_12));
    vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_11));
    vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_10));
    vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_9));
    vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_8));
    vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_7));
    vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_6));
    vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_5));
    vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_4));
    vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_3));
    vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_2));
    vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_1));
    vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0));
    vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0 
        = __Vdly__ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    vlSelf->ThingsPassThroughTester__DOT___q_io_deq_ready_T 
        = (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_15) 
            << 0xfU) | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_14) 
                         << 0xeU) | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_13) 
                                      << 0xdU) | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_9) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_8) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))))))))));
    vlSelf->ThingsPassThroughTester__DOT__q__DOT__do_deq 
        = (((IData)(vlSelf->ThingsPassThroughTester__DOT___q_io_deq_ready_T) 
            >> 8U) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q__DOT__maybe_full));
}
