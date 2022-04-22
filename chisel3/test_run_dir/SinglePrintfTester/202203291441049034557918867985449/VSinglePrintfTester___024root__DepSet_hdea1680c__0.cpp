// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSinglePrintfTester.h for the primary calling header

#include "verilated.h"

#include "VSinglePrintfTester___024root.h"

VL_INLINE_OPT void VSinglePrintfTester___024root___sequent__TOP__0(VSinglePrintfTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSinglePrintfTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSinglePrintfTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"x=fe");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SinglePrintfTester/202203291441049034557918867985449/SinglePrintfTester.v", 23, "");
        }
    }
}

void VSinglePrintfTester___024root___eval(VSinglePrintfTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSinglePrintfTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSinglePrintfTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSinglePrintfTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VSinglePrintfTester___024root___eval_debug_assertions(VSinglePrintfTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSinglePrintfTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSinglePrintfTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
