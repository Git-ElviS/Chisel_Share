// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecUIntDynamicIndexTester.h for the primary calling header

#include "verilated.h"

#include "VMixedVecUIntDynamicIndexTester__Syms.h"
#include "VMixedVecUIntDynamicIndexTester___024root.h"

VL_INLINE_OPT void VMixedVecUIntDynamicIndexTester___024root___sequent__TOP__0(VMixedVecUIntDynamicIndexTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecUIntDynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecUIntDynamicIndexTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (((3U == (IData)(vlSelf->MixedVecUIntDynamicIndexTester__DOT__cycle))
                              ? 3U : ((2U == (IData)(vlSelf->MixedVecUIntDynamicIndexTester__DOT__cycle))
                                       ? 2U : ((1U 
                                                == (IData)(vlSelf->MixedVecUIntDynamicIndexTester__DOT__cycle))
                                                ? 1U
                                                : 0U))) 
                            != (IData)(vlSelf->MixedVecUIntDynamicIndexTester__DOT__cycle))))) {
            VL_WRITEF("[%0t] %%Error: MixedVecUIntDynamicIndexTester.v:27: Assertion failed in %NMixedVecUIntDynamicIndexTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MixedVecUIntDynamicIndexTester/2022032914575412541480896072004124/MixedVecUIntDynamicIndexTester.v", 27, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (((3U == (IData)(vlSelf->MixedVecUIntDynamicIndexTester__DOT__cycle))
                              ? 3U : ((2U == (IData)(vlSelf->MixedVecUIntDynamicIndexTester__DOT__cycle))
                                       ? 2U : ((1U 
                                                == (IData)(vlSelf->MixedVecUIntDynamicIndexTester__DOT__cycle))
                                                ? 1U
                                                : 0U))) 
                            != (IData)(vlSelf->MixedVecUIntDynamicIndexTester__DOT__cycle))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MixedVecSpec.scala:88 assert(vecWire(cycle) === cycle)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlSelf->MixedVecUIntDynamicIndexTester__DOT__cycle)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MixedVecUIntDynamicIndexTester/2022032914575412541480896072004124/MixedVecUIntDynamicIndexTester.v", 49, "");
        }
    }
    vlSelf->MixedVecUIntDynamicIndexTester__DOT__cycle 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->MixedVecUIntDynamicIndexTester__DOT___wrap_value_T_1));
    vlSelf->MixedVecUIntDynamicIndexTester__DOT___wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->MixedVecUIntDynamicIndexTester__DOT__cycle)));
}
