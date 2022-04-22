// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLFSRResetTester__Syms.h"


void VLFSRResetTester___024root__trace_chg_sub_0(VLFSRResetTester___024root* vlSelf, VerilatedVcd* tracep);

void VLFSRResetTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester___024root__trace_chg_top_0\n"); );
    // Init
    VLFSRResetTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLFSRResetTester___024root*>(voidSelf);
    VLFSRResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VLFSRResetTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VLFSRResetTester___024root__trace_chg_sub_0(VLFSRResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((3U == (IData)(vlSelf->LFSRResetTester__DOT__count))));
        tracep->chgBit(oldp+1,((1U == (IData)(vlSelf->LFSRResetTester__DOT__count))));
        tracep->chgBit(oldp+2,(vlSelf->LFSRResetTester__DOT__lfsr__DOT__state_0));
        tracep->chgCData(oldp+3,(vlSelf->LFSRResetTester__DOT__count),3);
        tracep->chgBit(oldp+4,((4U == (IData)(vlSelf->LFSRResetTester__DOT__count))));
    }
    tracep->chgBit(oldp+5,(vlSelf->clock));
    tracep->chgBit(oldp+6,(vlSelf->reset));
}

void VLFSRResetTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester___024root__trace_cleanup\n"); );
    // Init
    VLFSRResetTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLFSRResetTester___024root*>(voidSelf);
    VLFSRResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
