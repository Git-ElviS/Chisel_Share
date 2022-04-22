// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VModuleIODynamicIndexTester.h for the primary calling header

#include "verilated.h"

#include "VModuleIODynamicIndexTester___024root.h"

VL_ATTR_COLD void VModuleIODynamicIndexTester___024root___settle__TOP__0(VModuleIODynamicIndexTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModuleIODynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModuleIODynamicIndexTester___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->ModuleIODynamicIndexTester__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle)));
    vlSelf->ModuleIODynamicIndexTester__DOT___GEN_12 
        = ((2U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))
            ? ((2U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))
                ? 0x7bU : 0U) : ((1U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))
                                  ? ((1U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))
                                      ? 0x7bU : 0U)
                                  : ((0U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))
                                      ? 0x7bU : 0U)));
}

VL_ATTR_COLD void VModuleIODynamicIndexTester___024root___eval_initial(VModuleIODynamicIndexTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModuleIODynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModuleIODynamicIndexTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VModuleIODynamicIndexTester___024root___eval_settle(VModuleIODynamicIndexTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModuleIODynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModuleIODynamicIndexTester___024root___eval_settle\n"); );
    // Body
    VModuleIODynamicIndexTester___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VModuleIODynamicIndexTester___024root___final(VModuleIODynamicIndexTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModuleIODynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModuleIODynamicIndexTester___024root___final\n"); );
}

VL_ATTR_COLD void VModuleIODynamicIndexTester___024root___ctor_var_reset(VModuleIODynamicIndexTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VModuleIODynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModuleIODynamicIndexTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->ModuleIODynamicIndexTester__DOT__cycle = VL_RAND_RESET_I(2);
    vlSelf->ModuleIODynamicIndexTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(2);
    vlSelf->ModuleIODynamicIndexTester__DOT___GEN_12 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
