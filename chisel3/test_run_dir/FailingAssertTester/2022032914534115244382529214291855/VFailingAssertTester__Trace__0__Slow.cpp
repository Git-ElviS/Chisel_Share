// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFailingAssertTester__Syms.h"


VL_ATTR_COLD void VFailingAssertTester___024root__trace_init_sub__TOP__0(VFailingAssertTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFailingAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("FailingAssertTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"done_value", false,-1, 1,0);
    tracep->declBit(c+4,"done_wrap_wrap", false,-1);
    tracep->declBit(c+5,"done", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VFailingAssertTester___024root__trace_init_top(VFailingAssertTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFailingAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester___024root__trace_init_top\n"); );
    // Body
    VFailingAssertTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VFailingAssertTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VFailingAssertTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VFailingAssertTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VFailingAssertTester___024root__trace_register(VFailingAssertTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFailingAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VFailingAssertTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VFailingAssertTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VFailingAssertTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VFailingAssertTester___024root__trace_full_sub_0(VFailingAssertTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VFailingAssertTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester___024root__trace_full_top_0\n"); );
    // Init
    VFailingAssertTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFailingAssertTester___024root*>(voidSelf);
    VFailingAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFailingAssertTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VFailingAssertTester___024root__trace_full_sub_0(VFailingAssertTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFailingAssertTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFailingAssertTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullCData(oldp+3,(vlSelf->FailingAssertTester__DOT__done_value),2);
    tracep->fullBit(oldp+4,((3U == (IData)(vlSelf->FailingAssertTester__DOT__done_value))));
    tracep->fullBit(oldp+5,(((~ (IData)(vlSelf->reset)) 
                             & (3U == (IData)(vlSelf->FailingAssertTester__DOT__done_value)))));
}
