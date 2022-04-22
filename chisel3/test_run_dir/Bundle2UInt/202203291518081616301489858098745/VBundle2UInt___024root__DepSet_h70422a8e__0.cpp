// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBundle2UInt.h for the primary calling header

#include "verilated.h"

#include "VBundle2UInt___024root.h"

VL_INLINE_OPT void VBundle2UInt___024root___sequent__TOP__0(VBundle2UInt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBundle2UInt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundle2UInt___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->Bundle2UInt__DOT__cycle) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/Bundle2UInt/202203291518081616301489858098745/Bundle2UInt.v", 22, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"195");
        }
    }
    vlSelf->Bundle2UInt__DOT__cycle = ((~ (IData)(vlSelf->reset)) 
                                       & (IData)(vlSelf->Bundle2UInt__DOT___wrap_value_T_1));
    vlSelf->Bundle2UInt__DOT___wrap_value_T_1 = (1U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->Bundle2UInt__DOT__cycle)));
}

void VBundle2UInt___024root___eval(VBundle2UInt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBundle2UInt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundle2UInt___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VBundle2UInt___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VBundle2UInt___024root___eval_debug_assertions(VBundle2UInt___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBundle2UInt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundle2UInt___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
