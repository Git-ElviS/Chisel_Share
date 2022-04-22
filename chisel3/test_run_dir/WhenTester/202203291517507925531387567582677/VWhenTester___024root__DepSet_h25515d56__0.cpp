// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWhenTester.h for the primary calling header

#include "verilated.h"

#include "VWhenTester__Syms.h"
#include "VWhenTester___024root.h"

VL_INLINE_OPT void VWhenTester___024root___sequent__TOP__0(VWhenTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (((0U == (IData)(vlSelf->WhenTester__DOT__value))
                              ? 1U : ((1U == (IData)(vlSelf->WhenTester__DOT__value))
                                       ? 2U : ((2U 
                                                == (IData)(vlSelf->WhenTester__DOT__value))
                                                ? 3U
                                                : 0U))) 
                            != (3U & ((IData)(1U) + (IData)(vlSelf->WhenTester__DOT__value))))))) {
            VL_WRITEF("[%0t] %%Error: WhenTester.v:28: Assertion failed in %NWhenTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/WhenTester/202203291517507925531387567582677/WhenTester.v", 28, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) 
                         & (((0U == (IData)(vlSelf->WhenTester__DOT__value))
                              ? 1U : ((1U == (IData)(vlSelf->WhenTester__DOT__value))
                                       ? 2U : ((2U 
                                                == (IData)(vlSelf->WhenTester__DOT__value))
                                                ? 3U
                                                : 0U))) 
                            != (3U & ((IData)(1U) + (IData)(vlSelf->WhenTester__DOT__value))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at When.scala:25 assert(out === cnt.value + 1.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((3U == (IData)(vlSelf->WhenTester__DOT__value)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/WhenTester/202203291517507925531387567582677/WhenTester.v", 50, "");
        }
    }
    vlSelf->WhenTester__DOT__value = ((IData)(vlSelf->reset)
                                       ? 0U : (IData)(vlSelf->WhenTester__DOT___value_T_1));
    vlSelf->WhenTester__DOT___value_T_1 = (3U & ((IData)(1U) 
                                                 + (IData)(vlSelf->WhenTester__DOT__value)));
}
