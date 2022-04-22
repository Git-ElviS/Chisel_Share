// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMemVecTester__Syms.h"


void VMemVecTester___024root__trace_chg_sub_0(VMemVecTester___024root* vlSelf, VerilatedVcd* tracep);

void VMemVecTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemVecTester___024root__trace_chg_top_0\n"); );
    // Init
    VMemVecTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMemVecTester___024root*>(voidSelf);
    VMemVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMemVecTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VMemVecTester___024root__trace_chg_sub_0(VMemVecTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMemVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemVecTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->MemVecTester__DOT__mem_0[0]),8);
        tracep->chgCData(oldp+1,(vlSelf->MemVecTester__DOT__mem_0[1]),8);
        tracep->chgBit(oldp+2,(vlSelf->MemVecTester__DOT__cnt));
        tracep->chgCData(oldp+3,(vlSelf->MemVecTester__DOT__mem_0
                                 [0U]),8);
    }
    tracep->chgBit(oldp+4,(vlSelf->clock));
    tracep->chgBit(oldp+5,(vlSelf->reset));
}

void VMemVecTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemVecTester___024root__trace_cleanup\n"); );
    // Init
    VMemVecTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMemVecTester___024root*>(voidSelf);
    VMemVecTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
