// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemBundleTester.h for the primary calling header

#include "verilated.h"

#include "VMemBundleTester__Syms.h"
#include "VMemBundleTester___024root.h"

VL_INLINE_OPT void VMemBundleTester___024root___sequent__TOP__0(VMemBundleTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMemBundleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemBundleTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->MemBundleTester__DOT__cnt) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U != vlSelf->MemBundleTester__DOT__mem_foo
                            [0U])))) {
            VL_WRITEF("[%0t] %%Error: MemBundleTester.v:43: Assertion failed in %NMemBundleTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MemBundleTester/202203291512494506867408471425590/MemBundleTester.v", 43, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->MemBundleTester__DOT__cnt) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (1U != vlSelf->MemBundleTester__DOT__mem_foo
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Mem.scala:139 assert(mem.read(0.U).foo === 1.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->MemBundleTester__DOT__cnt) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MemBundleTester/202203291512494506867408471425590/MemBundleTester.v", 65, "");
        }
    }
    vlSelf->MemBundleTester__DOT__mem_foo[0U] = 1U;
    vlSelf->MemBundleTester__DOT__cnt = ((~ (IData)(vlSelf->reset)) 
                                         & (IData)(vlSelf->MemBundleTester__DOT___wrap_value_T_1));
    vlSelf->MemBundleTester__DOT___wrap_value_T_1 = 
        (1U & ((IData)(1U) + (IData)(vlSelf->MemBundleTester__DOT__cnt)));
}
