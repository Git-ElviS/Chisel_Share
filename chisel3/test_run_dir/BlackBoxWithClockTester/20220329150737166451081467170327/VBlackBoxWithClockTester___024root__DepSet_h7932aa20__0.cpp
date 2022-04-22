// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlackBoxWithClockTester.h for the primary calling header

#include "verilated.h"

#include "VBlackBoxWithClockTester__Syms.h"
#include "VBlackBoxWithClockTester___024root.h"

VL_INLINE_OPT void VBlackBoxWithClockTester___024root___sequent__TOP__0(VBlackBoxWithClockTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithClockTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((0U < (IData)(vlSelf->BlackBoxWithClockTester__DOT__cycles)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->BlackBoxWithClockTester__DOT__blackBox__DOT__register) 
                            != (IData)(vlSelf->BlackBoxWithClockTester__DOT__model))))) {
            VL_WRITEF("[%0t] %%Error: BlackBoxWithClockTester.v:39: Assertion failed in %NBlackBoxWithClockTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BlackBoxWithClockTester/20220329150737166451081467170327/BlackBoxWithClockTester.v", 39, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((0U < (IData)(vlSelf->BlackBoxWithClockTester__DOT__cycles)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->BlackBoxWithClockTester__DOT__blackBox__DOT__register) 
                            != (IData)(vlSelf->BlackBoxWithClockTester__DOT__model))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at BlackBox.scala:118 assert(blackBox.io.out === model)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0xeU == (IData)(vlSelf->BlackBoxWithClockTester__DOT__cycles)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BlackBoxWithClockTester/20220329150737166451081467170327/BlackBoxWithClockTester.v", 61, "");
        }
    }
    vlSelf->BlackBoxWithClockTester__DOT__blackBox__DOT__register 
        = (1U & (IData)(vlSelf->BlackBoxWithClockTester__DOT__cycles));
    vlSelf->BlackBoxWithClockTester__DOT__model = (1U 
                                                   & (IData)(vlSelf->BlackBoxWithClockTester__DOT__cycles));
    vlSelf->BlackBoxWithClockTester__DOT__cycles = 
        ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->BlackBoxWithClockTester__DOT__wrap_wrap)
                                         ? 0U : (IData)(vlSelf->BlackBoxWithClockTester__DOT___wrap_value_T_1)));
    vlSelf->BlackBoxWithClockTester__DOT__wrap_wrap 
        = (0xeU == (IData)(vlSelf->BlackBoxWithClockTester__DOT__cycles));
    vlSelf->BlackBoxWithClockTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->BlackBoxWithClockTester__DOT__cycles)));
}
