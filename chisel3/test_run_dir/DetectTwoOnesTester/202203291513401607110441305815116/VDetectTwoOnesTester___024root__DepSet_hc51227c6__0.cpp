// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDetectTwoOnesTester.h for the primary calling header

#include "verilated.h"

#include "VDetectTwoOnesTester__Syms.h"
#include "VDetectTwoOnesTester___024root.h"

extern const VlUnpacked<CData/*0:0*/, 64> VDetectTwoOnesTester__ConstPool__TABLE_hd2d802f3_0;
extern const VlUnpacked<CData/*1:0*/, 64> VDetectTwoOnesTester__ConstPool__TABLE_h06ba3c5b_0;

VL_INLINE_OPT void VDetectTwoOnesTester___024root___sequent__TOP__0(VDetectTwoOnesTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDetectTwoOnesTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDetectTwoOnesTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0xaU == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DetectTwoOnesTester/202203291513401607110441305815116/DetectTwoOnesTester.v", 118, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((2U == (IData)(vlSelf->DetectTwoOnesTester__DOT__dut__DOT__state)) 
                            != ((9U == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                | ((8U != (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                   & ((7U != (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                      & ((6U == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                         | (5U == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)))))))))) {
            VL_WRITEF("[%0t] %%Error: DetectTwoOnesTester.v:129: Assertion failed in %NDetectTwoOnesTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/DetectTwoOnesTester/202203291513401607110441305815116/DetectTwoOnesTester.v", 129, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((2U == (IData)(vlSelf->DetectTwoOnesTester__DOT__dut__DOT__state)) 
                            != ((9U == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                | ((8U != (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                   & ((7U != (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                      & ((6U == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                         | (5U == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at FSM.scala:60 assert(dut.io.out === expected(cycle))\n");
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->DetectTwoOnesTester__DOT__dut__DOT___GEN_2) 
                     << 4U) | (((IData)(vlSelf->DetectTwoOnesTester__DOT__dut_io_in) 
                                << 3U) | (((IData)(vlSelf->DetectTwoOnesTester__DOT__dut__DOT__state) 
                                           << 1U) | (IData)(vlSelf->reset))));
    if (VDetectTwoOnesTester__ConstPool__TABLE_hd2d802f3_0
        [__Vtableidx1]) {
        vlSelf->DetectTwoOnesTester__DOT__dut__DOT__state 
            = VDetectTwoOnesTester__ConstPool__TABLE_h06ba3c5b_0
            [__Vtableidx1];
    }
    vlSelf->DetectTwoOnesTester__DOT__cycle = ((IData)(vlSelf->reset)
                                                ? 0U
                                                : ((IData)(vlSelf->DetectTwoOnesTester__DOT__wrap_wrap)
                                                    ? 0U
                                                    : (IData)(vlSelf->DetectTwoOnesTester__DOT___wrap_value_T_1)));
    vlSelf->DetectTwoOnesTester__DOT__wrap_wrap = (0xaU 
                                                   == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle));
    vlSelf->DetectTwoOnesTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)));
    vlSelf->DetectTwoOnesTester__DOT__dut_io_in = (
                                                   (9U 
                                                    != (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                                   & ((8U 
                                                       == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                                      | ((7U 
                                                          == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                                         | ((6U 
                                                             != (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                                            & ((5U 
                                                                == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                                               | ((4U 
                                                                   == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                                                  | ((3U 
                                                                      == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                                                     | ((2U 
                                                                         != (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle)) 
                                                                        & (1U 
                                                                           == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle))))))))));
    vlSelf->DetectTwoOnesTester__DOT__dut__DOT___GEN_2 
        = ((IData)(vlSelf->DetectTwoOnesTester__DOT__dut_io_in)
            ? (IData)(vlSelf->DetectTwoOnesTester__DOT__dut__DOT__state)
            : 0U);
}
