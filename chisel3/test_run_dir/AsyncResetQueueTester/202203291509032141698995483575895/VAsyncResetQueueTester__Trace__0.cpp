// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetQueueTester__Syms.h"


void VAsyncResetQueueTester___024root__trace_chg_sub_0(VAsyncResetQueueTester___024root* vlSelf, VerilatedVcd* tracep);

void VAsyncResetQueueTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root__trace_chg_top_0\n"); );
    // Init
    VAsyncResetQueueTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAsyncResetQueueTester___024root*>(voidSelf);
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VAsyncResetQueueTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VAsyncResetQueueTester___024root__trace_chg_sub_0(VAsyncResetQueueTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->AsyncResetQueueTester__DOT__queue_clock));
        tracep->chgCData(oldp+1,(vlSelf->AsyncResetQueueTester__DOT__cDiv_value),2);
        tracep->chgCData(oldp+2,(vlSelf->AsyncResetQueueTester__DOT__count),4);
        tracep->chgBit(oldp+3,((0xfU == (IData)(vlSelf->AsyncResetQueueTester__DOT__count))));
        tracep->chgBit(oldp+4,(vlSelf->AsyncResetQueueTester__DOT__doCheck));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+5,((1U & (~ (IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__full)))));
        tracep->chgCData(oldp+6,(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value),2);
        tracep->chgBit(oldp+7,(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__maybe_full));
        tracep->chgBit(oldp+8,((0U == (IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value))));
        tracep->chgBit(oldp+9,(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__full));
    }
    tracep->chgBit(oldp+10,(vlSelf->clock));
    tracep->chgBit(oldp+11,(vlSelf->reset));
    tracep->chgBit(oldp+12,(vlSelf->AsyncResetQueueTester__DOT__asyncResetNext));
    tracep->chgCData(oldp+13,(vlSelf->AsyncResetQueueTester__DOT__queue_io_count),3);
}

void VAsyncResetQueueTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root__trace_cleanup\n"); );
    // Init
    VAsyncResetQueueTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAsyncResetQueueTester___024root*>(voidSelf);
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
