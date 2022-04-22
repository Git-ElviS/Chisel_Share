// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShiftRegisterTester.h for the primary calling header

#include "verilated.h"

#include "VShiftRegisterTester___024root.h"

void VShiftRegisterTester___024root___sequent__TOP__0(VShiftRegisterTester___024root* vlSelf);

void VShiftRegisterTester___024root___eval(VShiftRegisterTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftRegisterTester___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VShiftRegisterTester___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VShiftRegisterTester___024root___eval_debug_assertions(VShiftRegisterTester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftRegisterTester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
