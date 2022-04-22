// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VResetTester.h for the primary calling header

#include "verilated.h"

#include "VResetTester__Syms.h"
#include "VResetTester___024root.h"

VL_INLINE_OPT void VResetTester___024root___sequent__TOP__0(VResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->ResetTester__DOT__wasReset) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->ResetTester__DOT__value))))) {
            VL_WRITEF("[%0t] %%Error: ResetTester.v:28: Assertion failed in %NResetTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ResetTester/202203291445065994154335532313249/ResetTester.v", 28, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->ResetTester__DOT__wasReset) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->ResetTester__DOT__value))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Counter.scala:40 assert(value === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->ResetTester__DOT__wasReset) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ResetTester/202203291445065994154335532313249/ResetTester.v", 50, "");
        }
    }
    vlSelf->ResetTester__DOT__wasReset = (1U == (IData)(vlSelf->ResetTester__DOT__value));
    vlSelf->ResetTester__DOT__value = ((IData)(vlSelf->reset)
                                        ? 0U : ((IData)(vlSelf->ResetTester__DOT__triggerReset)
                                                 ? 0U
                                                 : (IData)(vlSelf->ResetTester__DOT___value_wrap_value_T_1)));
    vlSelf->ResetTester__DOT___value_wrap_value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->ResetTester__DOT__value)));
    vlSelf->ResetTester__DOT__triggerReset = (1U == (IData)(vlSelf->ResetTester__DOT__value));
}
