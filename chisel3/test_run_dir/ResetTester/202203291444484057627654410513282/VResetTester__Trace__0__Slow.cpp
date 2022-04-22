// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VResetTester__Syms.h"


VL_ATTR_COLD void VResetTester___024root__trace_init_sub__TOP__0(VResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->pushNamePrefix("ResetTester ");
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->declBit(c+1,"wasReset", false,-1);
    tracep->declBus(c+2,"value", false,-1, 2,0);
    tracep->declBit(c+3,"triggerReset", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VResetTester___024root__trace_init_top(VResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetTester___024root__trace_init_top\n"); );
    // Body
    VResetTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VResetTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VResetTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VResetTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VResetTester___024root__trace_register(VResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VResetTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VResetTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VResetTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VResetTester___024root__trace_full_sub_0(VResetTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VResetTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetTester___024root__trace_full_top_0\n"); );
    // Init
    VResetTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VResetTester___024root*>(voidSelf);
    VResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VResetTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VResetTester___024root__trace_full_sub_0(VResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VResetTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->ResetTester__DOT__wasReset));
    tracep->fullCData(oldp+2,(vlSelf->ResetTester__DOT__value),3);
    tracep->fullBit(oldp+3,((2U == (IData)(vlSelf->ResetTester__DOT__value))));
    tracep->fullBit(oldp+4,(vlSelf->clock));
    tracep->fullBit(oldp+5,(vlSelf->reset));
}
