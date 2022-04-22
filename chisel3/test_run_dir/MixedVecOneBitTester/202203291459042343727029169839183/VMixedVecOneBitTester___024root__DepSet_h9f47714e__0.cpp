// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecOneBitTester.h for the primary calling header

#include "verilated.h"

#include "VMixedVecOneBitTester___024root.h"

VL_INLINE_OPT void VMixedVecOneBitTester___024root___sequent__TOP__0(VMixedVecOneBitTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecOneBitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->MixedVecOneBitTester__DOT__flag) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MixedVecOneBitTester/202203291459042343727029169839183/MixedVecOneBitTester.v", 23, "");
        }
    }
    vlSelf->MixedVecOneBitTester__DOT__flag = ((~ (IData)(vlSelf->reset)) 
                                               & (IData)(vlSelf->MixedVecOneBitTester__DOT___GEN_1));
    vlSelf->MixedVecOneBitTester__DOT___GEN_1 = 1U;
}

void VMixedVecOneBitTester___024root___eval(VMixedVecOneBitTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecOneBitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VMixedVecOneBitTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VMixedVecOneBitTester___024root___eval_debug_assertions(VMixedVecOneBitTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecOneBitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
