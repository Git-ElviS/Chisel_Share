// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VChiselRunners_Anon.h for the primary calling header

#include "verilated.h"

#include "VChiselRunners_Anon___024root.h"

VL_INLINE_OPT void VChiselRunners_Anon___024root___sequent__TOP__0(VChiselRunners_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChiselRunners_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->ChiselRunners_Anon__DOT__done_value) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ChiselRunners_Anon/202203291514124232368785031269624/ChiselRunners_Anon.v", 22, "");
        }
    }
    vlSelf->ChiselRunners_Anon__DOT__done_value = (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (IData)(vlSelf->ChiselRunners_Anon__DOT___done_wrap_value_T_1));
    vlSelf->ChiselRunners_Anon__DOT___done_wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlSelf->ChiselRunners_Anon__DOT__done_value)));
}

void VChiselRunners_Anon___024root___eval(VChiselRunners_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChiselRunners_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VChiselRunners_Anon___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VChiselRunners_Anon___024root___eval_debug_assertions(VChiselRunners_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChiselRunners_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
