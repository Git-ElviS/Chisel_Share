// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShiftRegisterTester.h for the primary calling header

#include "verilated.h"

#include "VShiftRegisterTester__Syms.h"
#include "VShiftRegisterTester___024root.h"

VL_INLINE_OPT void VShiftRegisterTester___024root___sequent__TOP__0(VShiftRegisterTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftRegisterTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((4U <= (IData)(vlSelf->ShiftRegisterTester__DOT__cnt)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->ShiftRegisterTester__DOT__shifter_0) 
                            != (7U & ((IData)(vlSelf->ShiftRegisterTester__DOT__cnt) 
                                      - (IData)(4U))))))) {
            VL_WRITEF("[%0t] %%Error: ShiftRegisterTester.v:38: Assertion failed in %NShiftRegisterTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ShiftRegisterTester/202203291536058172298109560142120/ShiftRegisterTester.v", 38, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((4U <= (IData)(vlSelf->ShiftRegisterTester__DOT__cnt)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->ShiftRegisterTester__DOT__shifter_0) 
                            != (7U & ((IData)(vlSelf->ShiftRegisterTester__DOT__cnt) 
                                      - (IData)(4U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Vec.scala:250 assert(shifter(0) === expected)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((7U == (IData)(vlSelf->ShiftRegisterTester__DOT__cnt)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ShiftRegisterTester/202203291536058172298109560142120/ShiftRegisterTester.v", 60, "");
        }
    }
    vlSelf->ShiftRegisterTester__DOT__shifter_0 = vlSelf->ShiftRegisterTester__DOT__shifter_1;
    vlSelf->ShiftRegisterTester__DOT__shifter_1 = vlSelf->ShiftRegisterTester__DOT__shifter_2;
    vlSelf->ShiftRegisterTester__DOT__shifter_2 = vlSelf->ShiftRegisterTester__DOT__shifter_3;
    vlSelf->ShiftRegisterTester__DOT__shifter_3 = (3U 
                                                   & (IData)(vlSelf->ShiftRegisterTester__DOT__cnt));
    vlSelf->ShiftRegisterTester__DOT__cnt = ((IData)(vlSelf->reset)
                                              ? 0U : (IData)(vlSelf->ShiftRegisterTester__DOT___wrap_value_T_1));
    vlSelf->ShiftRegisterTester__DOT___wrap_value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ShiftRegisterTester__DOT__cnt)));
}
