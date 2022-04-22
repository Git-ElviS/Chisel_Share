// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClockDividerTest.h for the primary calling header

#include "verilated.h"

#include "VClockDividerTest___024root.h"

VL_INLINE_OPT void VClockDividerTest___024root___sequent__TOP__1(VClockDividerTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VClockDividerTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDividerTest___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->ClockDividerTest__DOT__reg2 = ((IData)(vlSelf->reset)
                                            ? 0U : (IData)(vlSelf->ClockDividerTest__DOT___reg2_T_1));
    vlSelf->ClockDividerTest__DOT___reg2_T_1 = (0xffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->ClockDividerTest__DOT__reg2)));
}

void VClockDividerTest___024root___sequent__TOP__0(VClockDividerTest___024root* vlSelf);

void VClockDividerTest___024root___eval(VClockDividerTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VClockDividerTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDividerTest___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VClockDividerTest___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->__VinpClk__TOP__ClockDividerTest__DOT__cDiv) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ClockDividerTest__DOT__cDiv)))) {
        VClockDividerTest___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ClockDividerTest__DOT__cDiv 
        = vlSelf->__VinpClk__TOP__ClockDividerTest__DOT__cDiv;
    vlSelf->__VinpClk__TOP__ClockDividerTest__DOT__cDiv 
        = vlSelf->ClockDividerTest__DOT__cDiv;
}

QData VClockDividerTest___024root___change_request_1(VClockDividerTest___024root* vlSelf);

VL_INLINE_OPT QData VClockDividerTest___024root___change_request(VClockDividerTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VClockDividerTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDividerTest___024root___change_request\n"); );
    // Body
    return (VClockDividerTest___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VClockDividerTest___024root___change_request_1(VClockDividerTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VClockDividerTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDividerTest___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->ClockDividerTest__DOT__cDiv ^ vlSelf->__Vchglast__TOP__ClockDividerTest__DOT__cDiv));
    VL_DEBUG_IF( if(__req && ((vlSelf->ClockDividerTest__DOT__cDiv ^ vlSelf->__Vchglast__TOP__ClockDividerTest__DOT__cDiv))) VL_DBG_MSGF("        CHANGE: /Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/ClockDividerTest/2022032915184615388158226919262017/ClockDividerTest.v:10: ClockDividerTest.cDiv\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ClockDividerTest__DOT__cDiv 
        = vlSelf->ClockDividerTest__DOT__cDiv;
    return __req;
}

#ifdef VL_DEBUG
void VClockDividerTest___024root___eval_debug_assertions(VClockDividerTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VClockDividerTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDividerTest___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
