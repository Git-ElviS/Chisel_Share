// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEnableTester__Syms.h"


VL_ATTR_COLD void VEnableTester___024root__trace_init_sub__TOP__0(VEnableTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VEnableTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->pushNamePrefix("EnableTester ");
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->declBus(c+1,"ens", false,-1, 28,0);
    tracep->declBus(c+2,"cntEnVal", false,-1, 4,0);
    tracep->declBus(c+3,"done_value", false,-1, 5,0);
    tracep->declBit(c+4,"done_wrap_wrap", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VEnableTester___024root__trace_init_top(VEnableTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VEnableTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester___024root__trace_init_top\n"); );
    // Body
    VEnableTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VEnableTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VEnableTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VEnableTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VEnableTester___024root__trace_register(VEnableTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VEnableTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VEnableTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VEnableTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VEnableTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VEnableTester___024root__trace_full_sub_0(VEnableTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VEnableTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester___024root__trace_full_top_0\n"); );
    // Init
    VEnableTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VEnableTester___024root*>(voidSelf);
    VEnableTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VEnableTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VEnableTester___024root__trace_full_sub_0(VEnableTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VEnableTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnableTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->EnableTester__DOT__ens),29);
    tracep->fullCData(oldp+2,(vlSelf->EnableTester__DOT__cntEnVal),5);
    tracep->fullCData(oldp+3,(vlSelf->EnableTester__DOT__done_value),6);
    tracep->fullBit(oldp+4,((0x20U == (IData)(vlSelf->EnableTester__DOT__done_value))));
    tracep->fullBit(oldp+5,(vlSelf->clock));
    tracep->fullBit(oldp+6,(vlSelf->reset));
}
