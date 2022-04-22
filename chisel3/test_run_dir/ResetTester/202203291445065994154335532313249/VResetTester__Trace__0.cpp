// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VResetTester__Syms.h"


void VResetTester___024root__trace_chg_sub_0(VResetTester___024root* vlSelf, VerilatedVcd* tracep);

void VResetTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetTester___024root__trace_chg_top_0\n"); );
    // Init
    VResetTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VResetTester___024root*>(voidSelf);
    VResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VResetTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VResetTester___024root__trace_chg_sub_0(VResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->ResetTester__DOT__wasReset));
        tracep->chgCData(oldp+1,(vlSelf->ResetTester__DOT__value),3);
        tracep->chgBit(oldp+2,((1U == (IData)(vlSelf->ResetTester__DOT__value))));
    }
    tracep->chgBit(oldp+3,(vlSelf->clock));
    tracep->chgBit(oldp+4,(vlSelf->reset));
}

void VResetTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetTester___024root__trace_cleanup\n"); );
    // Init
    VResetTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VResetTester___024root*>(voidSelf);
    VResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
