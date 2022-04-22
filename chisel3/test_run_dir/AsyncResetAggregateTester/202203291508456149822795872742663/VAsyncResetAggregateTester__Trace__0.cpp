// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetAggregateTester__Syms.h"


void VAsyncResetAggregateTester___024root__trace_chg_sub_0(VAsyncResetAggregateTester___024root* vlSelf, VerilatedVcd* tracep);

void VAsyncResetAggregateTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root__trace_chg_top_0\n"); );
    // Init
    VAsyncResetAggregateTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAsyncResetAggregateTester___024root*>(voidSelf);
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VAsyncResetAggregateTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VAsyncResetAggregateTester___024root__trace_chg_sub_0(VAsyncResetAggregateTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->AsyncResetAggregateTester__DOT__reg_0_x),8);
        tracep->chgCData(oldp+1,(vlSelf->AsyncResetAggregateTester__DOT__reg_0_y),8);
        tracep->chgCData(oldp+2,(vlSelf->AsyncResetAggregateTester__DOT__reg_1_x),8);
        tracep->chgCData(oldp+3,(vlSelf->AsyncResetAggregateTester__DOT__reg_1_y),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgCData(oldp+4,(vlSelf->AsyncResetAggregateTester__DOT__count),4);
        tracep->chgBit(oldp+5,((0xfU == (IData)(vlSelf->AsyncResetAggregateTester__DOT__count))));
        tracep->chgBit(oldp+6,(vlSelf->AsyncResetAggregateTester__DOT__asyncResetNext));
    }
    tracep->chgBit(oldp+7,(vlSelf->clock));
    tracep->chgBit(oldp+8,(vlSelf->reset));
    tracep->chgCData(oldp+9,(vlSelf->AsyncResetAggregateTester__DOT__cDiv_value),2);
    tracep->chgBit(oldp+10,(vlSelf->AsyncResetAggregateTester__DOT__slowClk));
}

void VAsyncResetAggregateTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root__trace_cleanup\n"); );
    // Init
    VAsyncResetAggregateTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAsyncResetAggregateTester___024root*>(voidSelf);
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
