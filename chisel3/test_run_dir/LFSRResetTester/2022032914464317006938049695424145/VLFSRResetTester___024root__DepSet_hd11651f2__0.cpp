// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLFSRResetTester.h for the primary calling header

#include "verilated.h"

#include "VLFSRResetTester__Syms.h"
#include "VLFSRResetTester___024root.h"

VL_INLINE_OPT void VLFSRResetTester___024root___sequent__TOP__0(VLFSRResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((2U == (IData)(vlSelf->LFSRResetTester__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->LFSRResetTester__DOT__lfsr__DOT__state_0)))) {
            VL_WRITEF("[%0t] %%Error: LFSRResetTester.v:101: Assertion failed in %NLFSRResetTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/LFSRResetTester/2022032914464317006938049695424145/LFSRResetTester.v", 101, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((2U == (IData)(vlSelf->LFSRResetTester__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (IData)(vlSelf->LFSRResetTester__DOT__lfsr__DOT__state_0)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: LFSR is NOT locked up, but should be!\n    at LFSRSpec.scala:92 assert(lfsr.io.out.asUInt === lockUpValue.U, \"LFSR is NOT locked up, but should be!\")\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((4U == (IData)(vlSelf->LFSRResetTester__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ (IData)(vlSelf->LFSRResetTester__DOT__lfsr__DOT__state_0))))) {
            VL_WRITEF("[%0t] %%Error: LFSRResetTester.v:125: Assertion failed in %NLFSRResetTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/LFSRResetTester/2022032914464317006938049695424145/LFSRResetTester.v", 125, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((4U == (IData)(vlSelf->LFSRResetTester__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (~ (IData)(vlSelf->LFSRResetTester__DOT__lfsr__DOT__state_0))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: LFSR is locked up, but should not be after reset!\n    at LFSRSpec.scala:98 assert(lfsr.io.out.asUInt =/= lockUpValue.U, \"LFSR is locked up, but should not be after reset!\")\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((4U == (IData)(vlSelf->LFSRResetTester__DOT__count)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/LFSRResetTester/2022032914464317006938049695424145/LFSRResetTester.v", 149, "");
        }
    }
    vlSelf->LFSRResetTester__DOT__lfsr__DOT__state_0 
        = ((3U == (IData)(vlSelf->LFSRResetTester__DOT__count)) 
           | (IData)(vlSelf->LFSRResetTester__DOT__lfsr__DOT___GEN_4));
    vlSelf->LFSRResetTester__DOT__count = ((IData)(vlSelf->reset)
                                            ? 0U : 
                                           ((IData)(vlSelf->LFSRResetTester__DOT__wrap_wrap)
                                             ? 0U : (IData)(vlSelf->LFSRResetTester__DOT___wrap_value_T_1)));
    vlSelf->LFSRResetTester__DOT__wrap_wrap = (4U == (IData)(vlSelf->LFSRResetTester__DOT__count));
    vlSelf->LFSRResetTester__DOT___wrap_value_T_1 = 
        (7U & ((IData)(1U) + (IData)(vlSelf->LFSRResetTester__DOT__count)));
    vlSelf->LFSRResetTester__DOT__lfsr__DOT___GEN_4 
        = ((1U != (IData)(vlSelf->LFSRResetTester__DOT__count)) 
           & (IData)(vlSelf->LFSRResetTester__DOT__lfsr__DOT__state_0));
}
