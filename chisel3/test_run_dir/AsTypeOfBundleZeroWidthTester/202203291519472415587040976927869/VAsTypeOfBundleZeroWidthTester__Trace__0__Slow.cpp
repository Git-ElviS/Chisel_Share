// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsTypeOfBundleZeroWidthTester__Syms.h"


VL_ATTR_COLD void VAsTypeOfBundleZeroWidthTester___024root__trace_init_sub__TOP__0(VAsTypeOfBundleZeroWidthTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsTypeOfBundleZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfBundleZeroWidthTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("AsTypeOfBundleZeroWidthTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VAsTypeOfBundleZeroWidthTester___024root__trace_init_top(VAsTypeOfBundleZeroWidthTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsTypeOfBundleZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfBundleZeroWidthTester___024root__trace_init_top\n"); );
    // Body
    VAsTypeOfBundleZeroWidthTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAsTypeOfBundleZeroWidthTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VAsTypeOfBundleZeroWidthTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VAsTypeOfBundleZeroWidthTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VAsTypeOfBundleZeroWidthTester___024root__trace_register(VAsTypeOfBundleZeroWidthTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsTypeOfBundleZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfBundleZeroWidthTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VAsTypeOfBundleZeroWidthTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VAsTypeOfBundleZeroWidthTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VAsTypeOfBundleZeroWidthTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAsTypeOfBundleZeroWidthTester___024root__trace_full_sub_0(VAsTypeOfBundleZeroWidthTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAsTypeOfBundleZeroWidthTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfBundleZeroWidthTester___024root__trace_full_top_0\n"); );
    // Init
    VAsTypeOfBundleZeroWidthTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAsTypeOfBundleZeroWidthTester___024root*>(voidSelf);
    VAsTypeOfBundleZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAsTypeOfBundleZeroWidthTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VAsTypeOfBundleZeroWidthTester___024root__trace_full_sub_0(VAsTypeOfBundleZeroWidthTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsTypeOfBundleZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsTypeOfBundleZeroWidthTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
}
