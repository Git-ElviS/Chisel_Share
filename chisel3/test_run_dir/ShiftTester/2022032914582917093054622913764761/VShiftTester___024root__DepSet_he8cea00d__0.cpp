// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShiftTester.h for the primary calling header

#include "verilated.h"

#include "VShiftTester__Syms.h"
#include "VShiftTester___024root.h"

VL_INLINE_OPT void VShiftTester___024root___sequent__TOP__0(VShiftTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->ShiftTester__DOT__cntVal)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x17U != (IData)(vlSelf->ShiftTester__DOT__sr))))) {
            VL_WRITEF("[%0t] %%Error: ShiftTester.v:36: Assertion failed in %NShiftTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ShiftTester/2022032914582917093054622913764761/ShiftTester.v", 36, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->ShiftTester__DOT__cntVal)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x17U != (IData)(vlSelf->ShiftTester__DOT__sr))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Reg.scala:49 assert(sr === start)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlSelf->ShiftTester__DOT__cntVal)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ShiftTester/2022032914582917093054622913764761/ShiftTester.v", 58, "");
        }
    }
    vlSelf->ShiftTester__DOT__sr = vlSelf->ShiftTester__DOT__sr_r_2;
    vlSelf->ShiftTester__DOT__sr_r_2 = vlSelf->ShiftTester__DOT__sr_r_1;
    vlSelf->ShiftTester__DOT__sr_r_1 = vlSelf->ShiftTester__DOT__sr_r;
    vlSelf->ShiftTester__DOT__sr_r = (0x1fU & ((IData)(0x17U) 
                                               + (IData)(vlSelf->ShiftTester__DOT__cntVal)));
    vlSelf->ShiftTester__DOT__cntVal = ((IData)(vlSelf->reset)
                                         ? 0U : (IData)(vlSelf->ShiftTester__DOT___wrap_value_T_1));
    vlSelf->ShiftTester__DOT___wrap_value_T_1 = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->ShiftTester__DOT__cntVal)));
}
