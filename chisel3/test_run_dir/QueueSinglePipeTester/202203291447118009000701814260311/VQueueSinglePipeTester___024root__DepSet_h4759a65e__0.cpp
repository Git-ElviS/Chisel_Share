// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueSinglePipeTester.h for the primary calling header

#include "verilated.h"

#include "VQueueSinglePipeTester___024root.h"

void VQueueSinglePipeTester___024root___sequent__TOP__0(VQueueSinglePipeTester___024root* vlSelf);

void VQueueSinglePipeTester___024root___eval(VQueueSinglePipeTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueSinglePipeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueSinglePipeTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VQueueSinglePipeTester___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VQueueSinglePipeTester___024root___eval_debug_assertions(VQueueSinglePipeTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueSinglePipeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueSinglePipeTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
