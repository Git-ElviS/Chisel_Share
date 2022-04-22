// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VChiselRunners_Anon.h for the primary calling header

#include "verilated.h"

#include "VChiselRunners_Anon__Syms.h"
#include "VChiselRunners_Anon___024root.h"

VL_INLINE_OPT void VChiselRunners_Anon___024root___sequent__TOP__0(VChiselRunners_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChiselRunners_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->ChiselRunners_Anon__DOT__done_value) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xfU != (0xfU & (~ (IData)(vlSelf->ChiselRunners_Anon__DOT__x))))))) {
            VL_WRITEF("[%0t] %%Error: ChiselRunners_Anon.v:30: Assertion failed in %NChiselRunners_Anon\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ChiselRunners_Anon/2022032915194616391652333811143709/ChiselRunners_Anon.v", 30, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->ChiselRunners_Anon__DOT__done_value) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0xfU != (0xfU & (~ (IData)(vlSelf->ChiselRunners_Anon__DOT__x))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at ChiselSpec.scala:82 chisel3.assert(~(x.asUInt) === -1.S(expected.W).asUInt)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->ChiselRunners_Anon__DOT__done_value) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ChiselRunners_Anon/2022032915194616391652333811143709/ChiselRunners_Anon.v", 53, "");
        }
    }
    vlSelf->ChiselRunners_Anon__DOT__x = ((IData)(vlSelf->reset)
                                           ? 3U : 0U);
    vlSelf->ChiselRunners_Anon__DOT__done_value = (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (IData)(vlSelf->ChiselRunners_Anon__DOT___done_wrap_value_T_1));
    vlSelf->ChiselRunners_Anon__DOT___done_wrap_value_T_1 
        = (1U & ((IData)(1U) + (IData)(vlSelf->ChiselRunners_Anon__DOT__done_value)));
}
