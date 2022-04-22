// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiClockSubModuleTest.h for the primary calling header

#include "verilated.h"

#include "VMultiClockSubModuleTest___024root.h"

VL_INLINE_OPT void VMultiClockSubModuleTest___024root___sequent__TOP__1(VMultiClockSubModuleTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->MultiClockSubModuleTest__DOT__inst__DOT__cycle 
        = ((3U > (IData)(vlSelf->MultiClockSubModuleTest__DOT__cycle))
            ? 0U : ((IData)(vlSelf->MultiClockSubModuleTest__DOT__inst__DOT__cycle_wrap_wrap)
                     ? 0U : (IData)(vlSelf->MultiClockSubModuleTest__DOT__inst__DOT___cycle_wrap_value_T_1)));
    vlSelf->MultiClockSubModuleTest__DOT__inst__DOT__cycle_wrap_wrap 
        = (9U == (IData)(vlSelf->MultiClockSubModuleTest__DOT__inst__DOT__cycle));
    vlSelf->MultiClockSubModuleTest__DOT__inst__DOT___cycle_wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->MultiClockSubModuleTest__DOT__inst__DOT__cycle)));
}

VL_INLINE_OPT void VMultiClockSubModuleTest___024root___sequent__TOP__2(VMultiClockSubModuleTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->MultiClockSubModuleTest__DOT__cycle = ((IData)(vlSelf->reset)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->MultiClockSubModuleTest__DOT__wrap_wrap)
                                                     ? 0U
                                                     : (IData)(vlSelf->MultiClockSubModuleTest__DOT___wrap_value_T_1)));
    vlSelf->MultiClockSubModuleTest__DOT__wrap_wrap 
        = (9U == (IData)(vlSelf->MultiClockSubModuleTest__DOT__cycle));
    vlSelf->MultiClockSubModuleTest__DOT___wrap_value_T_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->MultiClockSubModuleTest__DOT__cycle)));
}

void VMultiClockSubModuleTest___024root___sequent__TOP__0(VMultiClockSubModuleTest___024root* vlSelf);

void VMultiClockSubModuleTest___024root___eval(VMultiClockSubModuleTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VMultiClockSubModuleTest___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->__VinpClk__TOP__MultiClockSubModuleTest__DOT__cDiv) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__MultiClockSubModuleTest__DOT__cDiv)))) {
        VMultiClockSubModuleTest___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VMultiClockSubModuleTest___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__MultiClockSubModuleTest__DOT__cDiv 
        = vlSelf->__VinpClk__TOP__MultiClockSubModuleTest__DOT__cDiv;
    vlSelf->__VinpClk__TOP__MultiClockSubModuleTest__DOT__cDiv 
        = vlSelf->MultiClockSubModuleTest__DOT__cDiv;
}

QData VMultiClockSubModuleTest___024root___change_request_1(VMultiClockSubModuleTest___024root* vlSelf);

VL_INLINE_OPT QData VMultiClockSubModuleTest___024root___change_request(VMultiClockSubModuleTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root___change_request\n"); );
    // Body
    return (VMultiClockSubModuleTest___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VMultiClockSubModuleTest___024root___change_request_1(VMultiClockSubModuleTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->MultiClockSubModuleTest__DOT__cDiv ^ vlSelf->__Vchglast__TOP__MultiClockSubModuleTest__DOT__cDiv));
    VL_DEBUG_IF( if(__req && ((vlSelf->MultiClockSubModuleTest__DOT__cDiv ^ vlSelf->__Vchglast__TOP__MultiClockSubModuleTest__DOT__cDiv))) VL_DBG_MSGF("        CHANGE: /Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MultiClockSubModuleTest/2022032915194510152693556250419748/MultiClockSubModuleTest.v:82: MultiClockSubModuleTest.cDiv\n"); );
    // Final
    vlSelf->__Vchglast__TOP__MultiClockSubModuleTest__DOT__cDiv 
        = vlSelf->MultiClockSubModuleTest__DOT__cDiv;
    return __req;
}

#ifdef VL_DEBUG
void VMultiClockSubModuleTest___024root___eval_debug_assertions(VMultiClockSubModuleTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
