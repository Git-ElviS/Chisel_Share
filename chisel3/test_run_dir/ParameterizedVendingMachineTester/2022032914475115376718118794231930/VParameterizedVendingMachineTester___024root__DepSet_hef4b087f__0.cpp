// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VParameterizedVendingMachineTester.h for the primary calling header

#include "verilated.h"

#include "VParameterizedVendingMachineTester__Syms.h"
#include "VParameterizedVendingMachineTester___024root.h"

VL_INLINE_OPT void VParameterizedVendingMachineTester___024root___sequent__TOP__0(VParameterizedVendingMachineTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ ParameterizedVendingMachineTester__DOT___GEN_23;
    CData/*1:0*/ ParameterizedVendingMachineTester__DOT___GEN_44;
    CData/*1:0*/ ParameterizedVendingMachineTester__DOT___GEN_65;
    CData/*1:0*/ ParameterizedVendingMachineTester__DOT___GEN_86;
    CData/*0:0*/ ParameterizedVendingMachineTester__DOT___GEN_133;
    CData/*0:0*/ ParameterizedVendingMachineTester__DOT___GEN_160;
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (IData)(((3U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102)) 
                                       & (~ (IData)(vlSelf->reset))))))) {
            VL_WRITEF("[%0t] %%Error: ParameterizedVendingMachineTester.v:30: Assertion failed in %NParameterizedVendingMachineTester.dut\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ParameterizedVendingMachineTester/2022032914475115376718118794231930/ParameterizedVendingMachineTester.v", 30, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (IData)(((3U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102)) 
                                       & (~ (IData)(vlSelf->reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Only 1 coin can be input in a given cycle!\n    at VendingMachineGenerator.scala:40 assert(io.inputs.filterNot(_ == input).map(!_).reduce(_ && _), \"Only 1 coin can be input in a given cycle!\")\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (IData)(((3U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102)) 
                                       & (~ (IData)(vlSelf->reset))))))) {
            VL_WRITEF("[%0t] %%Error: ParameterizedVendingMachineTester.v:54: Assertion failed in %NParameterizedVendingMachineTester.dut\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ParameterizedVendingMachineTester/2022032914475115376718118794231930/ParameterizedVendingMachineTester.v", 54, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (IData)(((3U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102)) 
                                       & (~ (IData)(vlSelf->reset))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Only 1 coin can be input in a given cycle!\n    at VendingMachineGenerator.scala:40 assert(io.inputs.filterNot(_ == input).map(!_).reduce(_ && _), \"Only 1 coin can be input in a given cycle!\")\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x64U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ParameterizedVendingMachineTester/2022032914475115376718118794231930/ParameterizedVendingMachineTester.v", 339, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x64U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ParameterizedVendingMachineTester/2022032914475115376718118794231930/ParameterizedVendingMachineTester.v", 350, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((4U <= (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value)) 
                            != ((0x63U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                & ((0x62U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                   | ((0x61U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                      & ((0x60U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                         & ((0x5fU 
                                             != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                            & ((0x5eU 
                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                               | ((0x5dU 
                                                   != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                  & ((0x5cU 
                                                      != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                     & ((0x5bU 
                                                         != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                        & ((0x5aU 
                                                            != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                           & ((0x59U 
                                                               != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                              & ((0x58U 
                                                                  == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                 | ((0x57U 
                                                                     != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                    & ((0x56U 
                                                                        != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                       & ((0x55U 
                                                                           != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                          & ((0x54U 
                                                                              != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                             & (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_186))))))))))))))))))))) {
            VL_WRITEF("[%0t] %%Error: ParameterizedVendingMachineTester.v:361: Assertion failed in %NParameterizedVendingMachineTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ParameterizedVendingMachineTester/2022032914475115376718118794231930/ParameterizedVendingMachineTester.v", 361, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((4U <= (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value)) 
                            != ((0x63U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                & ((0x62U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                   | ((0x61U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                      & ((0x60U != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                         & ((0x5fU 
                                             != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                            & ((0x5eU 
                                                == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                               | ((0x5dU 
                                                   != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                  & ((0x5cU 
                                                      != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                     & ((0x5bU 
                                                         != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                        & ((0x5aU 
                                                            != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                           & ((0x59U 
                                                               != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                              & ((0x58U 
                                                                  == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                 | ((0x57U 
                                                                     != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                    & ((0x56U 
                                                                        != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                       & ((0x55U 
                                                                           != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                          & ((0x54U 
                                                                              != (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)) 
                                                                             & (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_186))))))))))))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at VendingMachineGenerator.scala:100 assert(dut.io.dispense === expectedVec(idx))\n");
        }
    }
    if (vlSelf->reset) {
        vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value = 0U;
        vlSelf->ParameterizedVendingMachineTester__DOT__idx = 0U;
    } else {
        vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value 
            = ((IData)(vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__doDispense)
                ? 0U : (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT___value_T_1));
        vlSelf->ParameterizedVendingMachineTester__DOT__idx 
            = ((IData)(vlSelf->ParameterizedVendingMachineTester__DOT__wrap_wrap)
                ? 0U : (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___wrap_value_T_1));
    }
    vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__doDispense 
        = (4U <= (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value));
    vlSelf->ParameterizedVendingMachineTester__DOT__wrap_wrap 
        = (0x64U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx));
    vlSelf->ParameterizedVendingMachineTester__DOT___wrap_value_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx)));
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
