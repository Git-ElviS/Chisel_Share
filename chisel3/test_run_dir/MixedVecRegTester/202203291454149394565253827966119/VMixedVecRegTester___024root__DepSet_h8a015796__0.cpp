// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecRegTester.h for the primary calling header

#include "verilated.h"

#include "VMixedVecRegTester___024root.h"

VL_INLINE_OPT void VMixedVecRegTester___024root___sequent__TOP__0(VMixedVecRegTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecRegTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->MixedVecRegTester__DOT__doneReg) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MixedVecRegTester/202203291454149394565253827966119/MixedVecRegTester.v", 22, "");
        }
    }
    vlSelf->MixedVecRegTester__DOT__doneReg = (1U & 
                                               (~ (IData)(vlSelf->reset)));
}

void VMixedVecRegTester___024root___eval(VMixedVecRegTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecRegTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VMixedVecRegTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VMixedVecRegTester___024root___eval_debug_assertions(VMixedVecRegTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecRegTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
