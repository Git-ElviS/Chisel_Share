// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetTester__Syms.h"


VL_ATTR_COLD void VAsyncResetTester___024root__trace_init_sub__TOP__0(VAsyncResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->pushNamePrefix("AsyncResetTester ");
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->declBus(c+6,"cDiv_value", false,-1, 1,0);
    tracep->declBit(c+7,"slowClk", false,-1);
    tracep->declBus(c+1,"count", false,-1, 3,0);
    tracep->declBit(c+2,"wrap_wrap", false,-1);
    tracep->declBit(c+3,"asyncResetNext", false,-1);
    tracep->declBus(c+8,"reg_", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VAsyncResetTester___024root__trace_init_top(VAsyncResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester___024root__trace_init_top\n"); );
    // Body
    VAsyncResetTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAsyncResetTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VAsyncResetTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VAsyncResetTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VAsyncResetTester___024root__trace_register(VAsyncResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VAsyncResetTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VAsyncResetTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VAsyncResetTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAsyncResetTester___024root__trace_full_sub_0(VAsyncResetTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAsyncResetTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester___024root__trace_full_top_0\n"); );
    // Init
    VAsyncResetTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAsyncResetTester___024root*>(voidSelf);
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAsyncResetTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VAsyncResetTester___024root__trace_full_sub_0(VAsyncResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->AsyncResetTester__DOT__count),4);
    tracep->fullBit(oldp+2,((0xfU == (IData)(vlSelf->AsyncResetTester__DOT__count))));
    tracep->fullBit(oldp+3,(vlSelf->AsyncResetTester__DOT__asyncResetNext));
    tracep->fullBit(oldp+4,(vlSelf->clock));
    tracep->fullBit(oldp+5,(vlSelf->reset));
    tracep->fullCData(oldp+6,(vlSelf->AsyncResetTester__DOT__cDiv_value),2);
    tracep->fullBit(oldp+7,(vlSelf->AsyncResetTester__DOT__slowClk));
    tracep->fullCData(oldp+8,(vlSelf->AsyncResetTester__DOT__reg_),8);
}
