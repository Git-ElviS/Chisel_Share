// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLFSRMaxPeriod.h for the primary calling header

#include "verilated.h"

#include "VLFSRMaxPeriod__Syms.h"
#include "VLFSRMaxPeriod___024root.h"

VL_INLINE_OPT void VLFSRMaxPeriod___024root___sequent__TOP__0(VLFSRMaxPeriod___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRMaxPeriod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__LFSRMaxPeriod__DOT__rv_prng__DOT__state_0;
    // Body
    __Vdly__LFSRMaxPeriod__DOT__rv_prng__DOT__state_0 
        = vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((IData)(vlSelf->LFSRMaxPeriod__DOT__rv) 
                            == (IData)(vlSelf->LFSRMaxPeriod__DOT__seed)) 
                           & (IData)(vlSelf->LFSRMaxPeriod__DOT__started)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((IData)(vlSelf->LFSRMaxPeriod__DOT__started) 
                               & (0x3ffeU == (IData)(vlSelf->LFSRMaxPeriod__DOT__wrap_value))))))) {
            VL_WRITEF("[%0t] %%Error: LFSRMaxPeriod.v:289: Assertion failed in %NLFSRMaxPeriod\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/LFSRMaxPeriod/202203291504357997554885383919101/LFSRMaxPeriod.v", 289, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((IData)(vlSelf->LFSRMaxPeriod__DOT__rv) 
                            == (IData)(vlSelf->LFSRMaxPeriod__DOT__seed)) 
                           & (IData)(vlSelf->LFSRMaxPeriod__DOT__started)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((IData)(vlSelf->LFSRMaxPeriod__DOT__started) 
                               & (0x3ffeU == (IData)(vlSelf->LFSRMaxPeriod__DOT__wrap_value))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at LFSRSpec.scala:27 chisel3.assert(wrap)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((IData)(vlSelf->LFSRMaxPeriod__DOT__rv) 
                           == (IData)(vlSelf->LFSRMaxPeriod__DOT__seed)) 
                          & (IData)(vlSelf->LFSRMaxPeriod__DOT__started)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/LFSRMaxPeriod/202203291504357997554885383919101/LFSRMaxPeriod.v", 311, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((IData)(vlSelf->LFSRMaxPeriod__DOT__rv) 
                            == (IData)(vlSelf->LFSRMaxPeriod__DOT__last))))) {
            VL_WRITEF("[%0t] %%Error: LFSRMaxPeriod.v:322: Assertion failed in %NLFSRMaxPeriod\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/LFSRMaxPeriod/202203291504357997554885383919101/LFSRMaxPeriod.v", 322, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((IData)(vlSelf->LFSRMaxPeriod__DOT__rv) 
                            == (IData)(vlSelf->LFSRMaxPeriod__DOT__last))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: LFSR last value (0b%b) was equal to current value (0b%b)\n    at LFSRSpec.scala:32 chisel3.assert(rv =/= last, \"LFSR last value (0b%%b) was equal to current value (0b%%b)\", rv, last)\n",
                       14,vlSelf->LFSRMaxPeriod__DOT__rv,
                       14,(IData)(vlSelf->LFSRMaxPeriod__DOT__last));
        }
    }
    __Vdly__LFSRMaxPeriod__DOT__rv_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | ((((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_13) 
                                       ^ (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_12)) 
                                      ^ (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_10)) 
                                     ^ (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_8)));
    if ((1U & (~ (IData)(vlSelf->LFSRMaxPeriod__DOT__started)))) {
        vlSelf->LFSRMaxPeriod__DOT__seed = vlSelf->LFSRMaxPeriod__DOT__rv;
    }
    if (vlSelf->reset) {
        vlSelf->LFSRMaxPeriod__DOT__wrap_value = 0U;
    } else if (vlSelf->LFSRMaxPeriod__DOT__started) {
        vlSelf->LFSRMaxPeriod__DOT__wrap_value = ((IData)(vlSelf->LFSRMaxPeriod__DOT__wrap_wrap_wrap)
                                                   ? 0U
                                                   : (IData)(vlSelf->LFSRMaxPeriod__DOT___wrap_wrap_value_T_1));
    }
    vlSelf->LFSRMaxPeriod__DOT__last = (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_13) 
                                         << 0xdU) | 
                                        (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_12) 
                                          << 0xcU) 
                                         | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_11) 
                                             << 0xbU) 
                                            | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_10) 
                                                << 0xaU) 
                                               | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_9) 
                                                   << 9U) 
                                                  | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_8) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_7) 
                                                         << 7U) 
                                                        | (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_lo))))))));
    vlSelf->LFSRMaxPeriod__DOT__wrap_wrap_wrap = (0x3ffeU 
                                                  == (IData)(vlSelf->LFSRMaxPeriod__DOT__wrap_value));
    vlSelf->LFSRMaxPeriod__DOT___wrap_wrap_value_T_1 
        = (0x3fffU & ((IData)(1U) + (IData)(vlSelf->LFSRMaxPeriod__DOT__wrap_value)));
    vlSelf->LFSRMaxPeriod__DOT__started = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_13 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_12));
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_12 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_11));
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_11 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_10));
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_10 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_9));
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_9 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_8));
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_8 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_7));
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_7 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_6));
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_6 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_5));
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_5 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_4));
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_4 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_3));
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_3 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_2));
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1));
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0));
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0 
        = __Vdly__LFSRMaxPeriod__DOT__rv_prng__DOT__state_0;
    vlSelf->LFSRMaxPeriod__DOT__rv_lo = (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_6) 
                                          << 6U) | 
                                         (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_5) 
                                           << 5U) | 
                                          (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_4) 
                                            << 4U) 
                                           | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_3) 
                                               << 3U) 
                                              | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_2) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0)))))));
    vlSelf->LFSRMaxPeriod__DOT__rv = (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_13) 
                                       << 0xdU) | (
                                                   ((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_12) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_11) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_10) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_9) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_8) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_7) 
                                                                   << 7U) 
                                                                  | (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_lo))))))));
}
