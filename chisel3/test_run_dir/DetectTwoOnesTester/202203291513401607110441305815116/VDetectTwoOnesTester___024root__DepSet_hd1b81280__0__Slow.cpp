// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDetectTwoOnesTester.h for the primary calling header

#include "verilated.h"

#include "VDetectTwoOnesTester___024root.h"

VL_ATTR_COLD void VDetectTwoOnesTester___024root___settle__TOP__0(VDetectTwoOnesTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDetectTwoOnesTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDetectTwoOnesTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->DetectTwoOnesTester__DOT__wrap_wrap = (0xaU 
                                                   == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle));
    vlSelf->DetectTwoOnesTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)));
    vlSelf->DetectTwoOnesTester__DOT__dut_io_in = (
                                                   (9U 
                                                    != (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                                   & ((8U 
                                                       == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                                      | ((7U 
                                                          == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                                         | ((6U 
                                                             != (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                                            & ((5U 
                                                                == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                                               | ((4U 
                                                                   == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                                                  | ((3U 
                                                                      == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                                                     | ((2U 
                                                                         != (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                                                        & (1U 
                                                                           == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle))))))))));
    vlSelf->DetectTwoOnesTester__DOT__dut__DOT___GEN_2 
        = ((IData)(vlSelf->DetectTwoOnesTester__DOT__dut_io_in)
            ? (IData)(vlSelf->DetectTwoOnesTester__DOT__dut__DOT__state)
            : 0U);
}

VL_ATTR_COLD void VDetectTwoOnesTester___024root___eval_initial(VDetectTwoOnesTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDetectTwoOnesTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDetectTwoOnesTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VDetectTwoOnesTester___024root___eval_settle(VDetectTwoOnesTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDetectTwoOnesTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDetectTwoOnesTester___024root___eval_settle\n"); );
    // Body
    VDetectTwoOnesTester___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VDetectTwoOnesTester___024root___final(VDetectTwoOnesTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDetectTwoOnesTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDetectTwoOnesTester___024root___final\n"); );
}

VL_ATTR_COLD void VDetectTwoOnesTester___024root___ctor_var_reset(VDetectTwoOnesTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDetectTwoOnesTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDetectTwoOnesTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->DetectTwoOnesTester__DOT__dut_io_in = VL_RAND_RESET_I(1);
    vlSelf->DetectTwoOnesTester__DOT__cycle = VL_RAND_RESET_I(4);
    vlSelf->DetectTwoOnesTester__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->DetectTwoOnesTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->DetectTwoOnesTester__DOT__dut__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->DetectTwoOnesTester__DOT__dut__DOT___GEN_2 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
