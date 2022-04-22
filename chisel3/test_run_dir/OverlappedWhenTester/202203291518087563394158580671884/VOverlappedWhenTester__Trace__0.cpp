// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VOverlappedWhenTester__Syms.h"


void VOverlappedWhenTester___024root__trace_chg_sub_0(VOverlappedWhenTester___024root* vlSelf, VerilatedVcd* tracep);

void VOverlappedWhenTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOverlappedWhenTester___024root__trace_chg_top_0\n"); );
    // Init
    VOverlappedWhenTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOverlappedWhenTester___024root*>(voidSelf);
    VOverlappedWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VOverlappedWhenTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VOverlappedWhenTester___024root__trace_chg_sub_0(VOverlappedWhenTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VOverlappedWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOverlappedWhenTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->OverlappedWhenTester__DOT__value),2);
        tracep->chgBit(oldp+1,((3U == (IData)(vlSelf->OverlappedWhenTester__DOT__value))));
        tracep->chgCData(oldp+2,(((0U >= (IData)(vlSelf->OverlappedWhenTester__DOT__value))
                                   ? 1U : ((1U >= (IData)(vlSelf->OverlappedWhenTester__DOT__value))
                                            ? 2U : 
                                           ((2U >= (IData)(vlSelf->OverlappedWhenTester__DOT__value))
                                             ? 3U : 0U)))),3);
    }
    tracep->chgBit(oldp+3,(vlSelf->clock));
    tracep->chgBit(oldp+4,(vlSelf->reset));
}

void VOverlappedWhenTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOverlappedWhenTester___024root__trace_cleanup\n"); );
    // Init
    VOverlappedWhenTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VOverlappedWhenTester___024root*>(voidSelf);
    VOverlappedWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
