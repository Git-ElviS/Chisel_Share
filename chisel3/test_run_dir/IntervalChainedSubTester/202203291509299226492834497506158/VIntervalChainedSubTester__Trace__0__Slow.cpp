// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIntervalChainedSubTester__Syms.h"


VL_ATTR_COLD void VIntervalChainedSubTester___024root__trace_init_sub__TOP__0(VIntervalChainedSubTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalChainedSubTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedSubTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("IntervalChainedSubTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"intervalResult1", false,-1, 3,0);
    tracep->declBus(c+4,"uIntResult", false,-1, 10,0);
    tracep->declBus(c+5,"fixedResult", false,-1, 11,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VIntervalChainedSubTester___024root__trace_init_top(VIntervalChainedSubTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalChainedSubTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedSubTester___024root__trace_init_top\n"); );
    // Body
    VIntervalChainedSubTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VIntervalChainedSubTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VIntervalChainedSubTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VIntervalChainedSubTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VIntervalChainedSubTester___024root__trace_register(VIntervalChainedSubTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalChainedSubTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedSubTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VIntervalChainedSubTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VIntervalChainedSubTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VIntervalChainedSubTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VIntervalChainedSubTester___024root__trace_full_sub_0(VIntervalChainedSubTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VIntervalChainedSubTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedSubTester___024root__trace_full_top_0\n"); );
    // Init
    VIntervalChainedSubTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIntervalChainedSubTester___024root*>(voidSelf);
    VIntervalChainedSubTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VIntervalChainedSubTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VIntervalChainedSubTester___024root__trace_full_sub_0(VIntervalChainedSubTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalChainedSubTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedSubTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullCData(oldp+3,(5U),4);
    tracep->fullSData(oldp+4,(5U),11);
    tracep->fullSData(oldp+5,(5U),12);
}
