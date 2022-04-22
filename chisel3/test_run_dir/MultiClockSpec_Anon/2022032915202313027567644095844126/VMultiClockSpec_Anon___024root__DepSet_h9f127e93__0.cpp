// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiClockSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VMultiClockSpec_Anon__Syms.h"
#include "VMultiClockSpec_Anon___024root.h"

VL_INLINE_OPT void VMultiClockSpec_Anon___024root___sequent__TOP__0(VMultiClockSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSpec_Anon___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_WRITEF("[%0t] %%Error: MultiClockSpec_Anon.v:22: Assertion failed in %NMultiClockSpec_Anon\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MultiClockSpec_Anon/2022032915202313027567644095844126/MultiClockSpec_Anon.v", 22, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MultiClockSpec.scala:276 chisel3.assert(0.U === 1.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->MultiClockSpec_Anon__DOT__done_value) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MultiClockSpec_Anon/2022032915202313027567644095844126/MultiClockSpec_Anon.v", 44, "");
        }
    }
    vlSelf->MultiClockSpec_Anon__DOT__done_value = 
        ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->MultiClockSpec_Anon__DOT___done_wrap_value_T_1));
    vlSelf->MultiClockSpec_Anon__DOT___done_wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlSelf->MultiClockSpec_Anon__DOT__done_value)));
}
