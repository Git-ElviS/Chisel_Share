// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSqueezeFunctionalityTester.h for the primary calling header

#include "verilated.h"

#include "VSqueezeFunctionalityTester___024root.h"

VL_INLINE_OPT void VSqueezeFunctionalityTester___024root___sequent__TOP__0(VSqueezeFunctionalityTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSqueezeFunctionalityTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0xaU < (IData)(vlSelf->SqueezeFunctionalityTester__DOT__counter)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/SqueezeFunctionalityTester/202203291506352452759517212920665/SqueezeFunctionalityTester.v", 28, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"SqueezeTest %4#    %2#.squeeze(range\"[-2,5].0\") => %2#\n",
                       10,vlSelf->SqueezeFunctionalityTester__DOT__counter,
                       4,(0xfU & ((0x1fU & VL_EXTENDS_II(5,4, 
                                                         (0xfU 
                                                          & (IData)(vlSelf->SqueezeFunctionalityTester__DOT__counter)))) 
                                  - (IData)(6U))),4,
                       (0xfU & ((0x1fU & VL_EXTENDS_II(5,4, 
                                                       (0xfU 
                                                        & (IData)(vlSelf->SqueezeFunctionalityTester__DOT__counter)))) 
                                - (IData)(6U))));
        }
    }
    vlSelf->SqueezeFunctionalityTester__DOT__counter 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->SqueezeFunctionalityTester__DOT___counter_T_1));
    vlSelf->SqueezeFunctionalityTester__DOT___counter_T_1 
        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->SqueezeFunctionalityTester__DOT__counter)));
}

void VSqueezeFunctionalityTester___024root___eval(VSqueezeFunctionalityTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSqueezeFunctionalityTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSqueezeFunctionalityTester___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VSqueezeFunctionalityTester___024root___eval_debug_assertions(VSqueezeFunctionalityTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSqueezeFunctionalityTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
