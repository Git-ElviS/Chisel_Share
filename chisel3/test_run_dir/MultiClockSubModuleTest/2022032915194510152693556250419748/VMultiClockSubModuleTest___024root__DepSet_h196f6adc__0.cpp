// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiClockSubModuleTest.h for the primary calling header

#include "verilated.h"

#include "VMultiClockSubModuleTest__Syms.h"
#include "VMultiClockSubModuleTest___024root.h"

VL_INLINE_OPT void VMultiClockSubModuleTest___024root___sequent__TOP__0(VMultiClockSubModuleTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((9U == (IData)(vlSelf->MultiClockSubModuleTest__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U != (IData)(vlSelf->MultiClockSubModuleTest__DOT__inst__DOT__cycle))))) {
            VL_WRITEF("[%0t] %%Error: MultiClockSubModuleTest.v:105: Assertion failed in %NMultiClockSubModuleTest\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MultiClockSubModuleTest/2022032915194510152693556250419748/MultiClockSubModuleTest.v", 105, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((9U == (IData)(vlSelf->MultiClockSubModuleTest__DOT__cycle)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (3U != (IData)(vlSelf->MultiClockSubModuleTest__DOT__inst__DOT__cycle))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MultiClockSpec.scala:50 assert(inst.io.out === 3.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((9U == (IData)(vlSelf->MultiClockSubModuleTest__DOT__cycle)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MultiClockSubModuleTest/2022032915194510152693556250419748/MultiClockSubModuleTest.v", 127, "");
        }
    }
    vlSelf->MultiClockSubModuleTest__DOT__cDiv = (1U 
                                                  & ((IData)(vlSelf->reset) 
                                                     | (~ (IData)(vlSelf->MultiClockSubModuleTest__DOT__cDiv))));
}
