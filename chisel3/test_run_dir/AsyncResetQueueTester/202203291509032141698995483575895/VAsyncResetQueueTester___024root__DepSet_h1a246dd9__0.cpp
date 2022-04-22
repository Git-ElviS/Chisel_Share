// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetQueueTester.h for the primary calling header

#include "verilated.h"

#include "VAsyncResetQueueTester__Syms.h"
#include "VAsyncResetQueueTester___024root.h"

VL_INLINE_OPT void VAsyncResetQueueTester___024root___sequent__TOP__0(VAsyncResetQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root___sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->AsyncResetQueueTester__DOT__doCheck) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->AsyncResetQueueTester__DOT__queue_io_count))))) {
            VL_WRITEF("[%0t] %%Error: AsyncResetQueueTester.v:146: Assertion failed in %NAsyncResetQueueTester\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetQueueTester/202203291509032141698995483575895/AsyncResetQueueTester.v", 146, "");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY((((IData)(vlSelf->AsyncResetQueueTester__DOT__doCheck) 
                          & (~ (IData)(vlSelf->reset))) 
                         & (0U != (IData)(vlSelf->AsyncResetQueueTester__DOT__queue_io_count))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at AsyncResetSpec.scala:115 assert(queue.io.count === 0.U)\n");
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (VL_UNLIKELY(((0xfU == (IData)(vlSelf->AsyncResetQueueTester__DOT__count)) 
                         & (~ (IData)(vlSelf->reset))))) {
            VL_FINISH_MT("/Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetQueueTester/202203291509032141698995483575895/AsyncResetQueueTester.v", 168, "");
        }
    }
    vlSelf->AsyncResetQueueTester__DOT__cDiv_value 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->AsyncResetQueueTester__DOT___cDiv_wrap_value_T_1));
    vlSelf->AsyncResetQueueTester__DOT__doCheck = (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (3U 
                                                      == (IData)(vlSelf->AsyncResetQueueTester__DOT__queue_io_count)));
    vlSelf->AsyncResetQueueTester__DOT__count = ((IData)(vlSelf->reset)
                                                  ? 0U
                                                  : (IData)(vlSelf->AsyncResetQueueTester__DOT___wrap_value_T_1));
    vlSelf->AsyncResetQueueTester__DOT___cDiv_wrap_value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->AsyncResetQueueTester__DOT__cDiv_value)));
    vlSelf->AsyncResetQueueTester__DOT__queue_clock 
        = (3U == (IData)(vlSelf->AsyncResetQueueTester__DOT__cDiv_value));
    vlSelf->AsyncResetQueueTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->AsyncResetQueueTester__DOT__count)));
}
