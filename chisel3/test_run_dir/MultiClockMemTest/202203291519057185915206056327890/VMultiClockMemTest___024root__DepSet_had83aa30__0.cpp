// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiClockMemTest.h for the primary calling header

#include "verilated.h"

#include "VMultiClockMemTest___024root.h"

VL_INLINE_OPT void VMultiClockMemTest___024root___sequent__TOP__2(VMultiClockMemTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdlyvset__MultiClockMemTest__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__MultiClockMemTest__DOT__mem__v1 = 0U;
}

VL_INLINE_OPT void VMultiClockMemTest___024root___sequent__TOP__3(VMultiClockMemTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root___sequent__TOP__3\n"); );
    // Body
    if ((8U > (IData)(vlSelf->MultiClockMemTest__DOT__cycle))) {
        vlSelf->__Vdlyvset__MultiClockMemTest__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__MultiClockMemTest__DOT__mem__v0 
            = vlSelf->MultiClockMemTest__DOT__waddr;
    }
}

VL_INLINE_OPT void VMultiClockMemTest___024root___sequent__TOP__4(VMultiClockMemTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root___sequent__TOP__4\n"); );
    // Body
    if (((8U <= (IData)(vlSelf->MultiClockMemTest__DOT__cycle)) 
         & (0x10U > (IData)(vlSelf->MultiClockMemTest__DOT__cycle)))) {
        vlSelf->__Vdlyvset__MultiClockMemTest__DOT__mem__v1 = 1U;
        vlSelf->__Vdlyvdim0__MultiClockMemTest__DOT__mem__v1 
            = vlSelf->MultiClockMemTest__DOT__waddr;
    }
}

VL_INLINE_OPT void VMultiClockMemTest___024root___sequent__TOP__5(VMultiClockMemTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root___sequent__TOP__5\n"); );
    // Body
    if (vlSelf->__Vdlyvset__MultiClockMemTest__DOT__mem__v0) {
        vlSelf->MultiClockMemTest__DOT__mem[vlSelf->__Vdlyvdim0__MultiClockMemTest__DOT__mem__v0] = 0x7bU;
    }
    if (vlSelf->__Vdlyvset__MultiClockMemTest__DOT__mem__v1) {
        vlSelf->MultiClockMemTest__DOT__mem[vlSelf->__Vdlyvdim0__MultiClockMemTest__DOT__mem__v1] = 0x1c8U;
    }
}

VL_INLINE_OPT void VMultiClockMemTest___024root___sequent__TOP__6(VMultiClockMemTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root___sequent__TOP__6\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->MultiClockMemTest__DOT__waddr = 0U;
        vlSelf->MultiClockMemTest__DOT__cycle = 0U;
    } else {
        vlSelf->MultiClockMemTest__DOT__waddr = vlSelf->MultiClockMemTest__DOT___waddr_T_1;
        vlSelf->MultiClockMemTest__DOT__cycle = ((IData)(vlSelf->MultiClockMemTest__DOT__wrap_wrap)
                                                  ? 0U
                                                  : (IData)(vlSelf->MultiClockMemTest__DOT___wrap_value_T_1));
    }
    vlSelf->MultiClockMemTest__DOT___waddr_T_1 = (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->MultiClockMemTest__DOT__waddr)));
    vlSelf->MultiClockMemTest__DOT__wrap_wrap = (0x13U 
                                                 == (IData)(vlSelf->MultiClockMemTest__DOT__cycle));
    vlSelf->MultiClockMemTest__DOT___wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->MultiClockMemTest__DOT__cycle)));
}

void VMultiClockMemTest___024root___sequent__TOP__0(VMultiClockMemTest___024root* vlSelf);

void VMultiClockMemTest___024root___eval(VMultiClockMemTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VMultiClockMemTest___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__MultiClockMemTest__DOT__cDiv) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__MultiClockMemTest__DOT__cDiv))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VMultiClockMemTest___024root___sequent__TOP__2(vlSelf);
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VMultiClockMemTest___024root___sequent__TOP__3(vlSelf);
    }
    if (((IData)(vlSelf->__VinpClk__TOP__MultiClockMemTest__DOT__cDiv) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__MultiClockMemTest__DOT__cDiv)))) {
        VMultiClockMemTest___024root___sequent__TOP__4(vlSelf);
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__MultiClockMemTest__DOT__cDiv) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__MultiClockMemTest__DOT__cDiv))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VMultiClockMemTest___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VMultiClockMemTest___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__MultiClockMemTest__DOT__cDiv 
        = vlSelf->__VinpClk__TOP__MultiClockMemTest__DOT__cDiv;
    vlSelf->__VinpClk__TOP__MultiClockMemTest__DOT__cDiv 
        = vlSelf->MultiClockMemTest__DOT__cDiv;
}

QData VMultiClockMemTest___024root___change_request_1(VMultiClockMemTest___024root* vlSelf);

VL_INLINE_OPT QData VMultiClockMemTest___024root___change_request(VMultiClockMemTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root___change_request\n"); );
    // Body
    return (VMultiClockMemTest___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VMultiClockMemTest___024root___change_request_1(VMultiClockMemTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->MultiClockMemTest__DOT__cDiv ^ vlSelf->__Vchglast__TOP__MultiClockMemTest__DOT__cDiv));
    VL_DEBUG_IF( if(__req && ((vlSelf->MultiClockMemTest__DOT__cDiv ^ vlSelf->__Vchglast__TOP__MultiClockMemTest__DOT__cDiv))) VL_DBG_MSGF("        CHANGE: /Users/caizhongxuan/Chisel/1_code/chisel3/test_run_dir/MultiClockMemTest/202203291519057185915206056327890/MultiClockMemTest.v:26: MultiClockMemTest.cDiv\n"); );
    // Final
    vlSelf->__Vchglast__TOP__MultiClockMemTest__DOT__cDiv 
        = vlSelf->MultiClockMemTest__DOT__cDiv;
    return __req;
}

#ifdef VL_DEBUG
void VMultiClockMemTest___024root___eval_debug_assertions(VMultiClockMemTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockMemTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockMemTest___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
