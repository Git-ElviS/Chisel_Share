// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLastAssignTester.h for the primary calling header

#include "verilated.h"

#include "VLastAssignTester___024root.h"

VL_INLINE_OPT void VLastAssignTester___024root___sequent__TOP__0(VLastAssignTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLastAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLastAssignTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->LastAssignTester__DOT__cnt) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/LastAssignTester/2022032914471214340697600211315006/LastAssignTester.v", 22, "");
        }
    }
    vlSelf->LastAssignTester__DOT__cnt = ((~ (IData)(vlSelf->reset)) 
                                          & (IData)(vlSelf->LastAssignTester__DOT___wrap_value_T_1));
    vlSelf->LastAssignTester__DOT___wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlSelf->LastAssignTester__DOT__cnt)));
}

void VLastAssignTester___024root___eval(VLastAssignTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLastAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLastAssignTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VLastAssignTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VLastAssignTester___024root___eval_debug_assertions(VLastAssignTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLastAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLastAssignTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
