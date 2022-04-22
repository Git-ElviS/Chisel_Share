// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUInt2Bundle.h for the primary calling header

#include "verilated.h"

#include "VUInt2Bundle___024root.h"

VL_INLINE_OPT void VUInt2Bundle___024root___sequent__TOP__0(VUInt2Bundle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUInt2Bundle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2Bundle___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->UInt2Bundle__DOT__cycle) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/UInt2Bundle/2022032914500417091016838972722856/UInt2Bundle.v", 22, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"MyBundle(foo -> 11, bar ->  4)");
        }
    }
    vlSelf->UInt2Bundle__DOT__cycle = ((~ (IData)(vlSelf->reset)) 
                                       & (IData)(vlSelf->UInt2Bundle__DOT___wrap_value_T_1));
    vlSelf->UInt2Bundle__DOT___wrap_value_T_1 = (1U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->UInt2Bundle__DOT__cycle)));
}

void VUInt2Bundle___024root___eval(VUInt2Bundle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUInt2Bundle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2Bundle___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VUInt2Bundle___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VUInt2Bundle___024root___eval_debug_assertions(VUInt2Bundle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUInt2Bundle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2Bundle___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
