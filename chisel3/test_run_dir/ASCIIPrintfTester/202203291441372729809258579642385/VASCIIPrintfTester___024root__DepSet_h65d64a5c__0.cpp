// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VASCIIPrintfTester.h for the primary calling header

#include "verilated.h"

#include "VASCIIPrintfTester___024root.h"

VL_INLINE_OPT void VASCIIPrintfTester___024root___sequent__TOP__0(VASCIIPrintfTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VASCIIPrintfTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintfTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U," !\"#$%%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ASCIIPrintfTester/202203291441372729809258579642385/ASCIIPrintfTester.v", 24, "");
        }
    }
}

void VASCIIPrintfTester___024root___eval(VASCIIPrintfTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VASCIIPrintfTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintfTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VASCIIPrintfTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VASCIIPrintfTester___024root___eval_debug_assertions(VASCIIPrintfTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VASCIIPrintfTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VASCIIPrintfTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
