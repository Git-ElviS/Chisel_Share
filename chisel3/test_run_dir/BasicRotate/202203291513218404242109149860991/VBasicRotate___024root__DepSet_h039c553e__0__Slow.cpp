// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBasicRotate.h for the primary calling header

#include "verilated.h"

#include "VBasicRotate___024root.h"

VL_ATTR_COLD void VBasicRotate___024root___settle__TOP__0(VBasicRotate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBasicRotate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicRotate___024root___settle__TOP__0\n"); );
    // Init
    CData/*2:0*/ BasicRotate__DOT___rotL_T_11;
    CData/*2:0*/ BasicRotate__DOT___rotR_T_10;
    // Body
    vlSelf->BasicRotate__DOT___ctr_T_1 = (0xfU & ((IData)(1U) 
                                                  + (IData)(vlSelf->BasicRotate__DOT__ctr)));
    vlSelf->BasicRotate__DOT__shiftAmount = (((IData)(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_3) 
                                              << 3U) 
                                             | (((IData)(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_2) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_0))));
    vlSelf->BasicRotate__DOT___T_5 = ((0U == (3U & 
                                              VL_MODDIV_III(4, (IData)(vlSelf->BasicRotate__DOT__shiftAmount), (IData)(3U)))) 
                                      | (3U == (3U 
                                                & VL_MODDIV_III(4, (IData)(vlSelf->BasicRotate__DOT__shiftAmount), (IData)(3U)))));
    if ((2U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))) {
        BasicRotate__DOT___rotL_T_11 = ((((1U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                           ? 0U : 1U) 
                                         << 2U) | (3U 
                                                   & (((1U 
                                                        & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                                        ? 2U
                                                        : 1U) 
                                                      >> 1U)));
        BasicRotate__DOT___rotR_T_10 = ((((1U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                           ? 0U : 1U) 
                                         << 1U) | (1U 
                                                   & (((1U 
                                                        & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                                        ? 4U
                                                        : 1U) 
                                                      >> 2U)));
    } else if ((1U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))) {
        BasicRotate__DOT___rotL_T_11 = 2U;
        BasicRotate__DOT___rotR_T_10 = 4U;
    } else {
        BasicRotate__DOT___rotL_T_11 = 1U;
        BasicRotate__DOT___rotR_T_10 = 1U;
    }
    if ((4U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))) {
        vlSelf->BasicRotate__DOT___rotL_T_15 = ((6U 
                                                 & ((IData)(BasicRotate__DOT___rotL_T_11) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(BasicRotate__DOT___rotL_T_11) 
                                                      >> 2U)));
        vlSelf->BasicRotate__DOT___rotR_T_14 = ((4U 
                                                 & ((IData)(BasicRotate__DOT___rotR_T_10) 
                                                    << 2U)) 
                                                | (3U 
                                                   & ((IData)(BasicRotate__DOT___rotR_T_10) 
                                                      >> 1U)));
    } else {
        vlSelf->BasicRotate__DOT___rotL_T_15 = BasicRotate__DOT___rotL_T_11;
        vlSelf->BasicRotate__DOT___rotR_T_14 = BasicRotate__DOT___rotR_T_10;
    }
}

VL_ATTR_COLD void VBasicRotate___024root___eval_initial(VBasicRotate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBasicRotate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicRotate___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VBasicRotate___024root___eval_settle(VBasicRotate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBasicRotate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicRotate___024root___eval_settle\n"); );
    // Body
    VBasicRotate___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VBasicRotate___024root___final(VBasicRotate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBasicRotate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicRotate___024root___final\n"); );
}

VL_ATTR_COLD void VBasicRotate___024root___ctor_var_reset(VBasicRotate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBasicRotate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicRotate___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->BasicRotate__DOT__shiftAmount = VL_RAND_RESET_I(4);
    vlSelf->BasicRotate__DOT__ctr = VL_RAND_RESET_I(4);
    vlSelf->BasicRotate__DOT___rotL_T_15 = VL_RAND_RESET_I(3);
    vlSelf->BasicRotate__DOT___rotR_T_14 = VL_RAND_RESET_I(3);
    vlSelf->BasicRotate__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->BasicRotate__DOT___ctr_T_1 = VL_RAND_RESET_I(4);
    vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_0 = VL_RAND_RESET_I(1);
    vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_1 = VL_RAND_RESET_I(1);
    vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_2 = VL_RAND_RESET_I(1);
    vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_3 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
