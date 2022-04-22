// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWhenCondTester.h for the primary calling header

#include "verilated.h"

#include "VWhenCondTester__Syms.h"
#include "VWhenCondTester___024root.h"

VL_INLINE_OPT void VWhenCondTester___024root___sequent__TOP__0(VWhenCondTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWhenCondTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenCondTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((IData)((5U == (7U & (IData)(vlSelf->WhenCondTester__DOT__cycle)))) 
                            != (IData)((5U == (7U & (IData)(vlSelf->WhenCondTester__DOT__cycle)))))))) {
            VL_WRITEF("[%0t] %%Error: WhenCondTester.v:56: Assertion failed in %NWhenCondTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/WhenCondTester/202203291519054909715634199564798/WhenCondTester.v", 56, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((IData)((5U == (7U & (IData)(vlSelf->WhenCondTester__DOT__cycle)))) 
                            != (IData)((5U == (7U & (IData)(vlSelf->WhenCondTester__DOT__cycle)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at When.scala:121 assert(w3 === (a && !b && c))\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((IData)((9U == (IData)(vlSelf->WhenCondTester__DOT__cycle))) 
                            != (IData)((9U == (IData)(vlSelf->WhenCondTester__DOT__cycle))))))) {
            VL_WRITEF("[%0t] %%Error: WhenCondTester.v:78: Assertion failed in %NWhenCondTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/WhenCondTester/202203291519054909715634199564798/WhenCondTester.v", 78, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((IData)((9U == (IData)(vlSelf->WhenCondTester__DOT__cycle))) 
                            != (IData)((9U == (IData)(vlSelf->WhenCondTester__DOT__cycle))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at When.scala:122 assert(w4 === (a && !b && !c && d))\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((IData)((1U == (IData)(vlSelf->WhenCondTester__DOT__cycle))) 
                            != (IData)((1U == (IData)(vlSelf->WhenCondTester__DOT__cycle))))))) {
            VL_WRITEF("[%0t] %%Error: WhenCondTester.v:100: Assertion failed in %NWhenCondTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/WhenCondTester/202203291519054909715634199564798/WhenCondTester.v", 100, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & ((IData)((1U == (IData)(vlSelf->WhenCondTester__DOT__cycle))) 
                            != (IData)((1U == (IData)(vlSelf->WhenCondTester__DOT__cycle))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at When.scala:123 assert(w5 === (a && !b && !c && !d))\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0xfU == (IData)(vlSelf->WhenCondTester__DOT__cycle)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/WhenCondTester/202203291519054909715634199564798/WhenCondTester.v", 144, "");
        }
    }
    vlSelf->WhenCondTester__DOT__cycle = ((IData)(vlSelf->reset)
                                           ? 0U : (IData)(vlSelf->WhenCondTester__DOT___wrap_value_T_1));
    vlSelf->WhenCondTester__DOT___wrap_value_T_1 = 
        (0xfU & ((IData)(1U) + (IData)(vlSelf->WhenCondTester__DOT__cycle)));
}
