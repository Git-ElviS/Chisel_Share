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
        if (VL_UNLIKELY((((~ ((((0x26821840U == (0x378f5a55U 
                                                 & vlSelf->DecoderTester__DOT___GEN_5)) 
                                | (0x68022400U == (0x6c422d01U 
                                                   & vlSelf->DecoderTester__DOT___GEN_5))) 
                               | (0x7914801U == (0xf99c9c9U 
                                                 & vlSelf->DecoderTester__DOT___GEN_5))) 
                              | (1U == (1U & vlSelf->DecoderTester__DOT___GEN_5)))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->DecoderTester__DOT__cnt))))) {
            VL_WRITEF("[%0t] %%Error: DecoderTester.v:45: Assertion failed in %NDecoderTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DecoderTester/2022032915123014286477798788841588/DecoderTester.v", 45, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ ((((0x26821840U == (0x378f5a55U 
                                                 & vlSelf->DecoderTester__DOT___GEN_5)) 
                                | (0x68022400U == (0x6c422d01U 
                                                   & vlSelf->DecoderTester__DOT___GEN_5))) 
                               | (0x7914801U == (0xf99c9c9U 
                                                 & vlSelf->DecoderTester__DOT___GEN_5))) 
                              | (1U == (1U & vlSelf->DecoderTester__DOT___GEN_5)))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->DecoderTester__DOT__cnt))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Decoder.scala:25 assert(cnt === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ ((((0x26821840U == 
                                      (0x378f5a55U 
                                       & vlSelf->DecoderTester__DOT___GEN_5)) 
                                     | (0x68022400U 
                                        == (0x6c422d01U 
                                            & vlSelf->DecoderTester__DOT___GEN_5))) 
                                    | (0x7914801U == 
                                       (0xf99c9c9U 
                                        & vlSelf->DecoderTester__DOT___GEN_5))) 
                                   | (1U == (1U & vlSelf->DecoderTester__DOT___GEN_5)))) 
                               & (~ (IData)(vlSelf->reset)))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DecoderTester/2022032915123014286477798788841588/DecoderTester.v", 67, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlSelf->DecoderTester__DOT__cnt)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DecoderTester/2022032915123014286477798788841588/DecoderTester.v", 78, "");
        }
    }
    vlSelf->DecoderTester__DOT__cnt = ((IData)(vlSelf->reset)
                                        ? 0U : (IData)(vlSelf->DecoderTester__DOT___wrap_value_T_1));
    vlSelf->DecoderTester__DOT___wrap_value_T_1 = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->DecoderTester__DOT__cnt)));
    vlSelf->DecoderTester__DOT___GEN_5 = ((3U == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                           ? 1U : (
                                                   (2U 
                                                    == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                    ? 0x17f74813U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->DecoderTester__DOT__cnt))
                                                     ? 0x6b16e6eaU
                                                     : 0x2ef299e8U)));
}
