// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClockDividerTest.h for the primary calling header

#include "verilated.h"

#include "VClockDividerTest__Syms.h"
#include "VClockDividerTest___024root.h"

VL_INLINE_OPT void VClockDividerTest___024root___sequent__TOP__0(VClockDividerTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VClockDividerTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDividerTest___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((0xaU > (IData)(vlSelf->ClockDividerTest__DOT__reg1)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->ClockDividerTest__DOT__reg2) 
                            != (0xffU & ((IData)(vlSelf->ClockDividerTest__DOT__reg1) 
                                         >> 1U)))))) {
            VL_WRITEF("[%0t] %%Error: ClockDividerTest.v:31: Assertion failed in %NClockDividerTest\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ClockDividerTest/2022032915184615388158226919262017/ClockDividerTest.v", 31, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((0xaU > (IData)(vlSelf->ClockDividerTest__DOT__reg1)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->ClockDividerTest__DOT__reg2) 
                            != (0xffU & ((IData)(vlSelf->ClockDividerTest__DOT__reg1) 
                                         >> 1U)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MultiClockSpec.scala:22 assert(reg2 === reg1 / 2.U) // 1:2 clock relationship\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0xaU == (IData)(vlSelf->ClockDividerTest__DOT__reg1)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ClockDividerTest/2022032915184615388158226919262017/ClockDividerTest.v", 54, "");
        }
    }
    vlSelf->ClockDividerTest__DOT__cDiv = (1U & ((IData)(vlSelf->reset) 
                                                 | (~ (IData)(vlSelf->ClockDividerTest__DOT__cDiv))));
    vlSelf->ClockDividerTest__DOT__reg1 = ((IData)(vlSelf->reset)
                                            ? 0U : (IData)(vlSelf->ClockDividerTest__DOT___reg1_T_1));
    vlSelf->ClockDividerTest__DOT___reg1_T_1 = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->ClockDividerTest__DOT__reg1)));
}
