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
        if (VL_UNLIKELY((((~ ((((0x8a6010U == ((3U 
                                                == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                ? 0x228bf175U
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x20831020U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0x228bf175U
                                                     : 0x8a6010U)))) 
                                | (0x1ca1fa83U == (
                                                   (3U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x1ca1fa83U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0x811000U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                      ? 0x1ca1fa83U
                                                      : 0x8806a00U))))) 
                               | (0xc0000420U == ((3U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0xc630472aU
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0xc0000420U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0xc630472aU
                                                     : 0x40104600U))))) 
                              | (0x1ca1fa83U == ((3U 
                                                  == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                  ? 0x1ca1fa83U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0x811000U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x1ca1fa83U
                                                    : 0x8806a00U)))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->DecoderTester__DOT__cnt))))) {
            VL_WRITEF("[%0t] %%Error: DecoderTester.v:43: Assertion failed in %NDecoderTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DecoderTester/202203291511565670481199673094109/DecoderTester.v", 43, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ ((((0x8a6010U == ((3U 
                                                == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                ? 0x228bf175U
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x20831020U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0x228bf175U
                                                     : 0x8a6010U)))) 
                                | (0x1ca1fa83U == (
                                                   (3U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x1ca1fa83U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0x811000U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                      ? 0x1ca1fa83U
                                                      : 0x8806a00U))))) 
                               | (0xc0000420U == ((3U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0xc630472aU
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0xc0000420U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0xc630472aU
                                                     : 0x40104600U))))) 
                              | (0x1ca1fa83U == ((3U 
                                                  == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                  ? 0x1ca1fa83U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0x811000U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x1ca1fa83U
                                                    : 0x8806a00U)))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->DecoderTester__DOT__cnt))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Decoder.scala:25 assert(cnt === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ ((((0x8a6010U == 
                                      ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                        ? 0x228bf175U
                                        : ((2U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                            ? 0x20831020U
                                            : ((1U 
                                                == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                ? 0x228bf175U
                                                : 0x8a6010U)))) 
                                     | (0x1ca1fa83U 
                                        == ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                             ? 0x1ca1fa83U
                                             : ((2U 
                                                 == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                 ? 0x811000U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                  ? 0x1ca1fa83U
                                                  : 0x8806a00U))))) 
                                    | (0xc0000420U 
                                       == ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                            ? 0xc630472aU
                                            : ((2U 
                                                == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                ? 0xc0000420U
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0xc630472aU
                                                    : 0x40104600U))))) 
                                   | (0x1ca1fa83U == 
                                      ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                        ? 0x1ca1fa83U
                                        : ((2U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                            ? 0x811000U
                                            : ((1U 
                                                == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                ? 0x1ca1fa83U
                                                : 0x8806a00U)))))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DecoderTester/202203291511565670481199673094109/DecoderTester.v", 65, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlSelf->DecoderTester__DOT__cnt)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DecoderTester/202203291511565670481199673094109/DecoderTester.v", 76, "");
        }
    }
    vlSelf->DecoderTester__DOT__cnt = ((IData)(vlSelf->reset)
                                        ? 0U : (IData)(vlSelf->DecoderTester__DOT___wrap_value_T_1));
    vlSelf->DecoderTester__DOT___wrap_value_T_1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->DecoderTester__DOT__cnt)));
}
