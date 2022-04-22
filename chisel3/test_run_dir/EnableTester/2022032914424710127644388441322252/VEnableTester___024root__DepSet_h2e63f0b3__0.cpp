// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEnableTester.h for the primary calling header

#include "verilated.h"

#include "VEnableTester__Syms.h"
#include "VEnableTester___024root.h"

VL_INLINE_OPT void VEnableTester___024root___sequent__TOP__0(VEnableTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEnableTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester___024root___sequent__TOP__0\n"); );
    // Init
    IData/*29:0*/ __Vdly__EnableTester__DOT__ens;
    // Body
    __Vdly__EnableTester__DOT__ens = vlSelf->EnableTester__DOT__ens;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((0x20U == (IData)(vlSelf->EnableTester__DOT__done_value)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x10U != (IData)(vlSelf->EnableTester__DOT__cntEnVal))))) {
            VL_WRITEF("[%0t] %%Error: EnableTester.v:40: Assertion failed in %NEnableTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EnableTester/2022032914424710127644388441322252/EnableTester.v", 40, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((0x20U == (IData)(vlSelf->EnableTester__DOT__done_value)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x10U != (IData)(vlSelf->EnableTester__DOT__cntEnVal))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Counter.scala:27 assert(cntEnVal === popCount(seed).asUInt)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x20U == (IData)(vlSelf->EnableTester__DOT__done_value)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/EnableTester/2022032914424710127644388441322252/EnableTester.v", 63, "");
        }
    }
    if (vlSelf->reset) {
        __Vdly__EnableTester__DOT__ens = 0x317467d4U;
        vlSelf->EnableTester__DOT__cntEnVal = 0U;
        vlSelf->EnableTester__DOT__done_value = 0U;
    } else {
        __Vdly__EnableTester__DOT__ens = (0x1fffffffU 
                                          & (vlSelf->EnableTester__DOT__ens 
                                             >> 1U));
        if ((1U & vlSelf->EnableTester__DOT__ens)) {
            vlSelf->EnableTester__DOT__cntEnVal = vlSelf->EnableTester__DOT___cntEnVal_wrap_value_T_1;
        }
        vlSelf->EnableTester__DOT__done_value = ((IData)(vlSelf->EnableTester__DOT__done_wrap_wrap)
                                                  ? 0U
                                                  : (IData)(vlSelf->EnableTester__DOT___done_wrap_value_T_1));
    }
    vlSelf->EnableTester__DOT__ens = __Vdly__EnableTester__DOT__ens;
    vlSelf->EnableTester__DOT___cntEnVal_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->EnableTester__DOT__cntEnVal)));
    vlSelf->EnableTester__DOT__done_wrap_wrap = (0x20U 
                                                 == (IData)(vlSelf->EnableTester__DOT__done_value));
    vlSelf->EnableTester__DOT___done_wrap_value_T_1 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->EnableTester__DOT__done_value)));
}
