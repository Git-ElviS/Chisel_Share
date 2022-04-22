// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemVecTester.h for the primary calling header

#include "verilated.h"

#include "VMemVecTester__Syms.h"
#include "VMemVecTester___024root.h"

VL_INLINE_OPT void VMemVecTester___024root___sequent__TOP__0(VMemVecTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemVecTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->MemVecTester__DOT__cnt) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U != vlSelf->MemVecTester__DOT__mem_0
                            [0U])))) {
            VL_WRITEF("[%0t] %%Error: MemVecTester.v:43: Assertion failed in %NMemVecTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MemVecTester/2022032915120016912143598868102031/MemVecTester.v", 43, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->MemVecTester__DOT__cnt) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U != vlSelf->MemVecTester__DOT__mem_0
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Mem.scala:17 assert(mem.read(0.U)(0) === 1.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->MemVecTester__DOT__cnt) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MemVecTester/2022032915120016912143598868102031/MemVecTester.v", 65, "");
        }
    }
    vlSelf->MemVecTester__DOT__mem_0[0U] = 1U;
    vlSelf->MemVecTester__DOT__cnt = ((~ (IData)(vlSelf->reset)) 
                                      & (IData)(vlSelf->MemVecTester__DOT___wrap_value_T_1));
    vlSelf->MemVecTester__DOT___wrap_value_T_1 = (1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->MemVecTester__DOT__cnt)));
}
