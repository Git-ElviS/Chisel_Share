// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSyncReadMemWithZeroWidthTester.h for the primary calling header

#include "verilated.h"

#include "VSyncReadMemWithZeroWidthTester___024root.h"

VL_INLINE_OPT void VSyncReadMemWithZeroWidthTester___024root___sequent__TOP__0(VSyncReadMemWithZeroWidthTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWithZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWithZeroWidthTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((1U != (IData)(vlSelf->SyncReadMemWithZeroWidthTester__DOT__cnt)) 
                          & (2U == (IData)(vlSelf->SyncReadMemWithZeroWidthTester__DOT__cnt))) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SyncReadMemWithZeroWidthTester/202203291513228497385212709828133/SyncReadMemWithZeroWidthTester.v", 27, "");
        }
    }
    vlSelf->SyncReadMemWithZeroWidthTester__DOT__cnt 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->SyncReadMemWithZeroWidthTester__DOT__cnt_wrap_wrap)
                                           ? 0U : (IData)(vlSelf->SyncReadMemWithZeroWidthTester__DOT___cnt_wrap_value_T_1)));
    vlSelf->SyncReadMemWithZeroWidthTester__DOT__cnt_wrap_wrap 
        = (2U == (IData)(vlSelf->SyncReadMemWithZeroWidthTester__DOT__cnt));
    vlSelf->SyncReadMemWithZeroWidthTester__DOT___cnt_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->SyncReadMemWithZeroWidthTester__DOT__cnt)));
}

void VSyncReadMemWithZeroWidthTester___024root___eval(VSyncReadMemWithZeroWidthTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWithZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWithZeroWidthTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSyncReadMemWithZeroWidthTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VSyncReadMemWithZeroWidthTester___024root___eval_debug_assertions(VSyncReadMemWithZeroWidthTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWithZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWithZeroWidthTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
