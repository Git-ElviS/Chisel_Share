// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlackBoxWithParamsTester.h for the primary calling header

#include "verilated.h"

#include "VBlackBoxWithParamsTester___024root.h"

VL_INLINE_OPT void VBlackBoxWithParamsTester___024root___sequent__TOP__0(VBlackBoxWithParamsTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithParamsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlSelf->BlackBoxWithParamsTester__DOT__cycles)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BlackBoxWithParamsTester/202203291507545181264613254398370/BlackBoxWithParamsTester.v", 240, "");
        }
    }
    vlSelf->BlackBoxWithParamsTester__DOT__cycles = 
        ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->BlackBoxWithParamsTester__DOT___wrap_value_T_1));
    vlSelf->BlackBoxWithParamsTester__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->BlackBoxWithParamsTester__DOT__cycles)));
}

void VBlackBoxWithParamsTester___024root___eval(VBlackBoxWithParamsTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithParamsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VBlackBoxWithParamsTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VBlackBoxWithParamsTester___024root___eval_debug_assertions(VBlackBoxWithParamsTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithParamsTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithParamsTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
