// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoderTester.h for the primary calling header

#include "verilated.h"

#include "VDecoderTester___024root.h"

VL_ATTR_COLD void VDecoderTester___024root___settle__TOP__0(VDecoderTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoderTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->DecoderTester__DOT___wrap_value_T_1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->DecoderTester__DOT__cnt)));
    vlSelf->DecoderTester__DOT___GEN_5 = ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                           ? 1U : (
                                                   (2U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 1U
                                                     : 0x7fffffffU)));
}

VL_ATTR_COLD void VDecoderTester___024root___eval_initial(VDecoderTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoderTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VDecoderTester___024root___eval_settle(VDecoderTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoderTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester___024root___eval_settle\n"); );
    // Body
    VDecoderTester___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VDecoderTester___024root___final(VDecoderTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoderTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester___024root___final\n"); );
}

VL_ATTR_COLD void VDecoderTester___024root___ctor_var_reset(VDecoderTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoderTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->DecoderTester__DOT__cnt = VL_RAND_RESET_I(2);
    vlSelf->DecoderTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->DecoderTester__DOT___GEN_5 = VL_RAND_RESET_I(31);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
