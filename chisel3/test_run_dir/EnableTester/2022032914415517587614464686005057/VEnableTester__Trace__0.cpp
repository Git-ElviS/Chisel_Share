// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEnableTester__Syms.h"


void VEnableTester___024root__trace_chg_sub_0(VEnableTester___024root* vlSelf, VerilatedVcd* tracep);

void VEnableTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester___024root__trace_chg_top_0\n"); );
    // Init
    VEnableTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VEnableTester___024root*>(voidSelf);
    VEnableTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VEnableTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VEnableTester___024root__trace_chg_sub_0(VEnableTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VEnableTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(vlSelf->EnableTester__DOT__ens),30);
        tracep->chgCData(oldp+1,(vlSelf->EnableTester__DOT__cntEnVal),5);
        tracep->chgCData(oldp+2,(vlSelf->EnableTester__DOT__done_value),6);
        tracep->chgBit(oldp+3,((0x20U == (IData)(vlSelf->EnableTester__DOT__done_value))));
    }
    tracep->chgBit(oldp+4,(vlSelf->clock));
    tracep->chgBit(oldp+5,(vlSelf->reset));
}

void VEnableTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester___024root__trace_cleanup\n"); );
    // Init
    VEnableTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VEnableTester___024root*>(voidSelf);
    VEnableTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
