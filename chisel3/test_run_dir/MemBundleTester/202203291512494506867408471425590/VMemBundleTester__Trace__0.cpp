// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMemBundleTester__Syms.h"


void VMemBundleTester___024root__trace_chg_sub_0(VMemBundleTester___024root* vlSelf, VerilatedVcd* tracep);

void VMemBundleTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemBundleTester___024root__trace_chg_top_0\n"); );
    // Init
    VMemBundleTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMemBundleTester___024root*>(voidSelf);
    VMemBundleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMemBundleTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VMemBundleTester___024root__trace_chg_sub_0(VMemBundleTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMemBundleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemBundleTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->MemBundleTester__DOT__mem_foo[0]),2);
        tracep->chgCData(oldp+1,(vlSelf->MemBundleTester__DOT__mem_foo[1]),2);
        tracep->chgBit(oldp+2,(vlSelf->MemBundleTester__DOT__cnt));
        tracep->chgCData(oldp+3,(vlSelf->MemBundleTester__DOT__mem_foo
                                 [0U]),2);
    }
    tracep->chgBit(oldp+4,(vlSelf->clock));
    tracep->chgBit(oldp+5,(vlSelf->reset));
}

void VMemBundleTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMemBundleTester___024root__trace_cleanup\n"); );
    // Init
    VMemBundleTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMemBundleTester___024root*>(voidSelf);
    VMemBundleTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
