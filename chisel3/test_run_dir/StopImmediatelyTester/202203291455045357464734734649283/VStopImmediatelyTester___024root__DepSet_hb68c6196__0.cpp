// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStopImmediatelyTester.h for the primary calling header

#include "verilated.h"

#include "VStopImmediatelyTester__Syms.h"
#include "VStopImmediatelyTester___024root.h"

VL_INLINE_OPT void VStopImmediatelyTester___024root___sequent__TOP__0(VStopImmediatelyTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VStopImmediatelyTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStopImmediatelyTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((4U == (IData)(vlSelf->StopImmediatelyTester__DOT__cycle)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/StopImmediatelyTester/202203291455045357464734734649283/StopImmediatelyTester.v", 23, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (5U == (IData)(vlSelf->StopImmediatelyTester__DOT__cycle))))) {
            VL_WRITEF("[%0t] %%Error: StopImmediatelyTester.v:34: Assertion failed in %NStopImmediatelyTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/StopImmediatelyTester/202203291455045357464734734649283/StopImmediatelyTester.v", 34, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (5U == (IData)(vlSelf->StopImmediatelyTester__DOT__cycle))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Simulation did not exit upon executing stop()\n    at Stop.scala:18 assert(cycle =/= 5.U, \"Simulation did not exit upon executing stop()\")\n");
        }
    }
    vlSelf->StopImmediatelyTester__DOT__cycle = ((IData)(vlSelf->reset)
                                                  ? 0U
                                                  : (IData)(vlSelf->StopImmediatelyTester__DOT___cycle_T_1));
    vlSelf->StopImmediatelyTester__DOT___cycle_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->StopImmediatelyTester__DOT__cycle)));
}
