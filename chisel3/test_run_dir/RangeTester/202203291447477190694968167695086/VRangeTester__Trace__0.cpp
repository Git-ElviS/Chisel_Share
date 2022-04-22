// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRangeTester__Syms.h"


void VRangeTester___024root__trace_chg_sub_0(VRangeTester___024root* vlSelf, VerilatedVcd* tracep);

void VRangeTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRangeTester___024root__trace_chg_top_0\n"); );
    // Init
    VRangeTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRangeTester___024root*>(voidSelf);
    VRangeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRangeTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VRangeTester___024root__trace_chg_sub_0(VRangeTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRangeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRangeTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->RangeTester__DOT__cnt),5);
        tracep->chgBit(oldp+1,((8U == (IData)(vlSelf->RangeTester__DOT__cnt))));
        tracep->chgBit(oldp+2,(vlSelf->RangeTester__DOT__checkWrap));
    }
    tracep->chgBit(oldp+3,(vlSelf->clock));
    tracep->chgBit(oldp+4,(vlSelf->reset));
}

void VRangeTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRangeTester___024root__trace_cleanup\n"); );
    // Init
    VRangeTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRangeTester___024root*>(voidSelf);
    VRangeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
