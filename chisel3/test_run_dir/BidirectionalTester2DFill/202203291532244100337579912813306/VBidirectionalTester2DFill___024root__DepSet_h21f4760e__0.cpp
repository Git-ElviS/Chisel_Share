// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBidirectionalTester2DFill.h for the primary calling header

#include "verilated.h"

#include "VBidirectionalTester2DFill___024root.h"

VL_INLINE_OPT void VBidirectionalTester2DFill___024root___sequent__TOP__0(VBidirectionalTester2DFill___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBidirectionalTester2DFill__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBidirectionalTester2DFill___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BidirectionalTester2DFill/202203291532244100337579912813306/BidirectionalTester2DFill.v", 11, "");
        }
    }
}

void VBidirectionalTester2DFill___024root___eval(VBidirectionalTester2DFill___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBidirectionalTester2DFill__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBidirectionalTester2DFill___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VBidirectionalTester2DFill___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VBidirectionalTester2DFill___024root___eval_debug_assertions(VBidirectionalTester2DFill___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBidirectionalTester2DFill__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBidirectionalTester2DFill___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
