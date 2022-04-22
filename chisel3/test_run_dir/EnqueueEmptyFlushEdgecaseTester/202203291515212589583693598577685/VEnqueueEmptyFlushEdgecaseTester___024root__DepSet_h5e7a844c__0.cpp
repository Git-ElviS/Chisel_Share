// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEnqueueEmptyFlushEdgecaseTester.h for the primary calling header

#include "verilated.h"

#include "VEnqueueEmptyFlushEdgecaseTester___024root.h"

void VEnqueueEmptyFlushEdgecaseTester___024root___sequent__TOP__0(VEnqueueEmptyFlushEdgecaseTester___024root* vlSelf);

void VEnqueueEmptyFlushEdgecaseTester___024root___eval(VEnqueueEmptyFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEnqueueEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnqueueEmptyFlushEdgecaseTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VEnqueueEmptyFlushEdgecaseTester___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VEnqueueEmptyFlushEdgecaseTester___024root___eval_debug_assertions(VEnqueueEmptyFlushEdgecaseTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEnqueueEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnqueueEmptyFlushEdgecaseTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
