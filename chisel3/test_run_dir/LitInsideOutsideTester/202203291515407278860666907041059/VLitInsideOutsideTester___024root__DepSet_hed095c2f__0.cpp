// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLitInsideOutsideTester.h for the primary calling header

#include "verilated.h"

#include "VLitInsideOutsideTester___024root.h"

VL_INLINE_OPT void VLitInsideOutsideTester___024root___sequent__TOP__0(VLitInsideOutsideTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLitInsideOutsideTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLitInsideOutsideTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/LitInsideOutsideTester/202203291515407278860666907041059/LitInsideOutsideTester.v", 12, "");
        }
    }
}

void VLitInsideOutsideTester___024root___eval(VLitInsideOutsideTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLitInsideOutsideTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLitInsideOutsideTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VLitInsideOutsideTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VLitInsideOutsideTester___024root___eval_debug_assertions(VLitInsideOutsideTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLitInsideOutsideTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLitInsideOutsideTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
