// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelinedResetTester.h for the primary calling header

#include "verilated.h"

#include "VPipelinedResetTester___024root.h"

VL_INLINE_OPT void VPipelinedResetTester___024root___sequent__TOP__0(VPipelinedResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelinedResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (3U == (IData)(vlSelf->PipelinedResetTester__DOT__done_value))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/PipelinedResetTester/202203291454142111953006626733017/PipelinedResetTester.v", 24, "");
        }
    }
    if (vlSelf->reset) {
        vlSelf->PipelinedResetTester__DOT__done_value = 0U;
    } else if ((1U & (~ (IData)(vlSelf->reset)))) {
        vlSelf->PipelinedResetTester__DOT__done_value 
            = vlSelf->PipelinedResetTester__DOT___done_wrap_value_T_1;
    }
    vlSelf->PipelinedResetTester__DOT___done_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->PipelinedResetTester__DOT__done_value)));
}

void VPipelinedResetTester___024root___eval(VPipelinedResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelinedResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VPipelinedResetTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VPipelinedResetTester___024root___eval_debug_assertions(VPipelinedResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelinedResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
