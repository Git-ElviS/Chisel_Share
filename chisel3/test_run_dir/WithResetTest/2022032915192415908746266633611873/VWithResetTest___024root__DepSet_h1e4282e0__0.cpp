// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWithResetTest.h for the primary calling header

#include "verilated.h"

#include "VWithResetTest__Syms.h"
#include "VWithResetTest___024root.h"

VL_INLINE_OPT void VWithResetTest___024root___sequent__TOP__0(VWithResetTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWithResetTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWithResetTest___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((7U > (IData)(vlSelf->WithResetTest__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->WithResetTest__DOT__reg_) 
                            != (IData)(vlSelf->WithResetTest__DOT__cycle))))) {
            VL_WRITEF("[%0t] %%Error: WithResetTest.v:38: Assertion failed in %NWithResetTest\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/WithResetTest/2022032915192415908746266633611873/WithResetTest.v", 38, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((7U > (IData)(vlSelf->WithResetTest__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & ((IData)(vlSelf->WithResetTest__DOT__reg_) 
                            != (IData)(vlSelf->WithResetTest__DOT__cycle))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MultiClockSpec.scala:63 assert(reg === cycle)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((7U <= (IData)(vlSelf->WithResetTest__DOT__cycle)) 
                            & (7U != (IData)(vlSelf->WithResetTest__DOT__cycle))) 
                           & (8U == (IData)(vlSelf->WithResetTest__DOT__cycle))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->WithResetTest__DOT__reg_))))) {
            VL_WRITEF("[%0t] %%Error: WithResetTest.v:60: Assertion failed in %NWithResetTest\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/WithResetTest/2022032915192415908746266633611873/WithResetTest.v", 60, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((7U <= (IData)(vlSelf->WithResetTest__DOT__cycle)) 
                            & (7U != (IData)(vlSelf->WithResetTest__DOT__cycle))) 
                           & (8U == (IData)(vlSelf->WithResetTest__DOT__cycle))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->WithResetTest__DOT__reg_))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MultiClockSpec.scala:67 assert(reg === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((9U == (IData)(vlSelf->WithResetTest__DOT__cycle)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/WithResetTest/2022032915192415908746266633611873/WithResetTest.v", 82, "");
        }
    }
    vlSelf->WithResetTest__DOT__reg_ = ((((7U <= (IData)(vlSelf->WithResetTest__DOT__cycle)) 
                                          & (7U == (IData)(vlSelf->WithResetTest__DOT__cycle))) 
                                         | (IData)(vlSelf->reset))
                                         ? 0U : (IData)(vlSelf->WithResetTest__DOT___reg_T_3));
    vlSelf->WithResetTest__DOT___reg_T_3 = (0xffU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->WithResetTest__DOT__reg_)));
    vlSelf->WithResetTest__DOT__cycle = ((IData)(vlSelf->reset)
                                          ? 0U : ((IData)(vlSelf->WithResetTest__DOT__wrap_wrap)
                                                   ? 0U
                                                   : (IData)(vlSelf->WithResetTest__DOT___wrap_value_T_1)));
    vlSelf->WithResetTest__DOT__wrap_wrap = (9U == (IData)(vlSelf->WithResetTest__DOT__cycle));
    vlSelf->WithResetTest__DOT___wrap_value_T_1 = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->WithResetTest__DOT__cycle)));
}
