// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMixedVecOneBitTester__Syms.h"


VL_ATTR_COLD void VMixedVecOneBitTester___024root__trace_init_sub__TOP__0(VMixedVecOneBitTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecOneBitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("MixedVecOneBitTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"flag", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VMixedVecOneBitTester___024root__trace_init_top(VMixedVecOneBitTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecOneBitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester___024root__trace_init_top\n"); );
    // Body
    VMixedVecOneBitTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMixedVecOneBitTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMixedVecOneBitTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMixedVecOneBitTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMixedVecOneBitTester___024root__trace_register(VMixedVecOneBitTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecOneBitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VMixedVecOneBitTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VMixedVecOneBitTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VMixedVecOneBitTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMixedVecOneBitTester___024root__trace_full_sub_0(VMixedVecOneBitTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMixedVecOneBitTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester___024root__trace_full_top_0\n"); );
    // Init
    VMixedVecOneBitTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMixedVecOneBitTester___024root*>(voidSelf);
    VMixedVecOneBitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMixedVecOneBitTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VMixedVecOneBitTester___024root__trace_full_sub_0(VMixedVecOneBitTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMixedVecOneBitTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMixedVecOneBitTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullBit(oldp+3,(vlSelf->MixedVecOneBitTester__DOT__flag));
}
