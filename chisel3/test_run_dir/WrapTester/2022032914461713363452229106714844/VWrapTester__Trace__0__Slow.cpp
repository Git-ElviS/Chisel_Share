// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VWrapTester__Syms.h"


VL_ATTR_COLD void VWrapTester___024root__trace_init_sub__TOP__0(VWrapTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("WrapTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"cnt", false,-1, 1,0);
    tracep->declBit(c+4,"wrap_wrap", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VWrapTester___024root__trace_init_top(VWrapTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester___024root__trace_init_top\n"); );
    // Body
    VWrapTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VWrapTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VWrapTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VWrapTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VWrapTester___024root__trace_register(VWrapTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VWrapTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VWrapTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VWrapTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VWrapTester___024root__trace_full_sub_0(VWrapTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VWrapTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester___024root__trace_full_top_0\n"); );
    // Init
    VWrapTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWrapTester___024root*>(voidSelf);
    VWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VWrapTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VWrapTester___024root__trace_full_sub_0(VWrapTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWrapTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWrapTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullCData(oldp+3,(vlSelf->WrapTester__DOT__cnt),2);
    tracep->fullBit(oldp+4,((2U == (IData)(vlSelf->WrapTester__DOT__cnt))));
}
