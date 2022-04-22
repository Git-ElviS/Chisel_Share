// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFill3DTester.h for the primary calling header

#include "verilated.h"

#include "VFill3DTester___024root.h"

VL_INLINE_OPT void VFill3DTester___024root___sequent__TOP__0(VFill3DTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFill3DTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFill3DTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/Fill3DTester/2022032915305916045898650608676810/Fill3DTester.v", 12, "");
        }
    }
}

void VFill3DTester___024root___eval(VFill3DTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFill3DTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFill3DTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VFill3DTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VFill3DTester___024root___eval_debug_assertions(VFill3DTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFill3DTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFill3DTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
