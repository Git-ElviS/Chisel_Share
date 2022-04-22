// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFailingAssertTester.h for the primary calling header

#include "verilated.h"

#include "VFailingAssertTester__Syms.h"
#include "VFailingAssertTester___024root.h"

VL_INLINE_OPT void VFailingAssertTester___024root___sequent__TOP__0(VFailingAssertTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFailingAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: FailingAssertTester.v:24: Assertion failed in %NFailingAssertTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/FailingAssertTester/2022032914534115244382529214291855/FailingAssertTester.v", 24, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Assert.scala:11 assert(false.B)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (3U == (IData)(vlSelf->FailingAssertTester__DOT__done_value))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/FailingAssertTester/2022032914534115244382529214291855/FailingAssertTester.v", 46, "");
        }
    }
    if (vlSelf->reset) {
        vlSelf->FailingAssertTester__DOT__done_value = 0U;
    } else if ((1U & (~ (IData)(vlSelf->reset)))) {
        vlSelf->FailingAssertTester__DOT__done_value 
            = vlSelf->FailingAssertTester__DOT___done_wrap_value_T_1;
    }
    vlSelf->FailingAssertTester__DOT___done_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->FailingAssertTester__DOT__done_value)));
}
