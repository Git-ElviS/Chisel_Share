// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegOfVec.h for the primary calling header

#include "verilated.h"

#include "VRegOfVec___024root.h"

VL_INLINE_OPT void VRegOfVec___024root___sequent__TOP__0(VRegOfVec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegOfVec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegOfVec___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((2U == (IData)(vlSelf->RegOfVec__DOT__cycle)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RegOfVec/202203291455042574093790284678705/RegOfVec.v", 24, "");
        }
    }
    vlSelf->RegOfVec__DOT__cycle = ((IData)(vlSelf->reset)
                                     ? 0U : ((IData)(vlSelf->RegOfVec__DOT__wrap_wrap)
                                              ? 0U : (IData)(vlSelf->RegOfVec__DOT___wrap_value_T_1)));
    vlSelf->RegOfVec__DOT__wrap_wrap = (2U == (IData)(vlSelf->RegOfVec__DOT__cycle));
    vlSelf->RegOfVec__DOT___wrap_value_T_1 = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelf->RegOfVec__DOT__cycle)));
}

void VRegOfVec___024root___eval(VRegOfVec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegOfVec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegOfVec___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VRegOfVec___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VRegOfVec___024root___eval_debug_assertions(VRegOfVec___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegOfVec__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegOfVec___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
