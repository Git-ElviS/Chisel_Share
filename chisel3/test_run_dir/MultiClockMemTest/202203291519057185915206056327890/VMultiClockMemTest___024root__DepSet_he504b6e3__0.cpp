// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiClockMemTest.h for the primary calling header

#include "verilated.h"

#include "VMultiClockMemTest__Syms.h"
#include "VMultiClockMemTest___024root.h"

VL_INLINE_OPT void VMultiClockMemTest___024root___sequent__TOP__0(VMultiClockMemTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((0U < (IData)(vlSelf->MultiClockMemTest__DOT__cycle)) 
                           & (9U > (IData)(vlSelf->MultiClockMemTest__DOT__cycle))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x7bU != vlSelf->MultiClockMemTest__DOT__mem
                            [(7U & ((IData)(vlSelf->MultiClockMemTest__DOT__waddr) 
                                    - (IData)(1U)))])))) {
            VL_WRITEF("[%0t] %%Error: MultiClockMemTest.v:75: Assertion failed in %NMultiClockMemTest\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MultiClockMemTest/202203291519057185915206056327890/MultiClockMemTest.v", 75, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((0U < (IData)(vlSelf->MultiClockMemTest__DOT__cycle)) 
                           & (9U > (IData)(vlSelf->MultiClockMemTest__DOT__cycle))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x7bU != vlSelf->MultiClockMemTest__DOT__mem
                            [(7U & ((IData)(vlSelf->MultiClockMemTest__DOT__waddr) 
                                    - (IData)(1U)))])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MultiClockSpec.scala:94 assert(rdata === 123.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((8U < (IData)(vlSelf->MultiClockMemTest__DOT__cycle)) 
                            & (0x11U > (IData)(vlSelf->MultiClockMemTest__DOT__cycle))) 
                           & (0U == (1U & ((IData)(vlSelf->MultiClockMemTest__DOT__waddr) 
                                           - (IData)(1U))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x1c8U != vlSelf->MultiClockMemTest__DOT__mem
                            [(7U & ((IData)(vlSelf->MultiClockMemTest__DOT__waddr) 
                                    - (IData)(1U)))])))) {
            VL_WRITEF("[%0t] %%Error: MultiClockMemTest.v:97: Assertion failed in %NMultiClockMemTest\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MultiClockMemTest/202203291519057185915206056327890/MultiClockMemTest.v", 97, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((8U < (IData)(vlSelf->MultiClockMemTest__DOT__cycle)) 
                            & (0x11U > (IData)(vlSelf->MultiClockMemTest__DOT__cycle))) 
                           & (0U == (1U & ((IData)(vlSelf->MultiClockMemTest__DOT__waddr) 
                                           - (IData)(1U))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x1c8U != vlSelf->MultiClockMemTest__DOT__mem
                            [(7U & ((IData)(vlSelf->MultiClockMemTest__DOT__waddr) 
                                    - (IData)(1U)))])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MultiClockSpec.scala:107 assert(rdata === 456.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((8U < (IData)(vlSelf->MultiClockMemTest__DOT__cycle)) 
                            & (0x11U > (IData)(vlSelf->MultiClockMemTest__DOT__cycle))) 
                           & (0U != (1U & ((IData)(vlSelf->MultiClockMemTest__DOT__waddr) 
                                           - (IData)(1U))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x7bU != vlSelf->MultiClockMemTest__DOT__mem
                            [(7U & ((IData)(vlSelf->MultiClockMemTest__DOT__waddr) 
                                    - (IData)(1U)))])))) {
            VL_WRITEF("[%0t] %%Error: MultiClockMemTest.v:119: Assertion failed in %NMultiClockMemTest\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MultiClockMemTest/202203291519057185915206056327890/MultiClockMemTest.v", 119, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((((8U < (IData)(vlSelf->MultiClockMemTest__DOT__cycle)) 
                            & (0x11U > (IData)(vlSelf->MultiClockMemTest__DOT__cycle))) 
                           & (0U != (1U & ((IData)(vlSelf->MultiClockMemTest__DOT__waddr) 
                                           - (IData)(1U))))) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x7bU != vlSelf->MultiClockMemTest__DOT__mem
                            [(7U & ((IData)(vlSelf->MultiClockMemTest__DOT__waddr) 
                                    - (IData)(1U)))])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at MultiClockSpec.scala:109 assert(rdata === 123.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0x13U == (IData)(vlSelf->MultiClockMemTest__DOT__cycle)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MultiClockMemTest/202203291519057185915206056327890/MultiClockMemTest.v", 141, "");
        }
    }
    vlSelf->MultiClockMemTest__DOT__cDiv = (1U & ((IData)(vlSelf->reset) 
                                                  | (~ (IData)(vlSelf->MultiClockMemTest__DOT__cDiv))));
}
