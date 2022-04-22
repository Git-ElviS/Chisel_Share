// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIntervalChainedMulTester__Syms.h"


VL_ATTR_COLD void VIntervalChainedMulTester___024root__trace_init_sub__TOP__0(VIntervalChainedMulTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalChainedMulTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedMulTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("IntervalChainedMulTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"intervalResult", false,-1, 8,0);
    tracep->declBus(c+4,"uintResult", false,-1, 13,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VIntervalChainedMulTester___024root__trace_init_top(VIntervalChainedMulTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalChainedMulTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedMulTester___024root__trace_init_top\n"); );
    // Body
    VIntervalChainedMulTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VIntervalChainedMulTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VIntervalChainedMulTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VIntervalChainedMulTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VIntervalChainedMulTester___024root__trace_register(VIntervalChainedMulTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalChainedMulTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedMulTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VIntervalChainedMulTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VIntervalChainedMulTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VIntervalChainedMulTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VIntervalChainedMulTester___024root__trace_full_sub_0(VIntervalChainedMulTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VIntervalChainedMulTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedMulTester___024root__trace_full_top_0\n"); );
    // Init
    VIntervalChainedMulTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIntervalChainedMulTester___024root*>(voidSelf);
    VIntervalChainedMulTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VIntervalChainedMulTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VIntervalChainedMulTester___024root__trace_full_sub_0(VIntervalChainedMulTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalChainedMulTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalChainedMulTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullSData(oldp+3,(0x80U),9);
    tracep->fullSData(oldp+4,(0x80U),14);
}
