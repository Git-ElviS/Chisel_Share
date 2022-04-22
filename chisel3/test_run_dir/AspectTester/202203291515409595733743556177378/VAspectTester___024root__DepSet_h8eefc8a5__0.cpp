// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAspectTester.h for the primary calling header

#include "verilated.h"

#include "VAspectTester__Syms.h"
#include "VAspectTester___024root.h"

VL_INLINE_OPT void VAspectTester___024root___sequent__TOP__0(VAspectTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAspectTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAspectTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((3U <= (IData)(vlSelf->AspectTester__DOT__counter)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AspectTester/202203291515409595733743556177378/AspectTester.v", 24, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (3U > (IData)(vlSelf->AspectTester__DOT__counter))))) {
            VL_WRITEF("[%0t] %%Error: AspectTester.v:35: Assertion failed in %NAspectTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AspectTester/202203291515409595733743556177378/AspectTester.v", 35, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (3U > (IData)(vlSelf->AspectTester__DOT__counter))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at InjectionSpec.scala:60 assert(counter === values(counter))\n");
        }
    }
    vlSelf->AspectTester__DOT__counter = ((IData)(vlSelf->reset)
                                           ? 0U : (IData)(vlSelf->AspectTester__DOT___counter_T_1));
    vlSelf->AspectTester__DOT___counter_T_1 = (7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->AspectTester__DOT__counter)));
}
