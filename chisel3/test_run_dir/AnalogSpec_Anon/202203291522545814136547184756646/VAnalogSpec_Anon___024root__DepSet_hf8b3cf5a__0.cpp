// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAnalogSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VAnalogSpec_Anon___024root.h"

VL_INLINE_OPT void VAnalogSpec_Anon___024root___sequent__TOP__0(VAnalogSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogSpec_Anon___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->AnalogSpec_Anon__DOT__cycle) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AnalogSpec_Anon/202203291522545814136547184756646/AnalogSpec_Anon.v", 50, "");
        }
    }
    vlSelf->AnalogSpec_Anon__DOT__cycle = ((~ (IData)(vlSelf->reset)) 
                                           & (IData)(vlSelf->AnalogSpec_Anon__DOT___wrap_value_T_1));
    vlSelf->AnalogSpec_Anon__DOT___wrap_value_T_1 = 
        (1U & ((IData)(1U) + (IData)(vlSelf->AnalogSpec_Anon__DOT__cycle)));
}

void VAnalogSpec_Anon___024root___eval(VAnalogSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogSpec_Anon___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VAnalogSpec_Anon___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VAnalogSpec_Anon___024root___eval_debug_assertions(VAnalogSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogSpec_Anon___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
