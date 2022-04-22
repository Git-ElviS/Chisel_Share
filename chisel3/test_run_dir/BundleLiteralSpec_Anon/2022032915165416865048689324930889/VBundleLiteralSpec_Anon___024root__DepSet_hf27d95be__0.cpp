// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBundleLiteralSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VBundleLiteralSpec_Anon__Syms.h"
#include "VBundleLiteralSpec_Anon___024root.h"

VL_INLINE_OPT void VBundleLiteralSpec_Anon___024root___sequent__TOP__0(VBundleLiteralSpec_Anon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBundleLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBundleLiteralSpec_Anon___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (0x2aU != (IData)(vlSelf->BundleLiteralSpec_Anon__DOT__r))))) {
            VL_WRITEF("[%0t] %%Error: BundleLiteralSpec_Anon.v:22: Assertion failed in %NBundleLiteralSpec_Anon\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BundleLiteralSpec_Anon/2022032915165416865048689324930889/BundleLiteralSpec_Anon.v", 22, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (0x2aU != (IData)(vlSelf->BundleLiteralSpec_Anon__DOT__r))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at BundleLiteralSpec.scala:237 chisel3.assert(r === 42.U) // coming out of reset\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BundleLiteralSpec_Anon/2022032915165416865048689324930889/BundleLiteralSpec_Anon.v", 45, "");
        }
    }
    vlSelf->BundleLiteralSpec_Anon__DOT__r = ((IData)(vlSelf->reset)
                                               ? 0x2aU
                                               : (IData)(vlSelf->BundleLiteralSpec_Anon__DOT___r_T_1));
    vlSelf->BundleLiteralSpec_Anon__DOT___r_T_1 = (0x3fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->BundleLiteralSpec_Anon__DOT__r)));
}
