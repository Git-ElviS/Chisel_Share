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
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((IData)(vlSelf->LFSRMaxPeriod__DOT__rv) 
                            == (IData)(vlSelf->LFSRMaxPeriod__DOT__seed)) 
                           & (IData)(vlSelf->LFSRMaxPeriod__DOT__started)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((IData)(vlSelf->LFSRMaxPeriod__DOT__started) 
                               & (2U == (IData)(vlSelf->LFSRMaxPeriod__DOT__wrap_value))))))) {
            VL_WRITEF("[%0t] %%Error: LFSRMaxPeriod.v:128: Assertion failed in %NLFSRMaxPeriod\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/LFSRMaxPeriod/2022032914593917816375766648939314/LFSRMaxPeriod.v", 128, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((IData)(vlSelf->LFSRMaxPeriod__DOT__rv) 
                            == (IData)(vlSelf->LFSRMaxPeriod__DOT__seed)) 
                           & (IData)(vlSelf->LFSRMaxPeriod__DOT__started)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ ((IData)(vlSelf->LFSRMaxPeriod__DOT__started) 
                               & (2U == (IData)(vlSelf->LFSRMaxPeriod__DOT__wrap_value))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at LFSRSpec.scala:27 chisel3.assert(wrap)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((IData)(vlSelf->LFSRMaxPeriod__DOT__rv) 
                           == (IData)(vlSelf->LFSRMaxPeriod__DOT__seed)) 
                          & (IData)(vlSelf->LFSRMaxPeriod__DOT__started)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/LFSRMaxPeriod/2022032914593917816375766648939314/LFSRMaxPeriod.v", 150, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((IData)(vlSelf->LFSRMaxPeriod__DOT__rv) 
                            == (IData)(vlSelf->LFSRMaxPeriod__DOT__last))))) {
            VL_WRITEF("[%0t] %%Error: LFSRMaxPeriod.v:161: Assertion failed in %NLFSRMaxPeriod\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/LFSRMaxPeriod/2022032914593917816375766648939314/LFSRMaxPeriod.v", 161, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((IData)(vlSelf->LFSRMaxPeriod__DOT__rv) 
                            == (IData)(vlSelf->LFSRMaxPeriod__DOT__last))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: LFSR last value (0b%b) was equal to current value (0b%b)\n    at LFSRSpec.scala:32 chisel3.assert(rv =/= last, \"LFSR last value (0b%%b) was equal to current value (0b%%b)\", rv, last)\n",
                       2,vlSelf->LFSRMaxPeriod__DOT__rv,
                       2,(IData)(vlSelf->LFSRMaxPeriod__DOT__last));
        }
    }
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
    vlSelf->LFSRMaxPeriod__DOT__last = (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1) 
                                         << 1U) | (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0));
    vlSelf->LFSRMaxPeriod__DOT__wrap_wrap_wrap = (2U 
                                                  == (IData)(vlSelf->LFSRMaxPeriod__DOT__wrap_value));
    vlSelf->LFSRMaxPeriod__DOT___wrap_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->LFSRMaxPeriod__DOT__wrap_value)));
    vlSelf->LFSRMaxPeriod__DOT__started = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0));
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT___T));
    vlSelf->LFSRMaxPeriod__DOT__rv = (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1) 
                                       << 1U) | (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0));
    vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT___T = 
        ((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1) 
         ^ (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0));
}
