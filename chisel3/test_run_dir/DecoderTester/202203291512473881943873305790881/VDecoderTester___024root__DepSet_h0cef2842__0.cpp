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
        if (VL_UNLIKELY((((~ ((((0x3230451U == ((3U 
                                                 == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                 ? 0x9080054U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0x10b8412U
                                                   : 0x3230451U)))) 
                                | (0x1cbb6b0U == ((3U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0x11482254U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0x1cbb6b0U
                                                     : 0x11c33451U))))) 
                               | (0U == ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                          ? 0x8480850U
                                          : ((2U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                              ? 0U : 
                                             ((1U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                               ? 0xcb0c1aU
                                               : 0x2c30c58U))))) 
                              | (0x1c482a04U == ((3U 
                                                  == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                  ? 0x1c482a04U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0xc9be8aU
                                                    : 0x16e13c08U)))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->DecoderTester__DOT__cnt))))) {
            VL_WRITEF("[%0t] %%Error: DecoderTester.v:44: Assertion failed in %NDecoderTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DecoderTester/202203291512473881943873305790881/DecoderTester.v", 44, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ ((((0x3230451U == ((3U 
                                                 == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                 ? 0x9080054U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0x10b8412U
                                                   : 0x3230451U)))) 
                                | (0x1cbb6b0U == ((3U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0x11482254U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0x1cbb6b0U
                                                     : 0x11c33451U))))) 
                               | (0U == ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                          ? 0x8480850U
                                          : ((2U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                              ? 0U : 
                                             ((1U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                               ? 0xcb0c1aU
                                               : 0x2c30c58U))))) 
                              | (0x1c482a04U == ((3U 
                                                  == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                  ? 0x1c482a04U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0xc9be8aU
                                                    : 0x16e13c08U)))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->DecoderTester__DOT__cnt))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Decoder.scala:25 assert(cnt === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ ((((0x3230451U == 
                                      ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                        ? 0x9080054U
                                        : ((2U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                            ? 0U : 
                                           ((1U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                             ? 0x10b8412U
                                             : 0x3230451U)))) 
                                     | (0x1cbb6b0U 
                                        == ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                             ? 0x11482254U
                                             : ((2U 
                                                 == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                  ? 0x1cbb6b0U
                                                  : 0x11c33451U))))) 
                                    | (0U == ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                               ? 0x8480850U
                                               : ((2U 
                                                   == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0xcb0c1aU
                                                    : 0x2c30c58U))))) 
                                   | (0x1c482a04U == 
                                      ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                        ? 0x1c482a04U
                                        : ((2U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                            ? 0U : 
                                           ((1U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                             ? 0xc9be8aU
                                             : 0x16e13c08U)))))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DecoderTester/202203291512473881943873305790881/DecoderTester.v", 66, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlSelf->DecoderTester__DOT__cnt)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DecoderTester/202203291512473881943873305790881/DecoderTester.v", 77, "");
        }
    }
    vlSelf->DecoderTester__DOT__cnt = ((IData)(vlSelf->reset)
                                        ? 0U : (IData)(vlSelf->DecoderTester__DOT___wrap_value_T_1));
    vlSelf->DecoderTester__DOT___wrap_value_T_1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->DecoderTester__DOT__cnt)));
}
