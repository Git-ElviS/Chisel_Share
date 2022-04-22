// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGCDTester.h for the primary calling header

#include "verilated.h"

#include "VGCDTester__Syms.h"
#include "VGCDTester___024root.h"

VL_INLINE_OPT void VGCDTester___024root___sequent__TOP__0(VGCDTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGCDTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester___024root___sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__GCDTester__DOT__dut__DOT__x;
    IData/*31:0*/ __Vdly__GCDTester__DOT__dut__DOT__y;
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->GCDTester__DOT__first)) 
                           & (0U == vlSelf->GCDTester__DOT__dut__DOT__y)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x10U != vlSelf->GCDTester__DOT__dut__DOT__x)))) {
            VL_WRITEF("[%0t] %%Error: GCDTester.v:107: Assertion failed in %NGCDTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/GCDTester/2022032914461812824170027000215932/GCDTester.v", 107, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelf->GCDTester__DOT__first)) 
                           & (0U == vlSelf->GCDTester__DOT__dut__DOT__y)) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0x10U != vlSelf->GCDTester__DOT__dut__DOT__x)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at GCD.scala:33 assert(dut.io.z === z.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((~ (IData)(vlSelf->GCDTester__DOT__first)) 
                          & (0U == vlSelf->GCDTester__DOT__dut__DOT__y)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/GCDTester/2022032914461812824170027000215932/GCDTester.v", 129, "");
        }
    }
    __Vdly__GCDTester__DOT__dut__DOT__y = vlSelf->GCDTester__DOT__dut__DOT__y;
    __Vdly__GCDTester__DOT__dut__DOT__x = vlSelf->GCDTester__DOT__dut__DOT__x;
    if (vlSelf->GCDTester__DOT__first) {
        __Vdly__GCDTester__DOT__dut__DOT__x = 0x40U;
        __Vdly__GCDTester__DOT__dut__DOT__y = 0x30U;
    } else {
        if ((vlSelf->GCDTester__DOT__dut__DOT__x > vlSelf->GCDTester__DOT__dut__DOT__y)) {
            __Vdly__GCDTester__DOT__dut__DOT__x = vlSelf->GCDTester__DOT__dut__DOT___x_T_1;
        }
        if ((vlSelf->GCDTester__DOT__dut__DOT__x <= vlSelf->GCDTester__DOT__dut__DOT__y)) {
            __Vdly__GCDTester__DOT__dut__DOT__y = vlSelf->GCDTester__DOT__dut__DOT___y_T_1;
        }
    }
    vlSelf->GCDTester__DOT__dut__DOT__x = __Vdly__GCDTester__DOT__dut__DOT__x;
    vlSelf->GCDTester__DOT__dut__DOT__y = __Vdly__GCDTester__DOT__dut__DOT__y;
    vlSelf->GCDTester__DOT__dut__DOT___x_T_1 = (vlSelf->GCDTester__DOT__dut__DOT__x 
                                                - vlSelf->GCDTester__DOT__dut__DOT__y);
    vlSelf->GCDTester__DOT__dut__DOT___y_T_1 = (vlSelf->GCDTester__DOT__dut__DOT__y 
                                                - vlSelf->GCDTester__DOT__dut__DOT__x);
    vlSelf->GCDTester__DOT__first = ((IData)(vlSelf->reset) 
                                     | (IData)(vlSelf->GCDTester__DOT___GEN_0));
    vlSelf->GCDTester__DOT___GEN_0 = 0U;
}
