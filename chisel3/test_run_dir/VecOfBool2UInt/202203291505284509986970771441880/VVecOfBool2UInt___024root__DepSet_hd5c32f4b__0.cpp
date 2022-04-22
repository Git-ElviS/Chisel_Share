// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVecOfBool2UInt.h for the primary calling header

#include "verilated.h"

#include "VVecOfBool2UInt___024root.h"

VL_INLINE_OPT void VVecOfBool2UInt___024root___sequent__TOP__0(VVecOfBool2UInt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVecOfBool2UInt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecOfBool2UInt___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->VecOfBool2UInt__DOT__cycle) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/VecOfBool2UInt/202203291505284509986970771441880/VecOfBool2UInt.v", 22, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"13");
        }
    }
    vlSelf->VecOfBool2UInt__DOT__cycle = ((~ (IData)(vlSelf->reset)) 
                                          & (IData)(vlSelf->VecOfBool2UInt__DOT___wrap_value_T_1));
    vlSelf->VecOfBool2UInt__DOT___wrap_value_T_1 = 
        (1U & ((IData)(1U) + (IData)(vlSelf->VecOfBool2UInt__DOT__cycle)));
}

void VVecOfBool2UInt___024root___eval(VVecOfBool2UInt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVecOfBool2UInt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecOfBool2UInt___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VVecOfBool2UInt___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VVecOfBool2UInt___024root___eval_debug_assertions(VVecOfBool2UInt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVecOfBool2UInt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecOfBool2UInt___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
