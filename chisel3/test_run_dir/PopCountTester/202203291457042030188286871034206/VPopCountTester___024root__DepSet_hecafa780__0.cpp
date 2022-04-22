// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPopCountTester.h for the primary calling header

#include "verilated.h"

#include "VPopCountTester__Syms.h"
#include "VPopCountTester___024root.h"

VL_INLINE_OPT void VPopCountTester___024root___sequent__TOP__0(VPopCountTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPopCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->PopCountTester__DOT__REG) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/PopCountTester/202203291457042030188286871034206/PopCountTester.v", 30, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((3U & ((1U & (IData)(vlSelf->PopCountTester__DOT__x)) 
                                   + (1U & ((IData)(vlSelf->PopCountTester__DOT__x) 
                                            >> 1U)))) 
                            != (7U & ((1U & (IData)(vlSelf->PopCountTester__DOT__x)) 
                                      + (1U & ((IData)(vlSelf->PopCountTester__DOT__x) 
                                               >> 1U)))))))) {
            VL_WRITEF("[%0t] %%Error: PopCountTester.v:41: Assertion failed in %NPopCountTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/PopCountTester/202203291457042030188286871034206/PopCountTester.v", 41, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((3U & ((1U & (IData)(vlSelf->PopCountTester__DOT__x)) 
                                   + (1U & ((IData)(vlSelf->PopCountTester__DOT__x) 
                                            >> 1U)))) 
                            != (7U & ((1U & (IData)(vlSelf->PopCountTester__DOT__x)) 
                                      + (1U & ((IData)(vlSelf->PopCountTester__DOT__x) 
                                               >> 1U)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at PopCount.scala:16 assert(result === expected)\n");
        }
    }
    vlSelf->PopCountTester__DOT__REG = (3U == (IData)(vlSelf->PopCountTester__DOT__x));
    vlSelf->PopCountTester__DOT__x = ((IData)(vlSelf->reset)
                                       ? 0U : (IData)(vlSelf->PopCountTester__DOT___x_T_1));
    vlSelf->PopCountTester__DOT___x_T_1 = (3U & ((IData)(1U) 
                                                 + (IData)(vlSelf->PopCountTester__DOT__x)));
}
