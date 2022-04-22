// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCountTester.h for the primary calling header

#include "verilated.h"

#include "VCountTester___024root.h"

VL_INLINE_OPT void VCountTester___024root___sequent__TOP__0(VCountTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((2U == (IData)(vlSelf->CountTester__DOT__value)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/CountTester/202203291440313076589543422520511/CountTester.v", 24, "");
        }
    }
    vlSelf->CountTester__DOT__value = ((IData)(vlSelf->reset)
                                        ? 0U : ((IData)(vlSelf->CountTester__DOT__wrap)
                                                 ? 0U
                                                 : (IData)(vlSelf->CountTester__DOT___value_T_1)));
    vlSelf->CountTester__DOT__wrap = (2U == (IData)(vlSelf->CountTester__DOT__value));
    vlSelf->CountTester__DOT___value_T_1 = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelf->CountTester__DOT__value)));
}

void VCountTester___024root___eval(VCountTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VCountTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VCountTester___024root___eval_debug_assertions(VCountTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCountTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
