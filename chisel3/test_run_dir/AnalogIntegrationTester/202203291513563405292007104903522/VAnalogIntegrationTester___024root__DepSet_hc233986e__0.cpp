// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAnalogIntegrationTester.h for the primary calling header

#include "verilated.h"

#include "VAnalogIntegrationTester__Syms.h"
#include "VAnalogIntegrationTester___024root.h"

VL_INLINE_OPT void VAnalogIntegrationTester___024root___sequent__TOP__0(VAnalogIntegrationTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogIntegrationTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogIntegrationTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"@%1#: BlackBox #0: AnalogBlackBoxPort(in -> Valid(valid -> %1#, bits ->          2), out -> %10#)\n",
                       2,vlSelf->AnalogIntegrationTester__DOT__cycle,
                       1,(0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle)),
                       32,((((((((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                  ? 2U : 0U) & ((0U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                               & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 0xffffffffU : 0U)) 
                              & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                  ? 0xffffffffU : 0U)) 
                             & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                 ? 0xffffffffU : 0U)) 
                            | (((((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 3U : 0U) & ((1U 
                                                  == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                  ? 0xffffffffU
                                                  : 0U)) 
                                & ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 0xffffffffU : 0U)) 
                               & ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 0xffffffffU : 0U))) 
                           | (((((((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 4U : 0U) & ((2U 
                                                   == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                 & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U)) 
                                & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 0xffffffffU : 0U)) 
                               | (((((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 5U : 0U) & 
                                    ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((3U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                                  & ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U))) & (((2U 
                                                   == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                   ? 0xffffffffU
                                                   : 0U) 
                                                 | ((3U 
                                                     == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                     ? 0xffffffffU
                                                     : 0U)))));
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (((((((((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 2U : 0U) & ((0U 
                                                   == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                 & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U)) 
                                & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 0xffffffffU : 0U)) 
                               & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 0xffffffffU : 0U)) 
                              | (((((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 3U : 0U) & (
                                                   (1U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 0xffffffffU
                                                    : 0U)) 
                                  & ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((1U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U))) 
                             | (((((((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 4U : 0U) & 
                                    ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((2U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                                  & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) | ((((
                                                   (3U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 5U
                                                    : 0U) 
                                                  & ((3U 
                                                      == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                      ? 0xffffffffU
                                                      : 0U)) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                     ? 0xffffffffU
                                                     : 0U)) 
                                                & ((3U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 0xffffffffU
                                                    : 0U))) 
                                & (((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U) 
                                   | ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 0xffffffffU
                                       : 0U)))) != 
                            ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                              ? 5U : ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 4U : ((1U 
                                                == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                ? 3U
                                                : 2U))))))) {
            VL_WRITEF("[%0t] %%Error: AnalogIntegrationTester.v:234: Assertion failed in %NAnalogIntegrationTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AnalogIntegrationTester/202203291513563405292007104903522/AnalogIntegrationTester.v", 234, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (((((((((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 2U : 0U) & ((0U 
                                                   == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                 & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U)) 
                                & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 0xffffffffU : 0U)) 
                               & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 0xffffffffU : 0U)) 
                              | (((((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 3U : 0U) & (
                                                   (1U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 0xffffffffU
                                                    : 0U)) 
                                  & ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((1U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U))) 
                             | (((((((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 4U : 0U) & 
                                    ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((2U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                                  & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) | ((((
                                                   (3U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 5U
                                                    : 0U) 
                                                  & ((3U 
                                                      == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                      ? 0xffffffffU
                                                      : 0U)) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                     ? 0xffffffffU
                                                     : 0U)) 
                                                & ((3U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 0xffffffffU
                                                    : 0U))) 
                                & (((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U) 
                                   | ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 0xffffffffU
                                       : 0U)))) != 
                            ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                              ? 5U : ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 4U : ((1U 
                                                == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                ? 3U
                                                : 2U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AnalogIntegrationSpec.scala:122 assert(dut.out === expectedValue)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"@%1#: BlackBox #1: AnalogBlackBoxPort(in -> Valid(valid -> %1#, bits ->          2), out -> %10#)\n",
                       2,vlSelf->AnalogIntegrationTester__DOT__cycle,
                       1,(1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle)),
                       32,((((((((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                  ? 2U : 0U) & ((0U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                               & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 0xffffffffU : 0U)) 
                              & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                  ? 0xffffffffU : 0U)) 
                             & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                 ? 0xffffffffU : 0U)) 
                            | (((((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 3U : 0U) & ((1U 
                                                  == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                  ? 0xffffffffU
                                                  : 0U)) 
                                & ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 0xffffffffU : 0U)) 
                               & ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 0xffffffffU : 0U))) 
                           | (((((((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 4U : 0U) & ((2U 
                                                   == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                 & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U)) 
                                & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 0xffffffffU : 0U)) 
                               | (((((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 5U : 0U) & 
                                    ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((3U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                                  & ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U))) & (((2U 
                                                   == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                   ? 0xffffffffU
                                                   : 0U) 
                                                 | ((3U 
                                                     == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                     ? 0xffffffffU
                                                     : 0U)))));
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (((((((((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 2U : 0U) & ((0U 
                                                   == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                 & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U)) 
                                & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 0xffffffffU : 0U)) 
                               & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 0xffffffffU : 0U)) 
                              | (((((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 3U : 0U) & (
                                                   (1U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 0xffffffffU
                                                    : 0U)) 
                                  & ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((1U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U))) 
                             | (((((((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 4U : 0U) & 
                                    ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((2U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                                  & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) | ((((
                                                   (3U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 5U
                                                    : 0U) 
                                                  & ((3U 
                                                      == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                      ? 0xffffffffU
                                                      : 0U)) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                     ? 0xffffffffU
                                                     : 0U)) 
                                                & ((3U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 0xffffffffU
                                                    : 0U))) 
                                & (((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U) 
                                   | ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 0xffffffffU
                                       : 0U)))) != 
                            ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                              ? 5U : ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 4U : ((1U 
                                                == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                ? 3U
                                                : 2U))))))) {
            VL_WRITEF("[%0t] %%Error: AnalogIntegrationTester.v:269: Assertion failed in %NAnalogIntegrationTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AnalogIntegrationTester/202203291513563405292007104903522/AnalogIntegrationTester.v", 269, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (((((((((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 2U : 0U) & ((0U 
                                                   == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                 & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U)) 
                                & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 0xffffffffU : 0U)) 
                               & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 0xffffffffU : 0U)) 
                              | (((((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 3U : 0U) & (
                                                   (1U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 0xffffffffU
                                                    : 0U)) 
                                  & ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((1U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U))) 
                             | (((((((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 4U : 0U) & 
                                    ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((2U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                                  & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) | ((((
                                                   (3U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 5U
                                                    : 0U) 
                                                  & ((3U 
                                                      == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                      ? 0xffffffffU
                                                      : 0U)) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                     ? 0xffffffffU
                                                     : 0U)) 
                                                & ((3U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 0xffffffffU
                                                    : 0U))) 
                                & (((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U) 
                                   | ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 0xffffffffU
                                       : 0U)))) != 
                            ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                              ? 5U : ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 4U : ((1U 
                                                == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                ? 3U
                                                : 2U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AnalogIntegrationSpec.scala:122 assert(dut.out === expectedValue)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"@%1#: BlackBox #2: AnalogBlackBoxPort(in -> Valid(valid -> %1#, bits ->          2), out -> %10#)\n",
                       2,vlSelf->AnalogIntegrationTester__DOT__cycle,
                       1,(2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle)),
                       32,((((((((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                  ? 2U : 0U) & ((0U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                               & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 0xffffffffU : 0U)) 
                              & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                  ? 0xffffffffU : 0U)) 
                             & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                 ? 0xffffffffU : 0U)) 
                            | (((((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 3U : 0U) & ((1U 
                                                  == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                  ? 0xffffffffU
                                                  : 0U)) 
                                & ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 0xffffffffU : 0U)) 
                               & ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 0xffffffffU : 0U))) 
                           | (((((((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 4U : 0U) & ((2U 
                                                   == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                 & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U)) 
                                & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 0xffffffffU : 0U)) 
                               | (((((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 5U : 0U) & 
                                    ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((3U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                                  & ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U))) & (((2U 
                                                   == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                   ? 0xffffffffU
                                                   : 0U) 
                                                 | ((3U 
                                                     == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                     ? 0xffffffffU
                                                     : 0U)))));
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (((((((((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 2U : 0U) & ((0U 
                                                   == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                 & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U)) 
                                & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 0xffffffffU : 0U)) 
                               & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 0xffffffffU : 0U)) 
                              | (((((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 3U : 0U) & (
                                                   (1U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 0xffffffffU
                                                    : 0U)) 
                                  & ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((1U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U))) 
                             | (((((((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 4U : 0U) & 
                                    ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((2U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                                  & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) | ((((
                                                   (3U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 5U
                                                    : 0U) 
                                                  & ((3U 
                                                      == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                      ? 0xffffffffU
                                                      : 0U)) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                     ? 0xffffffffU
                                                     : 0U)) 
                                                & ((3U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 0xffffffffU
                                                    : 0U))) 
                                & (((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U) 
                                   | ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 0xffffffffU
                                       : 0U)))) != 
                            ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                              ? 5U : ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 4U : ((1U 
                                                == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                ? 3U
                                                : 2U))))))) {
            VL_WRITEF("[%0t] %%Error: AnalogIntegrationTester.v:304: Assertion failed in %NAnalogIntegrationTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AnalogIntegrationTester/202203291513563405292007104903522/AnalogIntegrationTester.v", 304, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (((((((((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 2U : 0U) & ((0U 
                                                   == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                 & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U)) 
                                & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 0xffffffffU : 0U)) 
                               & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 0xffffffffU : 0U)) 
                              | (((((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 3U : 0U) & (
                                                   (1U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 0xffffffffU
                                                    : 0U)) 
                                  & ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((1U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U))) 
                             | (((((((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 4U : 0U) & 
                                    ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((2U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                                  & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) | ((((
                                                   (3U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 5U
                                                    : 0U) 
                                                  & ((3U 
                                                      == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                      ? 0xffffffffU
                                                      : 0U)) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                     ? 0xffffffffU
                                                     : 0U)) 
                                                & ((3U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 0xffffffffU
                                                    : 0U))) 
                                & (((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U) 
                                   | ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 0xffffffffU
                                       : 0U)))) != 
                            ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                              ? 5U : ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 4U : ((1U 
                                                == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                ? 3U
                                                : 2U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AnalogIntegrationSpec.scala:122 assert(dut.out === expectedValue)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"@%1#: BlackBox #3: AnalogBlackBoxPort(in -> Valid(valid -> %1#, bits ->          2), out -> %10#)\n",
                       2,vlSelf->AnalogIntegrationTester__DOT__cycle,
                       1,(3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle)),
                       32,((((((((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                  ? 2U : 0U) & ((0U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                               & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 0xffffffffU : 0U)) 
                              & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                  ? 0xffffffffU : 0U)) 
                             & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                 ? 0xffffffffU : 0U)) 
                            | (((((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 3U : 0U) & ((1U 
                                                  == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                  ? 0xffffffffU
                                                  : 0U)) 
                                & ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 0xffffffffU : 0U)) 
                               & ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 0xffffffffU : 0U))) 
                           | (((((((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 4U : 0U) & ((2U 
                                                   == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                 & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U)) 
                                & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 0xffffffffU : 0U)) 
                               | (((((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 5U : 0U) & 
                                    ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((3U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                                  & ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U))) & (((2U 
                                                   == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                   ? 0xffffffffU
                                                   : 0U) 
                                                 | ((3U 
                                                     == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                     ? 0xffffffffU
                                                     : 0U)))));
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (((((((((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 2U : 0U) & ((0U 
                                                   == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                 & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U)) 
                                & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 0xffffffffU : 0U)) 
                               & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 0xffffffffU : 0U)) 
                              | (((((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 3U : 0U) & (
                                                   (1U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 0xffffffffU
                                                    : 0U)) 
                                  & ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((1U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U))) 
                             | (((((((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 4U : 0U) & 
                                    ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((2U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                                  & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) | ((((
                                                   (3U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 5U
                                                    : 0U) 
                                                  & ((3U 
                                                      == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                      ? 0xffffffffU
                                                      : 0U)) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                     ? 0xffffffffU
                                                     : 0U)) 
                                                & ((3U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 0xffffffffU
                                                    : 0U))) 
                                & (((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U) 
                                   | ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 0xffffffffU
                                       : 0U)))) != 
                            ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                              ? 5U : ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 4U : ((1U 
                                                == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                ? 3U
                                                : 2U))))))) {
            VL_WRITEF("[%0t] %%Error: AnalogIntegrationTester.v:339: Assertion failed in %NAnalogIntegrationTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AnalogIntegrationTester/202203291513563405292007104903522/AnalogIntegrationTester.v", 339, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (((((((((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 2U : 0U) & ((0U 
                                                   == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                 & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U)) 
                                & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                    ? 0xffffffffU : 0U)) 
                               & ((0U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                   ? 0xffffffffU : 0U)) 
                              | (((((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 3U : 0U) & (
                                                   (1U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 0xffffffffU
                                                    : 0U)) 
                                  & ((1U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((1U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U))) 
                             | (((((((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 4U : 0U) & 
                                    ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) & ((2U 
                                                 == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                 ? 0xffffffffU
                                                 : 0U)) 
                                  & ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                      ? 0xffffffffU
                                      : 0U)) | ((((
                                                   (3U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 5U
                                                    : 0U) 
                                                  & ((3U 
                                                      == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                      ? 0xffffffffU
                                                      : 0U)) 
                                                 & ((3U 
                                                     == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                     ? 0xffffffffU
                                                     : 0U)) 
                                                & ((3U 
                                                    == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                    ? 0xffffffffU
                                                    : 0U))) 
                                & (((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                     ? 0xffffffffU : 0U) 
                                   | ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 0xffffffffU
                                       : 0U)))) != 
                            ((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                              ? 5U : ((2U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                       ? 4U : ((1U 
                                                == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle))
                                                ? 3U
                                                : 2U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AnalogIntegrationSpec.scala:122 assert(dut.out === expectedValue)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AnalogIntegrationTester/202203291513563405292007104903522/AnalogIntegrationTester.v", 362, "");
        }
    }
    vlSelf->AnalogIntegrationTester__DOT__cycle = ((IData)(vlSelf->reset)
                                                    ? 0U
                                                    : (IData)(vlSelf->AnalogIntegrationTester__DOT___wrap_value_T_1));
    vlSelf->AnalogIntegrationTester__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->AnalogIntegrationTester__DOT__cycle)));
}
