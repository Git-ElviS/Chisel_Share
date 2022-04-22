// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShiftsTester.h for the primary calling header

#include "verilated.h"

#include "VShiftsTester__Syms.h"
#include "VShiftsTester___024root.h"

VL_INLINE_OPT void VShiftsTester___024root___sequent__TOP__0(VShiftsTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftsTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->ShiftsTester__DOT__REG) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x18U != (IData)(vlSelf->ShiftsTester__DOT__srs_0))))) {
            VL_WRITEF("[%0t] %%Error: ShiftsTester.v:32: Assertion failed in %NShiftsTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ShiftsTester/2022032914493213345416750436633557/ShiftsTester.v", 32, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->ShiftsTester__DOT__REG) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x18U != (IData)(vlSelf->ShiftsTester__DOT__srs_0))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Reg.scala:81 assert(data === (23 + n - 1 - index).U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->ShiftsTester__DOT__REG) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x17U != (IData)(vlSelf->ShiftsTester__DOT__srs_1))))) {
            VL_WRITEF("[%0t] %%Error: ShiftsTester.v:54: Assertion failed in %NShiftsTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ShiftsTester/2022032914493213345416750436633557/ShiftsTester.v", 54, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->ShiftsTester__DOT__REG) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x17U != (IData)(vlSelf->ShiftsTester__DOT__srs_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Reg.scala:81 assert(data === (23 + n - 1 - index).U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->ShiftsTester__DOT__REG) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ShiftsTester/2022032914493213345416750436633557/ShiftsTester.v", 76, "");
        }
    }
    vlSelf->ShiftsTester__DOT__srs_1 = vlSelf->ShiftsTester__DOT__srs_0;
    vlSelf->ShiftsTester__DOT__REG = vlSelf->ShiftsTester__DOT__cntVal;
    vlSelf->ShiftsTester__DOT__srs_0 = (0x1fU & ((IData)(0x17U) 
                                                 + (IData)(vlSelf->ShiftsTester__DOT__cntVal)));
    vlSelf->ShiftsTester__DOT__cntVal = ((~ (IData)(vlSelf->reset)) 
                                         & (IData)(vlSelf->ShiftsTester__DOT___wrap_value_T_1));
    vlSelf->ShiftsTester__DOT___wrap_value_T_1 = (1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->ShiftsTester__DOT__cntVal)));
}
