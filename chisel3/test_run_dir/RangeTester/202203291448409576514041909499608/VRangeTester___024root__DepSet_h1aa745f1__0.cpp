// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRangeTester.h for the primary calling header

#include "verilated.h"

#include "VRangeTester__Syms.h"
#include "VRangeTester___024root.h"

VL_INLINE_OPT void VRangeTester___024root___sequent__TOP__0(VRangeTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRangeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRangeTester___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__RangeTester__DOT__checkWrap;
    // Body
    __Vdly__RangeTester__DOT__checkWrap = vlSelf->RangeTester__DOT__checkWrap;
    if (vlSelf->reset) {
        __Vdly__RangeTester__DOT__checkWrap = 0U;
    } else if ((1U & (~ (IData)(vlSelf->RangeTester__DOT__checkWrap)))) {
        __Vdly__RangeTester__DOT__checkWrap = vlSelf->RangeTester__DOT___GEN_5;
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RangeTester__DOT__checkWrap) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (8U != (IData)(vlSelf->RangeTester__DOT__cnt))))) {
            VL_WRITEF("[%0t] %%Error: RangeTester.v:33: Assertion failed in %NRangeTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RangeTester/202203291448409576514041909499608/RangeTester.v", 33, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->RangeTester__DOT__checkWrap) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (8U != (IData)(vlSelf->RangeTester__DOT__cnt))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Counter.scala:58 assert(cnt === r.head.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->RangeTester__DOT__checkWrap) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RangeTester/202203291448409576514041909499608/RangeTester.v", 55, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->RangeTester__DOT__checkWrap)) 
                           & (0x23U == (IData)(vlSelf->RangeTester__DOT__cnt))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x23U != (IData)(vlSelf->RangeTester__DOT__cnt))))) {
            VL_WRITEF("[%0t] %%Error: RangeTester.v:66: Assertion failed in %NRangeTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/RangeTester/202203291448409576514041909499608/RangeTester.v", 66, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->RangeTester__DOT__checkWrap)) 
                           & (0x23U == (IData)(vlSelf->RangeTester__DOT__cnt))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x23U != (IData)(vlSelf->RangeTester__DOT__cnt))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Counter.scala:61 assert(cnt === r.last.U)\n");
        }
    }
    vlSelf->RangeTester__DOT__checkWrap = __Vdly__RangeTester__DOT__checkWrap;
    vlSelf->RangeTester__DOT__cnt = ((IData)(vlSelf->reset)
                                      ? 8U : ((IData)(vlSelf->RangeTester__DOT__wrap_wrap)
                                               ? 8U
                                               : (IData)(vlSelf->RangeTester__DOT___wrap_value_T_1)));
    vlSelf->RangeTester__DOT__wrap_wrap = (0x23U == (IData)(vlSelf->RangeTester__DOT__cnt));
    vlSelf->RangeTester__DOT___wrap_value_T_1 = (0x3fU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->RangeTester__DOT__cnt)));
    vlSelf->RangeTester__DOT___GEN_5 = ((0x23U == (IData)(vlSelf->RangeTester__DOT__cnt)) 
                                        | (IData)(vlSelf->RangeTester__DOT__checkWrap));
}
