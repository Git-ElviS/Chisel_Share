// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VModule1.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VModule1___024root.h"

VL_INLINE_OPT void VModule1___024root___sequent__TOP__0(VModule1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModule1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModule1___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->Module1__DOT__m0__DOT__r_a_b = vlSelf->i_a_b;
    vlSelf->Module1__DOT__m0__DOT__o_a_b = vlSelf->Module1__DOT__m0__DOT__r_a_b;
}

void VModule1___024root___eval(VModule1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModule1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModule1___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VModule1___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VModule1___024root___eval_debug_assertions(VModule1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModule1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModule1___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->i_a_b & 0xfeU))) {
        Verilated::overWidthError("i_a_b");}
    if (VL_UNLIKELY((vlSelf->i_b_0_0 & 0xfeU))) {
        Verilated::overWidthError("i_b_0_0");}
    if (VL_UNLIKELY((vlSelf->i_b_0_1 & 0xfeU))) {
        Verilated::overWidthError("i_b_0_1");}
    if (VL_UNLIKELY((vlSelf->i_b_0_2 & 0xfeU))) {
        Verilated::overWidthError("i_b_0_2");}
    if (VL_UNLIKELY((vlSelf->i_b_0_3 & 0xfeU))) {
        Verilated::overWidthError("i_b_0_3");}
    if (VL_UNLIKELY((vlSelf->i_b_1_0 & 0xfeU))) {
        Verilated::overWidthError("i_b_1_0");}
    if (VL_UNLIKELY((vlSelf->i_b_1_1 & 0xfeU))) {
        Verilated::overWidthError("i_b_1_1");}
    if (VL_UNLIKELY((vlSelf->i_b_1_2 & 0xfeU))) {
        Verilated::overWidthError("i_b_1_2");}
    if (VL_UNLIKELY((vlSelf->i_b_1_3 & 0xfeU))) {
        Verilated::overWidthError("i_b_1_3");}
    if (VL_UNLIKELY((vlSelf->i_b_2_0 & 0xfeU))) {
        Verilated::overWidthError("i_b_2_0");}
    if (VL_UNLIKELY((vlSelf->i_b_2_1 & 0xfeU))) {
        Verilated::overWidthError("i_b_2_1");}
    if (VL_UNLIKELY((vlSelf->i_b_2_2 & 0xfeU))) {
        Verilated::overWidthError("i_b_2_2");}
    if (VL_UNLIKELY((vlSelf->i_b_2_3 & 0xfeU))) {
        Verilated::overWidthError("i_b_2_3");}
    if (VL_UNLIKELY((vlSelf->i_b_3_0 & 0xfeU))) {
        Verilated::overWidthError("i_b_3_0");}
    if (VL_UNLIKELY((vlSelf->i_b_3_1 & 0xfeU))) {
        Verilated::overWidthError("i_b_3_1");}
    if (VL_UNLIKELY((vlSelf->i_b_3_2 & 0xfeU))) {
        Verilated::overWidthError("i_b_3_2");}
    if (VL_UNLIKELY((vlSelf->i_b_3_3 & 0xfeU))) {
        Verilated::overWidthError("i_b_3_3");}
}
#endif  // VL_DEBUG
