// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComplexAssignTester.h for the primary calling header

#include "verilated.h"

#include "VComplexAssignTester___024root.h"

VL_INLINE_OPT void VComplexAssignTester___024root___sequent__TOP__0(VComplexAssignTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->ComplexAssignTester__DOT__cnt) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ComplexAssignTester/202203291501003395136618877876335/ComplexAssignTester.v", 65, "");
        }
    }
    vlSelf->ComplexAssignTester__DOT__cnt = ((~ (IData)(vlSelf->reset)) 
                                             & (IData)(vlSelf->ComplexAssignTester__DOT___wrap_value_T_1));
    vlSelf->ComplexAssignTester__DOT___wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlSelf->ComplexAssignTester__DOT__cnt)));
}

void VComplexAssignTester___024root___eval(VComplexAssignTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VComplexAssignTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VComplexAssignTester___024root___eval_debug_assertions(VComplexAssignTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VComplexAssignTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VComplexAssignTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
