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
                         & (0x2aU != (IData)(vlSelf->BundleLiteralSpec_Anon__DOT__r_a))))) {
            VL_WRITEF("[%0t] %%Error: BundleLiteralSpec_Anon.v:29: Assertion failed in %NBundleLiteralSpec_Anon\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BundleLiteralSpec_Anon/202203291516176962527982732571346/BundleLiteralSpec_Anon.v", 29, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (0x2aU != (IData)(vlSelf->BundleLiteralSpec_Anon__DOT__r_a))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at BundleLiteralSpec.scala:213 chisel3.assert(r.a === 42.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ (IData)(vlSelf->BundleLiteralSpec_Anon__DOT__r_b)))))) {
            VL_WRITEF("[%0t] %%Error: BundleLiteralSpec_Anon.v:51: Assertion failed in %NBundleLiteralSpec_Anon\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BundleLiteralSpec_Anon/202203291516176962527982732571346/BundleLiteralSpec_Anon.v", 51, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ (IData)(vlSelf->BundleLiteralSpec_Anon__DOT__r_b)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at BundleLiteralSpec.scala:214 chisel3.assert(r.b === true.B)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ (IData)(vlSelf->BundleLiteralSpec_Anon__DOT__r_c)))))) {
            VL_WRITEF("[%0t] %%Error: BundleLiteralSpec_Anon.v:73: Assertion failed in %NBundleLiteralSpec_Anon\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BundleLiteralSpec_Anon/202203291516176962527982732571346/BundleLiteralSpec_Anon.v", 73, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                               & (~ (IData)(vlSelf->BundleLiteralSpec_Anon__DOT__r_c)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at BundleLiteralSpec.scala:215 chisel3.assert(r.c === MyEnum.sB)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/BundleLiteralSpec_Anon/202203291516176962527982732571346/BundleLiteralSpec_Anon.v", 96, "");
        }
    }
    vlSelf->BundleLiteralSpec_Anon__DOT__r_a = ((IData)(vlSelf->reset)
                                                 ? 0x2aU
                                                 : 
                                                (0xffU 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelf->BundleLiteralSpec_Anon__DOT___r_T_1)) 
                                                    >> 2U)));
    vlSelf->BundleLiteralSpec_Anon__DOT__r_b = (1U 
                                                & ((IData)(vlSelf->reset) 
                                                   | (0x1ffU 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelf->BundleLiteralSpec_Anon__DOT___r_T_1)) 
                                                         >> 1U))));
    vlSelf->BundleLiteralSpec_Anon__DOT__r_c = (1U 
                                                & ((IData)(vlSelf->reset) 
                                                   | ((IData)(1U) 
                                                      + (IData)(vlSelf->BundleLiteralSpec_Anon__DOT___r_T_1))));
    vlSelf->BundleLiteralSpec_Anon__DOT___r_T_1 = (
                                                   ((IData)(vlSelf->BundleLiteralSpec_Anon__DOT__r_a) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->BundleLiteralSpec_Anon__DOT__r_b) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->BundleLiteralSpec_Anon__DOT__r_c)));
}
