// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetTester.h for the primary calling header

#include "verilated.h"

#include "VAsyncResetTester__Syms.h"
#include "VAsyncResetTester___024root.h"

VL_INLINE_OPT void VAsyncResetTester___024root___sequent__TOP__0(VAsyncResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->AsyncResetTester__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (5U != (IData)(vlSelf->AsyncResetTester__DOT__reg_))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetTester.v:45: Assertion failed in %NAsyncResetTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetTester/2022032915082811162868272306759040/AsyncResetTester.v", 45, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((3U == (IData)(vlSelf->AsyncResetTester__DOT__count)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (5U != (IData)(vlSelf->AsyncResetTester__DOT__reg_))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:28 assert(reg === 5.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((5U <= (IData)(vlSelf->AsyncResetTester__DOT__count)) 
                           & (7U > (IData)(vlSelf->AsyncResetTester__DOT__count))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x7bU != (IData)(vlSelf->AsyncResetTester__DOT__reg_))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetTester.v:67: Assertion failed in %NAsyncResetTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetTester/2022032915082811162868272306759040/AsyncResetTester.v", 67, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((5U <= (IData)(vlSelf->AsyncResetTester__DOT__count)) 
                           & (7U > (IData)(vlSelf->AsyncResetTester__DOT__count))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x7bU != (IData)(vlSelf->AsyncResetTester__DOT__reg_))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:31 assert(reg === 123.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ ((5U <= (IData)(vlSelf->AsyncResetTester__DOT__count)) 
                               & (7U > (IData)(vlSelf->AsyncResetTester__DOT__count)))) 
                           & (7U <= (IData)(vlSelf->AsyncResetTester__DOT__count))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (5U != (IData)(vlSelf->AsyncResetTester__DOT__reg_))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetTester.v:89: Assertion failed in %NAsyncResetTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetTester/2022032915082811162868272306759040/AsyncResetTester.v", 89, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ ((5U <= (IData)(vlSelf->AsyncResetTester__DOT__count)) 
                               & (7U > (IData)(vlSelf->AsyncResetTester__DOT__count)))) 
                           & (7U <= (IData)(vlSelf->AsyncResetTester__DOT__count))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (5U != (IData)(vlSelf->AsyncResetTester__DOT__reg_))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:33 assert(reg === 5.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0xfU == (IData)(vlSelf->AsyncResetTester__DOT__count)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetTester/2022032915082811162868272306759040/AsyncResetTester.v", 111, "");
        }
    }
    vlSelf->AsyncResetTester__DOT__cDiv_value = ((IData)(vlSelf->reset)
                                                  ? 0U
                                                  : (IData)(vlSelf->AsyncResetTester__DOT___cDiv_wrap_value_T_1));
    vlSelf->AsyncResetTester__DOT___cDiv_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->AsyncResetTester__DOT__cDiv_value)));
    vlSelf->AsyncResetTester__DOT__slowClk = (3U == (IData)(vlSelf->AsyncResetTester__DOT__cDiv_value));
}
