// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPopCountTester.h for the primary calling header

#include "verilated.h"

#include "VPopCountTester___024root.h"

VL_INLINE_OPT void VPopCountTester___024root___sequent__TOP__0(VPopCountTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPopCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__PopCountTester__DOT__x;
    // Body
    __Vdly__PopCountTester__DOT__x = vlSelf->PopCountTester__DOT__x;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->PopCountTester__DOT__REG) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/PopCountTester/202203291457557418057664064117847/PopCountTester.v", 25, "");
        }
    }
    __Vdly__PopCountTester__DOT__x = (1U & ((~ (IData)(vlSelf->reset)) 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelf->PopCountTester__DOT__x))));
    vlSelf->PopCountTester__DOT__REG = vlSelf->PopCountTester__DOT__x;
    vlSelf->PopCountTester__DOT__x = __Vdly__PopCountTester__DOT__x;
}

void VPopCountTester___024root___eval(VPopCountTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPopCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VPopCountTester___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VPopCountTester___024root___eval_debug_assertions(VPopCountTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPopCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
