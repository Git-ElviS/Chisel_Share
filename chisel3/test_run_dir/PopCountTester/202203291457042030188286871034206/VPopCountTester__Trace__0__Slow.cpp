// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPopCountTester__Syms.h"


VL_ATTR_COLD void VPopCountTester___024root__trace_init_sub__TOP__0(VPopCountTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPopCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->pushNamePrefix("PopCountTester ");
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->declBus(c+1,"x", false,-1, 1,0);
    tracep->declBit(c+2,"REG", false,-1);
    tracep->declBus(c+3,"result", false,-1, 1,0);
    tracep->declBus(c+4,"expected", false,-1, 2,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VPopCountTester___024root__trace_init_top(VPopCountTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPopCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester___024root__trace_init_top\n"); );
    // Body
    VPopCountTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPopCountTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VPopCountTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VPopCountTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPopCountTester___024root__trace_register(VPopCountTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPopCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPopCountTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPopCountTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPopCountTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPopCountTester___024root__trace_full_sub_0(VPopCountTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPopCountTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester___024root__trace_full_top_0\n"); );
    // Init
    VPopCountTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPopCountTester___024root*>(voidSelf);
    VPopCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPopCountTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VPopCountTester___024root__trace_full_sub_0(VPopCountTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPopCountTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPopCountTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->PopCountTester__DOT__x),2);
    tracep->fullBit(oldp+2,(vlSelf->PopCountTester__DOT__REG));
    tracep->fullCData(oldp+3,((3U & ((1U & (IData)(vlSelf->PopCountTester__DOT__x)) 
                                     + (1U & ((IData)(vlSelf->PopCountTester__DOT__x) 
                                              >> 1U))))),2);
    tracep->fullCData(oldp+4,((7U & ((1U & (IData)(vlSelf->PopCountTester__DOT__x)) 
                                     + (1U & ((IData)(vlSelf->PopCountTester__DOT__x) 
                                              >> 1U))))),3);
    tracep->fullBit(oldp+5,(vlSelf->clock));
    tracep->fullBit(oldp+6,(vlSelf->reset));
}
