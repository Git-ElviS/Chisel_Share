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
    // Init
    CData/*4:0*/ __Vdly__ShiftsTester__DOT__srs_2;
    CData/*4:0*/ __Vdly__ShiftsTester__DOT__srs_3;
    // Body
    __Vdly__ShiftsTester__DOT__srs_3 = vlSelf->ShiftsTester__DOT__srs_3;
    __Vdly__ShiftsTester__DOT__srs_2 = vlSelf->ShiftsTester__DOT__srs_2;
    __Vdly__ShiftsTester__DOT__srs_2 = vlSelf->ShiftsTester__DOT__srs_1;
    __Vdly__ShiftsTester__DOT__srs_3 = vlSelf->ShiftsTester__DOT__srs_2;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->ShiftsTester__DOT__REG) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x1aU != (IData)(vlSelf->ShiftsTester__DOT__srs_0))))) {
            VL_WRITEF("[%0t] %%Error: ShiftsTester.v:38: Assertion failed in %NShiftsTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ShiftsTester/20220329145021804162317855750896/ShiftsTester.v", 38, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->ShiftsTester__DOT__REG) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x1aU != (IData)(vlSelf->ShiftsTester__DOT__srs_0))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Reg.scala:81 assert(data === (23 + n - 1 - index).U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->ShiftsTester__DOT__REG) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x19U != (IData)(vlSelf->ShiftsTester__DOT__srs_1))))) {
            VL_WRITEF("[%0t] %%Error: ShiftsTester.v:60: Assertion failed in %NShiftsTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ShiftsTester/20220329145021804162317855750896/ShiftsTester.v", 60, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->ShiftsTester__DOT__REG) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x19U != (IData)(vlSelf->ShiftsTester__DOT__srs_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Reg.scala:81 assert(data === (23 + n - 1 - index).U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->ShiftsTester__DOT__REG) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x18U != (IData)(vlSelf->ShiftsTester__DOT__srs_2))))) {
            VL_WRITEF("[%0t] %%Error: ShiftsTester.v:82: Assertion failed in %NShiftsTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ShiftsTester/20220329145021804162317855750896/ShiftsTester.v", 82, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->ShiftsTester__DOT__REG) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x18U != (IData)(vlSelf->ShiftsTester__DOT__srs_2))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Reg.scala:81 assert(data === (23 + n - 1 - index).U)\n");
        }
    }
    vlSelf->ShiftsTester__DOT__srs_1 = vlSelf->ShiftsTester__DOT__srs_0;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->ShiftsTester__DOT__REG) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x17U != (IData)(vlSelf->ShiftsTester__DOT__srs_3))))) {
            VL_WRITEF("[%0t] %%Error: ShiftsTester.v:104: Assertion failed in %NShiftsTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ShiftsTester/20220329145021804162317855750896/ShiftsTester.v", 104, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->ShiftsTester__DOT__REG) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x17U != (IData)(vlSelf->ShiftsTester__DOT__srs_3))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Reg.scala:81 assert(data === (23 + n - 1 - index).U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->ShiftsTester__DOT__REG) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ShiftsTester/20220329145021804162317855750896/ShiftsTester.v", 126, "");
        }
    }
    vlSelf->ShiftsTester__DOT__srs_2 = __Vdly__ShiftsTester__DOT__srs_2;
    vlSelf->ShiftsTester__DOT__srs_3 = __Vdly__ShiftsTester__DOT__srs_3;
    vlSelf->ShiftsTester__DOT__REG = (3U == (IData)(vlSelf->ShiftsTester__DOT__cntVal));
    vlSelf->ShiftsTester__DOT__srs_0 = (0x1fU & ((IData)(0x17U) 
                                                 + (IData)(vlSelf->ShiftsTester__DOT__cntVal)));
    vlSelf->ShiftsTester__DOT__cntVal = ((IData)(vlSelf->reset)
                                          ? 0U : (IData)(vlSelf->ShiftsTester__DOT___wrap_value_T_1));
    vlSelf->ShiftsTester__DOT___wrap_value_T_1 = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->ShiftsTester__DOT__cntVal)));
}
