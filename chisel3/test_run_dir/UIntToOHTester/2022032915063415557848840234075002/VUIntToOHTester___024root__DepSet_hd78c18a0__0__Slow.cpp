// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUIntToOHTester.h for the primary calling header

#include "verilated.h"

#include "VUIntToOHTester___024root.h"

VL_ATTR_COLD void VUIntToOHTester___024root___eval_initial(VUIntToOHTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUIntToOHTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUIntToOHTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VUIntToOHTester___024root___eval_settle(VUIntToOHTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUIntToOHTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUIntToOHTester___024root___eval_settle\n"); );
}

VL_ATTR_COLD void VUIntToOHTester___024root___final(VUIntToOHTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUIntToOHTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUIntToOHTester___024root___final\n"); );
}

VL_ATTR_COLD void VUIntToOHTester___024root___ctor_var_reset(VUIntToOHTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VUIntToOHTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUIntToOHTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
}
