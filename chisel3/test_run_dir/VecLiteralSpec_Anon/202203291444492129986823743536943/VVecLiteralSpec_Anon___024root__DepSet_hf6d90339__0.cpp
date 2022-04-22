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
                         & (0xaU != (IData)(vlSelf->VecLiteralSpec_Anon__DOT__r_0))))) {
            VL_WRITEF("[%0t] %%Error: VecLiteralSpec_Anon.v:37: Assertion failed in %NVecLiteralSpec_Anon\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/VecLiteralSpec_Anon/202203291444492129986823743536943/VecLiteralSpec_Anon.v", 37, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (0xaU != (IData)(vlSelf->VecLiteralSpec_Anon__DOT__r_0))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at VecLiteralSpec.scala:371 chisel3.assert(r(0) === 0xa.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (0xbU != (IData)(vlSelf->VecLiteralSpec_Anon__DOT__r_1))))) {
            VL_WRITEF("[%0t] %%Error: VecLiteralSpec_Anon.v:59: Assertion failed in %NVecLiteralSpec_Anon\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/VecLiteralSpec_Anon/202203291444492129986823743536943/VecLiteralSpec_Anon.v", 59, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (0xbU != (IData)(vlSelf->VecLiteralSpec_Anon__DOT__r_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at VecLiteralSpec.scala:372 chisel3.assert(r(1) === 0xb.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (0xcU != (IData)(vlSelf->VecLiteralSpec_Anon__DOT__r_2))))) {
            VL_WRITEF("[%0t] %%Error: VecLiteralSpec_Anon.v:81: Assertion failed in %NVecLiteralSpec_Anon\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/VecLiteralSpec_Anon/202203291444492129986823743536943/VecLiteralSpec_Anon.v", 81, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (0xcU != (IData)(vlSelf->VecLiteralSpec_Anon__DOT__r_2))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at VecLiteralSpec.scala:373 chisel3.assert(r(2) === 0xc.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/VecLiteralSpec_Anon/202203291444492129986823743536943/VecLiteralSpec_Anon.v", 103, "");
        }
    }
    if (vlSelf->reset) {
        vlSelf->VecLiteralSpec_Anon__DOT__r_0 = 0xaU;
        vlSelf->VecLiteralSpec_Anon__DOT__r_1 = 0xbU;
        vlSelf->VecLiteralSpec_Anon__DOT__r_2 = 0xcU;
    } else {
        vlSelf->VecLiteralSpec_Anon__DOT__r_0 = (0x7ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->VecLiteralSpec_Anon__DOT___T)));
        vlSelf->VecLiteralSpec_Anon__DOT__r_1 = (0x7ffU 
                                                 & (IData)(
                                                           (0x3fffffULL 
                                                            & ((1ULL 
                                                                + vlSelf->VecLiteralSpec_Anon__DOT___T) 
                                                               >> 0xbU))));
        vlSelf->VecLiteralSpec_Anon__DOT__r_2 = (0x7ffU 
                                                 & (IData)(
                                                           (0x7ffULL 
                                                            & ((1ULL 
                                                                + vlSelf->VecLiteralSpec_Anon__DOT___T) 
                                                               >> 0x16U))));
    }
    vlSelf->VecLiteralSpec_Anon__DOT___T = (((QData)((IData)(vlSelf->VecLiteralSpec_Anon__DOT__r_2)) 
                                             << 0x16U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->VecLiteralSpec_Anon__DOT__r_1) 
                                                                << 0xbU) 
                                                               | (IData)(vlSelf->VecLiteralSpec_Anon__DOT__r_0)))));
}
