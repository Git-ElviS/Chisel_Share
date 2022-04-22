// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSucceedingAssertTester.h for the primary calling header

#include "verilated.h"

#include "VSucceedingAssertTester___024root.h"

VL_INLINE_OPT void VSucceedingAssertTester___024root___sequent__TOP__0(VSucceedingAssertTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSucceedingAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (3U == (IData)(vlSelf->SucceedingAssertTester__DOT__done_value))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SucceedingAssertTester/2022032914535713074681014967481002/SucceedingAssertTester.v", 24, "");
        }
    }
    if (vlSelf->reset) {
        vlSelf->SucceedingAssertTester__DOT__done_value = 0U;
    } else if ((1U & (~ (IData)(vlSelf->reset)))) {
        vlSelf->SucceedingAssertTester__DOT__done_value 
            = vlSelf->SucceedingAssertTester__DOT___done_wrap_value_T_1;
    }
    vlSelf->SucceedingAssertTester__DOT___done_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->SucceedingAssertTester__DOT__done_value)));
}

void VSucceedingAssertTester___024root___eval(VSucceedingAssertTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSucceedingAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSucceedingAssertTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VSucceedingAssertTester___024root___eval_debug_assertions(VSucceedingAssertTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSucceedingAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSucceedingAssertTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
