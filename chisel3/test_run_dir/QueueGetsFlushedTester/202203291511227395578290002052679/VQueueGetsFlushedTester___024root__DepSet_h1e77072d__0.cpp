// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQueueGetsFlushedTester.h for the primary calling header

#include "verilated.h"

#include "VQueueGetsFlushedTester___024root.h"

VL_INLINE_OPT void VQueueGetsFlushedTester___024root___combo__TOP__0(VQueueGetsFlushedTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueGetsFlushedTester___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->QueueGetsFlushedTester__DOT___GEN_69 = 
        ((IData)(vlSelf->QueueGetsFlushedTester__DOT__flushRegister) 
         & (~ (IData)(vlSelf->reset)));
    vlSelf->QueueGetsFlushedTester__DOT___GEN_66 = 
        ((IData)(vlSelf->QueueGetsFlushedTester__DOT___T_1) 
         & (~ (IData)(vlSelf->reset)));
}

void VQueueGetsFlushedTester___024root___sequent__TOP__0(VQueueGetsFlushedTester___024root* vlSelf);

void VQueueGetsFlushedTester___024root___eval(VQueueGetsFlushedTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueGetsFlushedTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VQueueGetsFlushedTester___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VQueueGetsFlushedTester___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VQueueGetsFlushedTester___024root___eval_debug_assertions(VQueueGetsFlushedTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueGetsFlushedTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
