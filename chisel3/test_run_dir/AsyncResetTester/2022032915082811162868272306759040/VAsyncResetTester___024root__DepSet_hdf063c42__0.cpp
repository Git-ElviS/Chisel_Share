// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetTester.h for the primary calling header

#include "verilated.h"

#include "VAsyncResetTester___024root.h"

VL_INLINE_OPT void VAsyncResetTester___024root___sequent__TOP__1(VAsyncResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->AsyncResetTester__DOT__reg_ = ((IData)(vlSelf->AsyncResetTester__DOT__asyncResetNext)
                                            ? 0x7bU
                                            : 5U);
}

VL_INLINE_OPT void VAsyncResetTester___024root___sequent__TOP__2(VAsyncResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->AsyncResetTester__DOT__asyncResetNext = 
        ((~ (IData)(vlSelf->reset)) & (4U == (IData)(vlSelf->AsyncResetTester__DOT__count)));
    vlSelf->AsyncResetTester__DOT__count = ((IData)(vlSelf->reset)
                                             ? 0U : (IData)(vlSelf->AsyncResetTester__DOT___wrap_value_T_1));
    vlSelf->AsyncResetTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->AsyncResetTester__DOT__count)));
}

void VAsyncResetTester___024root___sequent__TOP__0(VAsyncResetTester___024root* vlSelf);

void VAsyncResetTester___024root___eval(VAsyncResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VAsyncResetTester___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext))) 
         | ((IData)(vlSelf->AsyncResetTester__DOT__slowClk) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__AsyncResetTester__DOT__slowClk))))) {
        VAsyncResetTester___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VAsyncResetTester___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext 
        = vlSelf->__VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext;
    vlSelf->__Vclklast__TOP__AsyncResetTester__DOT__slowClk 
        = vlSelf->AsyncResetTester__DOT__slowClk;
    vlSelf->__VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext 
        = vlSelf->AsyncResetTester__DOT__asyncResetNext;
}

QData VAsyncResetTester___024root___change_request_1(VAsyncResetTester___024root* vlSelf);

VL_INLINE_OPT QData VAsyncResetTester___024root___change_request(VAsyncResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester___024root___change_request\n"); );
    // Body
    return (VAsyncResetTester___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VAsyncResetTester___024root___change_request_1(VAsyncResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->AsyncResetTester__DOT__asyncResetNext ^ vlSelf->__Vchglast__TOP__AsyncResetTester__DOT__asyncResetNext));
    VL_DEBUG_IF( if(__req && ((vlSelf->AsyncResetTester__DOT__asyncResetNext ^ vlSelf->__Vchglast__TOP__AsyncResetTester__DOT__asyncResetNext))) VL_DBG_MSGF("        CHANGE: /Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetTester/2022032915082811162868272306759040/AsyncResetTester.v:17: AsyncResetTester.asyncResetNext\n"); );
    // Final
    vlSelf->__Vchglast__TOP__AsyncResetTester__DOT__asyncResetNext 
        = vlSelf->AsyncResetTester__DOT__asyncResetNext;
    return __req;
}

#ifdef VL_DEBUG
void VAsyncResetTester___024root___eval_debug_assertions(VAsyncResetTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
