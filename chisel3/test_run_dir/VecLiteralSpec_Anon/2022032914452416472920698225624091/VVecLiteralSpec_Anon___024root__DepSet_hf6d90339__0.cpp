// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVecLiteralSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VVecLiteralSpec_Anon__Syms.h"
#include "VVecLiteralSpec_Anon___024root.h"

VL_INLINE_OPT void VVecLiteralSpec_Anon___024root___sequent__TOP__0(VVecLiteralSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVecLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecLiteralSpec_Anon___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (0xaU != (IData)(vlSelf->VecLiteralSpec_Anon__DOT__r))))) {
            VL_WRITEF("[%0t] %%Error: VecLiteralSpec_Anon.v:22: Assertion failed in %NVecLiteralSpec_Anon\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/VecLiteralSpec_Anon/2022032914452416472920698225624091/VecLiteralSpec_Anon.v", 22, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (0xaU != (IData)(vlSelf->VecLiteralSpec_Anon__DOT__r))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at VecLiteralSpec.scala:397 chisel3.assert(r === 0xa.U) // coming out of reset\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/VecLiteralSpec_Anon/2022032914452416472920698225624091/VecLiteralSpec_Anon.v", 45, "");
        }
    }
    vlSelf->VecLiteralSpec_Anon__DOT__r = ((IData)(vlSelf->reset)
                                            ? 0xaU : (IData)(vlSelf->VecLiteralSpec_Anon__DOT___r_T_1));
    vlSelf->VecLiteralSpec_Anon__DOT___r_T_1 = (0x7ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->VecLiteralSpec_Anon__DOT__r)));
}
