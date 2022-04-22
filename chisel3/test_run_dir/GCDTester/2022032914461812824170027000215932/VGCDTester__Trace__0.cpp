// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGCDTester__Syms.h"


void VGCDTester___024root__trace_chg_sub_0(VGCDTester___024root* vlSelf, VerilatedVcd* tracep);

void VGCDTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester___024root__trace_chg_top_0\n"); );
    // Init
    VGCDTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VGCDTester___024root*>(voidSelf);
    VGCDTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VGCDTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VGCDTester___024root__trace_chg_sub_0(VGCDTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VGCDTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->GCDTester__DOT__first));
        tracep->chgIData(oldp+1,(vlSelf->GCDTester__DOT__dut__DOT__x),32);
        tracep->chgBit(oldp+2,((0U == vlSelf->GCDTester__DOT__dut__DOT__y)));
        tracep->chgIData(oldp+3,(vlSelf->GCDTester__DOT__dut__DOT__y),32);
    }
    tracep->chgBit(oldp+4,(vlSelf->clock));
    tracep->chgBit(oldp+5,(vlSelf->reset));
}

void VGCDTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester___024root__trace_cleanup\n"); );
    // Init
    VGCDTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VGCDTester___024root*>(voidSelf);
    VGCDTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
