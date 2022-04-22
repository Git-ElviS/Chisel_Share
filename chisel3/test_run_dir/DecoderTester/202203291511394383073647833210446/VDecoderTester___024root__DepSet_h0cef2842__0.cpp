// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecoderTester.h for the primary calling header

#include "verilated.h"

#include "VDecoderTester__Syms.h"
#include "VDecoderTester___024root.h"

VL_INLINE_OPT void VDecoderTester___024root___sequent__TOP__0(VDecoderTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDecoderTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecoderTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ ((((0x40520190U == ((3U 
                                                  == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                  ? 0x520050U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0x40400240U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x400348U
                                                    : 0x40520190U)))) 
                                | (0x91044a69U == (
                                                   (3U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x11820871U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0x34044244U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                      ? 0x91044a69U
                                                      : 0x250208b4U))))) 
                               | (0x3064c200U == ((3U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0x10638c20U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x3064c200U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0x10655e20U
                                                     : 0x20439ca0U))))) 
                              | (0x1271ac70U == ((3U 
                                                  == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                  ? 0x1271ac70U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0x1464a240U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x12652e68U
                                                    : 0x4518cb0U)))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->DecoderTester__DOT__cnt))))) {
            VL_WRITEF("[%0t] %%Error: DecoderTester.v:44: Assertion failed in %NDecoderTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DecoderTester/202203291511394383073647833210446/DecoderTester.v", 44, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ ((((0x40520190U == ((3U 
                                                  == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                  ? 0x520050U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0x40400240U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x400348U
                                                    : 0x40520190U)))) 
                                | (0x91044a69U == (
                                                   (3U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x11820871U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0x34044244U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                      ? 0x91044a69U
                                                      : 0x250208b4U))))) 
                               | (0x3064c200U == ((3U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0x10638c20U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x3064c200U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0x10655e20U
                                                     : 0x20439ca0U))))) 
                              | (0x1271ac70U == ((3U 
                                                  == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                  ? 0x1271ac70U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0x1464a240U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x12652e68U
                                                    : 0x4518cb0U)))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->DecoderTester__DOT__cnt))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Decoder.scala:25 assert(cnt === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ ((((0x40520190U == 
                                      ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                        ? 0x520050U
                                        : ((2U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                            ? 0x40400240U
                                            : ((1U 
                                                == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                ? 0x400348U
                                                : 0x40520190U)))) 
                                     | (0x91044a69U 
                                        == ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                             ? 0x11820871U
                                             : ((2U 
                                                 == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                 ? 0x34044244U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                  ? 0x91044a69U
                                                  : 0x250208b4U))))) 
                                    | (0x3064c200U 
                                       == ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                            ? 0x10638c20U
                                            : ((2U 
                                                == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                ? 0x3064c200U
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x10655e20U
                                                    : 0x20439ca0U))))) 
                                   | (0x1271ac70U == 
                                      ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                        ? 0x1271ac70U
                                        : ((2U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                            ? 0x1464a240U
                                            : ((1U 
                                                == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                ? 0x12652e68U
                                                : 0x4518cb0U)))))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DecoderTester/202203291511394383073647833210446/DecoderTester.v", 66, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlSelf->DecoderTester__DOT__cnt)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DecoderTester/202203291511394383073647833210446/DecoderTester.v", 77, "");
        }
    }
    vlSelf->DecoderTester__DOT__cnt = ((IData)(vlSelf->reset)
                                        ? 0U : (IData)(vlSelf->DecoderTester__DOT___wrap_value_T_1));
    vlSelf->DecoderTester__DOT___wrap_value_T_1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->DecoderTester__DOT__cnt)));
}
