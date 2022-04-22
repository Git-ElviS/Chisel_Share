// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VParameterizedVendingMachineTester.h for the primary calling header

#include "verilated.h"

#include "VParameterizedVendingMachineTester___024root.h"

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root___settle__TOP__0(VParameterizedVendingMachineTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root___settle__TOP__0\n"); );
    // Init
    CData/*1:0*/ ParameterizedVendingMachineTester__DOT___GEN_23;
    CData/*1:0*/ ParameterizedVendingMachineTester__DOT___GEN_44;
    CData/*1:0*/ ParameterizedVendingMachineTester__DOT___GEN_65;
    CData/*1:0*/ ParameterizedVendingMachineTester__DOT___GEN_86;
    CData/*0:0*/ ParameterizedVendingMachineTester__DOT___GEN_133;
    CData/*0:0*/ ParameterizedVendingMachineTester__DOT___GEN_160;
    // Body
    vlSelf->ParameterizedVendingMachineTester__DOT__wrap_wrap 
        = (0x64U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx));
    vlSelf->ParameterizedVendingMachineTester__DOT___wrap_value_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)));
    vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__doDispense 
        = (4U <= (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value));
    ParameterizedVendingMachineTester__DOT___GEN_133 
        = ((0x1eU != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
           & ((0x1dU == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
              | ((0x1cU != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                 & ((0x1bU != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                    & ((0x1aU != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                       & ((0x19U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                          & ((0x18U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                             & ((0x17U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                & ((0x16U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                   & ((0x15U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                      & ((0x14U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                         | ((0x13U 
                                             != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                            & ((0x12U 
                                                != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                               & ((0x11U 
                                                   != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                  & ((0x10U 
                                                      != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                     & ((0xfU 
                                                         != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                        & ((0xeU 
                                                            != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                           & ((0xdU 
                                                               == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                              | ((0xcU 
                                                                  != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                 & ((0xbU 
                                                                     != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                    & ((0xaU 
                                                                        != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                       & ((9U 
                                                                           != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                          & ((8U 
                                                                              != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                             & ((7U 
                                                                                != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((6U 
                                                                                != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & (5U 
                                                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)))))))))))))))))))))))))));
    ParameterizedVendingMachineTester__DOT___GEN_23 
        = ((0x14U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
            ? 1U : ((0x13U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                     ? 1U : ((0x12U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                              ? 0U : ((0x11U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                       ? 1U : ((0x10U 
                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                ? 1U
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                    ? 1U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                     ? 0U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                      ? 1U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                       ? 2U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                        ? 0U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                         ? 1U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                           ? 1U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                            ? 1U
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                             ? 0U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                              ? 1U
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                               ? 1U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                                ? 1U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                                 ? 1U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                                  ? 0U
                                                                  : 1U))))))))))))))))))));
    ParameterizedVendingMachineTester__DOT___GEN_160 
        = ((0x39U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
           & ((0x38U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
              | ((0x37U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                 & ((0x36U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                    & ((0x35U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                       & ((0x34U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                          & ((0x33U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                             | ((0x32U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                & ((0x31U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                   & ((0x30U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                      & ((0x2fU != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                         & ((0x2eU 
                                             == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                            | ((0x2dU 
                                                != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                               & ((0x2cU 
                                                   != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                  & ((0x2bU 
                                                      != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                     & ((0x2aU 
                                                         != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                        & ((0x29U 
                                                            != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                           & ((0x28U 
                                                               == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                              | ((0x27U 
                                                                  != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                 & ((0x26U 
                                                                     != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                    & ((0x25U 
                                                                        != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                       & ((0x24U 
                                                                           != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                          & ((0x23U 
                                                                              != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                             & ((0x22U 
                                                                                != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x21U 
                                                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                | ((0x20U 
                                                                                != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x1fU 
                                                                                != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & (IData)(ParameterizedVendingMachineTester__DOT___GEN_133))))))))))))))))))))))))))));
    ParameterizedVendingMachineTester__DOT___GEN_44 
        = ((0x29U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
            ? 1U : ((0x28U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                     ? 0U : ((0x27U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                              ? 1U : ((0x26U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                       ? 2U : ((0x25U 
                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                ? 1U
                                                : (
                                                   (0x24U 
                                                    == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                    ? 0U
                                                    : 
                                                   ((0x23U 
                                                     == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                     ? 0U
                                                     : 
                                                    ((0x22U 
                                                      == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                      ? 0U
                                                      : 
                                                     ((0x21U 
                                                       == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                       ? 1U
                                                       : 
                                                      ((0x20U 
                                                        == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                        ? 2U
                                                        : 
                                                       ((0x1fU 
                                                         == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                         ? 2U
                                                         : 
                                                        ((0x1eU 
                                                          == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                          ? 1U
                                                          : 
                                                         ((0x1dU 
                                                           == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                           ? 1U
                                                           : 
                                                          ((0x1cU 
                                                            == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                            ? 2U
                                                            : 
                                                           ((0x1bU 
                                                             == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                             ? 1U
                                                             : 
                                                            ((0x1aU 
                                                              == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                              ? 0U
                                                              : 
                                                             ((0x19U 
                                                               == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                               ? 0U
                                                               : 
                                                              ((0x18U 
                                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                                ? 0U
                                                                : 
                                                               ((0x17U 
                                                                 == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                                 ? 0U
                                                                 : 
                                                                ((0x16U 
                                                                  == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                                  ? 1U
                                                                  : 
                                                                 ((0x15U 
                                                                   == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                                   ? 0U
                                                                   : (IData)(ParameterizedVendingMachineTester__DOT___GEN_23))))))))))))))))))))));
    vlSelf->ParameterizedVendingMachineTester__DOT___GEN_186 
        = ((0x53U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
           & ((0x52U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
              & ((0x51U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                 | ((0x50U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                    & ((0x4fU != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                       & ((0x4eU != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                          & ((0x4dU != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                             & ((0x4cU != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                & ((0x4bU == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                   | ((0x4aU != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                      & ((0x49U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                         & ((0x48U 
                                             != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                            & ((0x47U 
                                                != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                               & ((0x46U 
                                                   != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                  & ((0x45U 
                                                      == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                     | ((0x44U 
                                                         != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                        & ((0x43U 
                                                            != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                           & ((0x42U 
                                                               != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                              & ((0x41U 
                                                                  != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                 & ((0x40U 
                                                                     != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                    & ((0x3fU 
                                                                        != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                       & ((0x3eU 
                                                                           != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                          & ((0x3dU 
                                                                              != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                             & ((0x3cU 
                                                                                != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x3bU 
                                                                                != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & ((0x3aU 
                                                                                != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                                & (IData)(ParameterizedVendingMachineTester__DOT___GEN_160)))))))))))))))))))))))))));
    ParameterizedVendingMachineTester__DOT___GEN_65 
        = ((0x3eU == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
            ? 1U : ((0x3dU == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                     ? 0U : ((0x3cU == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                              ? 0U : ((0x3bU == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                       ? 0U : ((0x3aU 
                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                ? 1U
                                                : (
                                                   (0x39U 
                                                    == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                    ? 0U
                                                    : 
                                                   ((0x38U 
                                                     == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                     ? 2U
                                                     : 
                                                    ((0x37U 
                                                      == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                      ? 1U
                                                      : 
                                                     ((0x36U 
                                                       == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                       ? 2U
                                                       : 
                                                      ((0x35U 
                                                        == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                        ? 0U
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                         ? 1U
                                                         : 
                                                        ((0x33U 
                                                          == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                          ? 0U
                                                          : 
                                                         ((0x32U 
                                                           == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                           ? 2U
                                                           : 
                                                          ((0x31U 
                                                            == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                            ? 2U
                                                            : 
                                                           ((0x30U 
                                                             == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                             ? 0U
                                                             : 
                                                            ((0x2fU 
                                                              == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                              ? 1U
                                                              : 
                                                             ((0x2eU 
                                                               == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                               ? 2U
                                                               : 
                                                              ((0x2dU 
                                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                                ? 2U
                                                                : 
                                                               ((0x2cU 
                                                                 == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                                 ? 0U
                                                                 : 
                                                                ((0x2bU 
                                                                  == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x2aU 
                                                                   == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                                   ? 2U
                                                                   : (IData)(ParameterizedVendingMachineTester__DOT___GEN_44))))))))))))))))))))));
    ParameterizedVendingMachineTester__DOT___GEN_86 
        = ((0x53U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
            ? 0U : ((0x52U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                     ? 2U : ((0x51U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                              ? 1U : ((0x50U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                       ? 1U : ((0x4fU 
                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                ? 0U
                                                : (
                                                   (0x4eU 
                                                    == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                    ? 2U
                                                    : 
                                                   ((0x4dU 
                                                     == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                     ? 1U
                                                     : 
                                                    ((0x4cU 
                                                      == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                      ? 0U
                                                      : 
                                                     ((0x4bU 
                                                       == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                       ? 0U
                                                       : 
                                                      ((0x4aU 
                                                        == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                        ? 2U
                                                        : 
                                                       ((0x49U 
                                                         == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                         ? 0U
                                                         : 
                                                        ((0x48U 
                                                          == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                          ? 0U
                                                          : 
                                                         ((0x47U 
                                                           == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                           ? 1U
                                                           : 
                                                          ((0x46U 
                                                            == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                            ? 1U
                                                            : 
                                                           ((0x45U 
                                                             == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                             ? 1U
                                                             : 
                                                            ((0x44U 
                                                              == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                              ? 2U
                                                              : 
                                                             ((0x43U 
                                                               == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                               ? 1U
                                                               : 
                                                              ((0x42U 
                                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                                ? 0U
                                                                : 
                                                               ((0x41U 
                                                                 == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                                 ? 0U
                                                                 : 
                                                                ((0x40U 
                                                                  == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x3fU 
                                                                   == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                                   ? 0U
                                                                   : (IData)(ParameterizedVendingMachineTester__DOT___GEN_65))))))))))))))))))))));
    vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102 
        = ((0x63U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
            ? 0U : ((0x62U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                     ? 1U : ((0x61U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                              ? 2U : ((0x60U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                       ? 1U : ((0x5fU 
                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                ? 2U
                                                : (
                                                   (0x5eU 
                                                    == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                    ? 0U
                                                    : 
                                                   ((0x5dU 
                                                     == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                     ? 2U
                                                     : 
                                                    ((0x5cU 
                                                      == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                      ? 1U
                                                      : 
                                                     ((0x5bU 
                                                       == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                       ? 0U
                                                       : 
                                                      ((0x5aU 
                                                        == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                        ? 1U
                                                        : 
                                                       ((0x59U 
                                                         == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                         ? 0U
                                                         : 
                                                        ((0x58U 
                                                          == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                          ? 0U
                                                          : 
                                                         ((0x57U 
                                                           == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                           ? 2U
                                                           : 
                                                          ((0x56U 
                                                            == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                            ? 0U
                                                            : 
                                                           ((0x55U 
                                                             == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                             ? 0U
                                                             : 
                                                            ((0x54U 
                                                              == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))
                                                              ? 0U
                                                              : (IData)(ParameterizedVendingMachineTester__DOT___GEN_86)))))))))))))))));
    vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT___value_T_1 
        = (7U & ((IData)(vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value) 
                 + ((2U & (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102))
                     ? 2U : ((1U & (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102))
                              ? 1U : 0U))));
}

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root___eval_initial(VParameterizedVendingMachineTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root___eval_settle(VParameterizedVendingMachineTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root___eval_settle\n"); );
    // Body
    VParameterizedVendingMachineTester___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root___final(VParameterizedVendingMachineTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root___final\n"); );
}

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root___ctor_var_reset(VParameterizedVendingMachineTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->ParameterizedVendingMachineTester__DOT__idx = VL_RAND_RESET_I(7);
    vlSelf->ParameterizedVendingMachineTester__DOT__wrap_wrap = VL_RAND_RESET_I(1);
    vlSelf->ParameterizedVendingMachineTester__DOT___wrap_value_T_1 = VL_RAND_RESET_I(7);
    vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102 = VL_RAND_RESET_I(2);
    vlSelf->ParameterizedVendingMachineTester__DOT___GEN_186 = VL_RAND_RESET_I(1);
    vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value = VL_RAND_RESET_I(3);
    vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__doDispense = VL_RAND_RESET_I(1);
    vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT___value_T_1 = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
