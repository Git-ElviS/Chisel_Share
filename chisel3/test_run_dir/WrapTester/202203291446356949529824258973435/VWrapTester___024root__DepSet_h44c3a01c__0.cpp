// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWrapTester.h for the primary calling header

#include "verilated.h"

#include "VWrapTester___024root.h"

VL_INLINE_OPT void VWrapTester___024root___sequent__TOP__0(VWrapTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->WrapTester__DOT__cnt) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/WrapTester/202203291446356949529824258973435/WrapTester.v", 44, "");
        }
    }
    vlSelf->WrapTester__DOT__cnt = ((~ (IData)(vlSelf->reset)) 
                                    & (IData)(vlSelf->WrapTester__DOT___wrap_value_T_1));
    vlSelf->WrapTester__DOT___wrap_value_T_1 = (1U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->WrapTester__DOT__cnt)));
}

void VWrapTester___024root___eval(VWrapTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VWrapTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VWrapTester___024root___eval_debug_assertions(VWrapTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
