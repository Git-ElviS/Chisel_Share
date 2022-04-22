// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAsyncResetAggregateTester.h for the primary calling header

#include "verilated.h"

#include "VAsyncResetAggregateTester___024root.h"

VL_INLINE_OPT void VAsyncResetAggregateTester___024root___sequent__TOP__1(VAsyncResetAggregateTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->AsyncResetAggregateTester__DOT__asyncResetNext) {
        vlSelf->AsyncResetAggregateTester__DOT__reg_1_y = 0U;
        vlSelf->AsyncResetAggregateTester__DOT__reg_1_x = 0U;
        vlSelf->AsyncResetAggregateTester__DOT__reg_0_y = 0U;
        vlSelf->AsyncResetAggregateTester__DOT__reg_0_x = 0U;
    } else {
        vlSelf->AsyncResetAggregateTester__DOT__reg_1_y = 8U;
        vlSelf->AsyncResetAggregateTester__DOT__reg_1_x = 7U;
        vlSelf->AsyncResetAggregateTester__DOT__reg_0_y = 6U;
        vlSelf->AsyncResetAggregateTester__DOT__reg_0_x = 5U;
    }
}

VL_INLINE_OPT void VAsyncResetAggregateTester___024root___sequent__TOP__2(VAsyncResetAggregateTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->AsyncResetAggregateTester__DOT__asyncResetNext 
        = ((~ (IData)(vlSelf->reset)) & (4U == (IData)(vlSelf->AsyncResetAggregateTester__DOT__count)));
    vlSelf->AsyncResetAggregateTester__DOT__count = 
        ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->AsyncResetAggregateTester__DOT___wrap_value_T_1));
    vlSelf->AsyncResetAggregateTester__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->AsyncResetAggregateTester__DOT__count)));
    vlSelf->AsyncResetAggregateTester__DOT___T_19 = 
        ((5U <= (IData)(vlSelf->AsyncResetAggregateTester__DOT__count)) 
         & (7U > (IData)(vlSelf->AsyncResetAggregateTester__DOT__count)));
}

void VAsyncResetAggregateTester___024root___sequent__TOP__0(VAsyncResetAggregateTester___024root* vlSelf);

void VAsyncResetAggregateTester___024root___eval(VAsyncResetAggregateTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VAsyncResetAggregateTester___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext))) 
         | ((IData)(vlSelf->AsyncResetAggregateTester__DOT__slowClk) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__AsyncResetAggregateTester__DOT__slowClk))))) {
        VAsyncResetAggregateTester___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VAsyncResetAggregateTester___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext 
        = vlSelf->__VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext;
    vlSelf->__Vclklast__TOP__AsyncResetAggregateTester__DOT__slowClk 
        = vlSelf->AsyncResetAggregateTester__DOT__slowClk;
    vlSelf->__VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext 
        = vlSelf->AsyncResetAggregateTester__DOT__asyncResetNext;
}

QData VAsyncResetAggregateTester___024root___change_request_1(VAsyncResetAggregateTester___024root* vlSelf);

VL_INLINE_OPT QData VAsyncResetAggregateTester___024root___change_request(VAsyncResetAggregateTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root___change_request\n"); );
    // Body
    return (VAsyncResetAggregateTester___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VAsyncResetAggregateTester___024root___change_request_1(VAsyncResetAggregateTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->AsyncResetAggregateTester__DOT__asyncResetNext ^ vlSelf->__Vchglast__TOP__AsyncResetAggregateTester__DOT__asyncResetNext));
    VL_DEBUG_IF( if(__req && ((vlSelf->AsyncResetAggregateTester__DOT__asyncResetNext ^ vlSelf->__Vchglast__TOP__AsyncResetAggregateTester__DOT__asyncResetNext))) VL_DBG_MSGF("        CHANGE: /Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/AsyncResetAggregateTester/202203291508456149822795872742663/AsyncResetAggregateTester.v:20: AsyncResetAggregateTester.asyncResetNext\n"); );
    // Final
    vlSelf->__Vchglast__TOP__AsyncResetAggregateTester__DOT__asyncResetNext 
        = vlSelf->AsyncResetAggregateTester__DOT__asyncResetNext;
    return __req;
}

#ifdef VL_DEBUG
void VAsyncResetAggregateTester___024root___eval_debug_assertions(VAsyncResetAggregateTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
