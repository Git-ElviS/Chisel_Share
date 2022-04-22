// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWrapTester.h for the primary calling header

#include "verilated.h"

#include "VWrapTester__Syms.h"
#include "VWrapTester___024root.h"

VL_INLINE_OPT void VWrapTester___024root___sequent__TOP__0(VWrapTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((2U == (IData)(vlSelf->WrapTester__DOT__cnt)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U != (IData)(vlSelf->WrapTester__DOT__cnt))))) {
            VL_WRITEF("[%0t] %%Error: WrapTester.v:25: Assertion failed in %NWrapTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/WrapTester/2022032914455915033772611335061324/WrapTester.v", 25, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((2U == (IData)(vlSelf->WrapTester__DOT__cnt)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (2U != (IData)(vlSelf->WrapTester__DOT__cnt))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Counter.scala:48 assert(cnt === (max - 1).asUInt)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((2U == (IData)(vlSelf->WrapTester__DOT__cnt)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/WrapTester/2022032914455915033772611335061324/WrapTester.v", 47, "");
        }
    }
    vlSelf->WrapTester__DOT__cnt = ((IData)(vlSelf->reset)
                                     ? 0U : ((IData)(vlSelf->WrapTester__DOT__wrap_wrap)
                                              ? 0U : (IData)(vlSelf->WrapTester__DOT___wrap_value_T_1)));
    vlSelf->WrapTester__DOT__wrap_wrap = (2U == (IData)(vlSelf->WrapTester__DOT__cnt));
    vlSelf->WrapTester__DOT___wrap_value_T_1 = (3U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->WrapTester__DOT__cnt)));
}
