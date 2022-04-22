// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetQueueTester__Syms.h"


VL_ATTR_COLD void VAsyncResetQueueTester___024root__trace_init_sub__TOP__0(VAsyncResetQueueTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+11,"clock", false,-1);
    tracep->declBit(c+12,"reset", false,-1);
    tracep->pushNamePrefix("AsyncResetQueueTester ");
    tracep->declBit(c+11,"clock", false,-1);
    tracep->declBit(c+12,"reset", false,-1);
    tracep->declBit(c+1,"queue_clock", false,-1);
    tracep->declBit(c+13,"queue_reset", false,-1);
    tracep->declBit(c+6,"queue_io_enq_ready", false,-1);
    tracep->declBus(c+14,"queue_io_count", false,-1, 2,0);
    tracep->declBus(c+2,"cDiv_value", false,-1, 1,0);
    tracep->declBus(c+3,"count", false,-1, 3,0);
    tracep->declBit(c+4,"wrap_wrap", false,-1);
    tracep->declBit(c+13,"asyncResetNext", false,-1);
    tracep->declBit(c+5,"doCheck", false,-1);
    tracep->pushNamePrefix("queue ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+13,"reset", false,-1);
    tracep->declBit(c+6,"io_enq_ready", false,-1);
    tracep->declBus(c+14,"io_count", false,-1, 2,0);
    tracep->declBus(c+7,"enq_ptr_value", false,-1, 1,0);
    tracep->declBit(c+8,"maybe_full", false,-1);
    tracep->declBit(c+9,"ptr_match", false,-1);
    tracep->declBit(c+10,"full", false,-1);
    tracep->declBus(c+7,"ptr_diff", false,-1, 1,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VAsyncResetQueueTester___024root__trace_init_top(VAsyncResetQueueTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root__trace_init_top\n"); );
    // Body
    VAsyncResetQueueTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAsyncResetQueueTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VAsyncResetQueueTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VAsyncResetQueueTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VAsyncResetQueueTester___024root__trace_register(VAsyncResetQueueTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VAsyncResetQueueTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VAsyncResetQueueTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VAsyncResetQueueTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAsyncResetQueueTester___024root__trace_full_sub_0(VAsyncResetQueueTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAsyncResetQueueTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root__trace_full_top_0\n"); );
    // Init
    VAsyncResetQueueTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAsyncResetQueueTester___024root*>(voidSelf);
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAsyncResetQueueTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VAsyncResetQueueTester___024root__trace_full_sub_0(VAsyncResetQueueTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetQueueTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->AsyncResetQueueTester__DOT__queue_clock));
    tracep->fullCData(oldp+2,(vlSelf->AsyncResetQueueTester__DOT__cDiv_value),2);
    tracep->fullCData(oldp+3,(vlSelf->AsyncResetQueueTester__DOT__count),4);
    tracep->fullBit(oldp+4,((0xfU == (IData)(vlSelf->AsyncResetQueueTester__DOT__count))));
    tracep->fullBit(oldp+5,(vlSelf->AsyncResetQueueTester__DOT__doCheck));
    tracep->fullBit(oldp+6,((1U & (~ (IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__full)))));
    tracep->fullCData(oldp+7,(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value),2);
    tracep->fullBit(oldp+8,(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__maybe_full));
    tracep->fullBit(oldp+9,((0U == (IData)(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__enq_ptr_value))));
    tracep->fullBit(oldp+10,(vlSelf->AsyncResetQueueTester__DOT__queue__DOT__full));
    tracep->fullBit(oldp+11,(vlSelf->clock));
    tracep->fullBit(oldp+12,(vlSelf->reset));
    tracep->fullBit(oldp+13,(vlSelf->AsyncResetQueueTester__DOT__asyncResetNext));
    tracep->fullCData(oldp+14,(vlSelf->AsyncResetQueueTester__DOT__queue_io_count),3);
}
