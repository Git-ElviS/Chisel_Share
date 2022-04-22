// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBidirectionalTester3DTabulate.h for the primary calling header

#include "verilated.h"

#include "VBidirectionalTester3DTabulate___024root.h"

VL_INLINE_OPT void VBidirectionalTester3DTabulate___024root___sequent__TOP__0(VBidirectionalTester3DTabulate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBidirectionalTester3DTabulate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBidirectionalTester3DTabulate___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BidirectionalTester3DTabulate/2022032915335715755873694984813968/BidirectionalTester3DTabulate.v", 366, "");
        }
    }
}

void VBidirectionalTester3DTabulate___024root___eval(VBidirectionalTester3DTabulate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBidirectionalTester3DTabulate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBidirectionalTester3DTabulate___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VBidirectionalTester3DTabulate___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VBidirectionalTester3DTabulate___024root___eval_debug_assertions(VBidirectionalTester3DTabulate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBidirectionalTester3DTabulate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBidirectionalTester3DTabulate___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
