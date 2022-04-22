// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleVendingMachineTester.h for the primary calling header

#include "verilated.h"

#include "VSimpleVendingMachineTester___024root.h"

VL_ATTR_COLD void VSimpleVendingMachineTester___024root___settle__TOP__0(VSimpleVendingMachineTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->SimpleVendingMachineTester__DOT__wrap_wrap 
        = (9U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle));
    vlSelf->SimpleVendingMachineTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)));
    vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__doDispense 
        = (4U <= (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__value));
    vlSelf->SimpleVendingMachineTester__DOT__dut__DOT___value_T_1 
        = (7U & ((IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__value) 
                 + (((9U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                     | ((8U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                        & ((7U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                           & ((6U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                              | (5U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle))))))
                     ? 2U : (((9U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                              & ((8U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                 | ((7U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                    & ((6U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                       & (5U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle))))))
                              ? 1U : 0U))));
}

VL_ATTR_COLD void VSimpleVendingMachineTester___024root___eval_initial(VSimpleVendingMachineTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VSimpleVendingMachineTester___024root___eval_settle(VSimpleVendingMachineTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester___024root___eval_settle\n"); );
    // Body
    VSimpleVendingMachineTester___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VSimpleVendingMachineTester___024root___final(VSimpleVendingMachineTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester___024root___final\n"); );
}

VL_ATTR_COLD void VSimpleVendingMachineTester___024root___ctor_var_reset(VSimpleVendingMachineTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->SimpleVendingMachineTester__DOT__cycle = VL_RAND_RESET_I(4);
    vlSelf->SimpleVendingMachineTester__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->SimpleVendingMachineTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(4);
    vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__value = VL_RAND_RESET_I(3);
    vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__doDispense = VL_RAND_RESET_I(1);
    vlSelf->SimpleVendingMachineTester__DOT__dut__DOT___value_T_1 = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
