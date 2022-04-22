// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFoo.h for the primary calling header

#include "verilated.h"

#include "VFoo___024root.h"

VL_INLINE_OPT void VFoo___024root___sequent__TOP__0(VFoo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFoo___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlSelf->Foo__DOT__done_value)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/Foo/202203291447318572242593506572508/Foo.v", 23, "");
        }
    }
    vlSelf->Foo__DOT__done_value = ((IData)(vlSelf->reset)
                                     ? 0U : (IData)(vlSelf->Foo__DOT___done_wrap_value_T_1));
    vlSelf->Foo__DOT___done_wrap_value_T_1 = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelf->Foo__DOT__done_value)));
}

void VFoo___024root___eval(VFoo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFoo___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VFoo___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VFoo___024root___eval_debug_assertions(VFoo___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFoo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFoo___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
