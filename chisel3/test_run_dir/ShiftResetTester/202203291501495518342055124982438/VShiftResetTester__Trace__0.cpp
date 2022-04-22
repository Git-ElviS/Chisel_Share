// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShiftResetTester__Syms.h"


void VShiftResetTester___024root__trace_chg_sub_0(VShiftResetTester___024root* vlSelf, VerilatedVcd* tracep);

void VShiftResetTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester___024root__trace_chg_top_0\n"); );
    // Init
    VShiftResetTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VShiftResetTester___024root*>(voidSelf);
    VShiftResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VShiftResetTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VShiftResetTester___024root__trace_chg_sub_0(VShiftResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->ShiftResetTester__DOT__cntVal));
        tracep->chgCData(oldp+1,(vlSelf->ShiftResetTester__DOT__sr_r),5);
        tracep->chgCData(oldp+2,(vlSelf->ShiftResetTester__DOT__sr_r_1),5);
        tracep->chgCData(oldp+3,(vlSelf->ShiftResetTester__DOT__sr),5);
    }
    tracep->chgBit(oldp+4,(vlSelf->clock));
    tracep->chgBit(oldp+5,(vlSelf->reset));
}

void VShiftResetTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester___024root__trace_cleanup\n"); );
    // Init
    VShiftResetTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VShiftResetTester___024root*>(voidSelf);
    VShiftResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
