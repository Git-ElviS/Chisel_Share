// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFullQueueFlushEdgecaseTester.h for the primary calling header

#include "verilated.h"

#include "VFullQueueFlushEdgecaseTester___024root.h"

VL_INLINE_OPT void VFullQueueFlushEdgecaseTester___024root___combo__TOP__0(VFullQueueFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullQueueFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullQueueFlushEdgecaseTester___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_52 
        = ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__flushRegister) 
           & (~ (IData)(vlSelf->reset)));
    vlSelf->FullQueueFlushEdgecaseTester__DOT___GEN_49 
        = ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___T_1) 
           & (~ (IData)(vlSelf->reset)));
}

void VFullQueueFlushEdgecaseTester___024root___sequent__TOP__0(VFullQueueFlushEdgecaseTester___024root* vlSelf);

void VFullQueueFlushEdgecaseTester___024root___eval(VFullQueueFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullQueueFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullQueueFlushEdgecaseTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VFullQueueFlushEdgecaseTester___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VFullQueueFlushEdgecaseTester___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VFullQueueFlushEdgecaseTester___024root___eval_debug_assertions(VFullQueueFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFullQueueFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullQueueFlushEdgecaseTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
