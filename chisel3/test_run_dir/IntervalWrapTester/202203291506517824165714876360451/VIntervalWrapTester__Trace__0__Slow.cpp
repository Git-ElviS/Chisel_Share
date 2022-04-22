// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIntervalWrapTester__Syms.h"


VL_ATTR_COLD void VIntervalWrapTester___024root__trace_init_sub__TOP__0(VIntervalWrapTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalWrapTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("IntervalWrapTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"w1", false,-1, 3,0);
    tracep->declBus(c+4,"w3", false,-1, 4,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VIntervalWrapTester___024root__trace_init_top(VIntervalWrapTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalWrapTester___024root__trace_init_top\n"); );
    // Body
    VIntervalWrapTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VIntervalWrapTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VIntervalWrapTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VIntervalWrapTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VIntervalWrapTester___024root__trace_register(VIntervalWrapTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalWrapTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VIntervalWrapTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VIntervalWrapTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VIntervalWrapTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VIntervalWrapTester___024root__trace_full_sub_0(VIntervalWrapTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VIntervalWrapTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalWrapTester___024root__trace_full_top_0\n"); );
    // Init
    VIntervalWrapTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIntervalWrapTester___024root*>(voidSelf);
    VIntervalWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VIntervalWrapTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VIntervalWrapTester___024root__trace_full_sub_0(VIntervalWrapTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalWrapTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullCData(oldp+3,(0xeU),4);
    tracep->fullCData(oldp+4,(0x1dU),5);
}
