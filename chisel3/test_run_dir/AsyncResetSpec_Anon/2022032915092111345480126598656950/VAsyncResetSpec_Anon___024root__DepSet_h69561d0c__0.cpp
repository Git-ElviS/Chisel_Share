// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VAsyncResetSpec_Anon__Syms.h"
#include "VAsyncResetSpec_Anon___024root.h"

VL_INLINE_OPT void VAsyncResetSpec_Anon___024root___sequent__TOP__1(VAsyncResetSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon___024root___sequent__TOP__1\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((0U == (IData)(vlSelf->AsyncResetSpec_Anon__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x1bU != (IData)(vlSelf->AsyncResetSpec_Anon__DOT__reg_))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetSpec_Anon.v:26: Assertion failed in %NAsyncResetSpec_Anon\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetSpec_Anon/2022032915092111345480126598656950/AsyncResetSpec_Anon.v", 26, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((0U == (IData)(vlSelf->AsyncResetSpec_Anon__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x1bU != (IData)(vlSelf->AsyncResetSpec_Anon__DOT__reg_))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:203 chisel3.assert(reg === 27.S)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((0U != (IData)(vlSelf->AsyncResetSpec_Anon__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x55U != (IData)(vlSelf->AsyncResetSpec_Anon__DOT__reg_))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetSpec_Anon.v:48: Assertion failed in %NAsyncResetSpec_Anon\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetSpec_Anon/2022032915092111345480126598656950/AsyncResetSpec_Anon.v", 48, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((0U != (IData)(vlSelf->AsyncResetSpec_Anon__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x55U != (IData)(vlSelf->AsyncResetSpec_Anon__DOT__reg_))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:205 chisel3.assert(reg === -43.S)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlSelf->AsyncResetSpec_Anon__DOT__count)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetSpec_Anon/2022032915092111345480126598656950/AsyncResetSpec_Anon.v", 70, "");
        }
    }
    vlSelf->AsyncResetSpec_Anon__DOT__count = ((IData)(vlSelf->reset)
                                                ? 0U
                                                : (IData)(vlSelf->AsyncResetSpec_Anon__DOT___wrap_value_T_1));
    vlSelf->AsyncResetSpec_Anon__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->AsyncResetSpec_Anon__DOT__count)));
}
