// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VAsyncResetSpec_Anon___024root.h"

VL_INLINE_OPT void VAsyncResetSpec_Anon___024root___sequent__TOP__2(VAsyncResetSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->AsyncResetSpec_Anon__DOT__reg_3 = 0xdeU;
        vlSelf->AsyncResetSpec_Anon__DOT__reg_2 = 0xadU;
        vlSelf->AsyncResetSpec_Anon__DOT__reg_1 = 0xbeU;
        vlSelf->AsyncResetSpec_Anon__DOT__reg_0 = 0xefU;
    } else {
        vlSelf->AsyncResetSpec_Anon__DOT__reg_3 = 0xbaU;
        vlSelf->AsyncResetSpec_Anon__DOT__reg_2 = 0xd0U;
        vlSelf->AsyncResetSpec_Anon__DOT__reg_1 = 0xcaU;
        vlSelf->AsyncResetSpec_Anon__DOT__reg_0 = 0xd0U;
    }
}

void VAsyncResetSpec_Anon___024root___sequent__TOP__1(VAsyncResetSpec_Anon___024root* vlSelf);

void VAsyncResetSpec_Anon___024root___eval(VAsyncResetSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VAsyncResetSpec_Anon___024root___sequent__TOP__1(vlSelf);
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VAsyncResetSpec_Anon___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

#ifdef VL_DEBUG
void VAsyncResetSpec_Anon___024root___eval_debug_assertions(VAsyncResetSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
