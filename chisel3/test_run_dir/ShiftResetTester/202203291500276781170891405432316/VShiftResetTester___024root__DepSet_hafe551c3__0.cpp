// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShiftResetTester.h for the primary calling header

#include "verilated.h"

#include "VShiftResetTester__Syms.h"
#include "VShiftResetTester___024root.h"

VL_INLINE_OPT void VShiftResetTester___024root___sequent__TOP__0(VShiftResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((2U == (IData)(vlSelf->ShiftResetTester__DOT__cntVal)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U != (IData)(vlSelf->ShiftResetTester__DOT__sr))))) {
            VL_WRITEF("[%0t] %%Error: ShiftResetTester.v:55: Assertion failed in %NShiftResetTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ShiftResetTester/202203291500276781170891405432316/ShiftResetTester.v", 55, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((2U == (IData)(vlSelf->ShiftResetTester__DOT__cntVal)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U != (IData)(vlSelf->ShiftResetTester__DOT__sr))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Reg.scala:59 assert(sr === (if (n == 0) cntVal + 23.U else 1.U))\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((2U == (IData)(vlSelf->ShiftResetTester__DOT__cntVal)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ShiftResetTester/202203291500276781170891405432316/ShiftResetTester.v", 78, "");
        }
    }
    if (vlSelf->reset) {
        vlSelf->ShiftResetTester__DOT__sr = 1U;
        vlSelf->ShiftResetTester__DOT__sr_r_2 = 1U;
        vlSelf->ShiftResetTester__DOT__sr_r_1 = 1U;
        vlSelf->ShiftResetTester__DOT__sr_r = 1U;
        vlSelf->ShiftResetTester__DOT__cntVal = 0U;
    } else {
        vlSelf->ShiftResetTester__DOT__sr = vlSelf->ShiftResetTester__DOT__sr_r_2;
        vlSelf->ShiftResetTester__DOT__sr_r_2 = vlSelf->ShiftResetTester__DOT__sr_r_1;
        vlSelf->ShiftResetTester__DOT__sr_r_1 = vlSelf->ShiftResetTester__DOT__sr_r;
        vlSelf->ShiftResetTester__DOT__sr_r = (0x1fU 
                                               & ((IData)(0x17U) 
                                                  + (IData)(vlSelf->ShiftResetTester__DOT__cntVal)));
        vlSelf->ShiftResetTester__DOT__cntVal = ((IData)(vlSelf->ShiftResetTester__DOT__wrap_wrap)
                                                  ? 0U
                                                  : (IData)(vlSelf->ShiftResetTester__DOT___wrap_value_T_1));
    }
    vlSelf->ShiftResetTester__DOT__wrap_wrap = (2U 
                                                == (IData)(vlSelf->ShiftResetTester__DOT__cntVal));
    vlSelf->ShiftResetTester__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ShiftResetTester__DOT__cntVal)));
}
