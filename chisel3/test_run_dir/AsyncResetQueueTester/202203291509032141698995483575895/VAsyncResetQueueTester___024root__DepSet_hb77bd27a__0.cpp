// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetQueueTester.h for the primary calling header

#include "verilated.h"

#include "VAsyncResetQueueTester___024root.h"

VL_INLINE_OPT void VAsyncResetQueueTester___024root___sequent__TOP__1(VAsyncResetQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->AsyncResetQueueTester__DOT__asyncResetNext) {
        vlSelf->AsyncResetQueueTester__DOT__queue__DOT__maybe_full = 0U;
        vlSelf->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value = 0U;
    } else if ((1U & (~ (IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__full)))) {
        vlSelf->AsyncResetQueueTester__DOT__queue__DOT__maybe_full 
            = (1U & (~ (IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__full)));
        vlSelf->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value 
            = vlSelf->AsyncResetQueueTester__DOT__queue__DOT___value_T_1;
    }
    vlSelf->AsyncResetQueueTester__DOT__queue__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value)));
    vlSelf->AsyncResetQueueTester__DOT__queue__DOT__full 
        = ((0U == (IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value)) 
           & (IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__maybe_full));
}

VL_INLINE_OPT void VAsyncResetQueueTester___024root___sequent__TOP__2(VAsyncResetQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->AsyncResetQueueTester__DOT__asyncResetNext 
        = ((~ (IData)(vlSelf->reset)) & (3U == (IData)(vlSelf->AsyncResetQueueTester__DOT__queue_io_count)));
}

VL_INLINE_OPT void VAsyncResetQueueTester___024root___sequent__TOP__3(VAsyncResetQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->AsyncResetQueueTester__DOT__queue_io_count 
        = ((((IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__maybe_full) 
             & (0U == (IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value)))
             ? 4U : 0U) | (IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value));
}

void VAsyncResetQueueTester___024root___sequent__TOP__0(VAsyncResetQueueTester___024root* vlSelf);

void VAsyncResetQueueTester___024root___eval(VAsyncResetQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VAsyncResetQueueTester___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext))) 
         | ((IData)(vlSelf->AsyncResetQueueTester__DOT__queue_clock) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__AsyncResetQueueTester__DOT__queue_clock))))) {
        VAsyncResetQueueTester___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VAsyncResetQueueTester___024root___sequent__TOP__2(vlSelf);
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext))) 
         | ((IData)(vlSelf->AsyncResetQueueTester__DOT__queue_clock) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__AsyncResetQueueTester__DOT__queue_clock))))) {
        VAsyncResetQueueTester___024root___sequent__TOP__3(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext 
        = vlSelf->__VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext;
    vlSelf->__Vclklast__TOP__AsyncResetQueueTester__DOT__queue_clock 
        = vlSelf->AsyncResetQueueTester__DOT__queue_clock;
    vlSelf->__VinpClk__TOP__AsyncResetQueueTester__DOT__asyncResetNext 
        = vlSelf->AsyncResetQueueTester__DOT__asyncResetNext;
}

QData VAsyncResetQueueTester___024root___change_request_1(VAsyncResetQueueTester___024root* vlSelf);

VL_INLINE_OPT QData VAsyncResetQueueTester___024root___change_request(VAsyncResetQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root___change_request\n"); );
    // Body
    return (VAsyncResetQueueTester___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VAsyncResetQueueTester___024root___change_request_1(VAsyncResetQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->AsyncResetQueueTester__DOT__asyncResetNext ^ vlSelf->__Vchglast__TOP__AsyncResetQueueTester__DOT__asyncResetNext));
    VL_DEBUG_IF( if(__req && ((vlSelf->AsyncResetQueueTester__DOT__asyncResetNext ^ vlSelf->__Vchglast__TOP__AsyncResetQueueTester__DOT__asyncResetNext))) VL_DBG_MSGF("        CHANGE: /Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetQueueTester/202203291509032141698995483575895/AsyncResetQueueTester.v:108: AsyncResetQueueTester.asyncResetNext\n"); );
    // Final
    vlSelf->__Vchglast__TOP__AsyncResetQueueTester__DOT__asyncResetNext 
        = vlSelf->AsyncResetQueueTester__DOT__asyncResetNext;
    return __req;
}

#ifdef VL_DEBUG
void VAsyncResetQueueTester___024root___eval_debug_assertions(VAsyncResetQueueTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
