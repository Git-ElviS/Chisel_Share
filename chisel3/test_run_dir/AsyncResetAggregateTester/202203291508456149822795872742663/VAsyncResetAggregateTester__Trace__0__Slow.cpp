// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetAggregateTester__Syms.h"


VL_ATTR_COLD void VAsyncResetAggregateTester___024root__trace_init_sub__TOP__0(VAsyncResetAggregateTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+8,"clock", false,-1);
    tracep->declBit(c+9,"reset", false,-1);
    tracep->pushNamePrefix("AsyncResetAggregateTester ");
    tracep->declBit(c+8,"clock", false,-1);
    tracep->declBit(c+9,"reset", false,-1);
    tracep->declBus(c+10,"cDiv_value", false,-1, 1,0);
    tracep->declBit(c+11,"slowClk", false,-1);
    tracep->declBus(c+5,"count", false,-1, 3,0);
    tracep->declBit(c+6,"wrap_wrap", false,-1);
    tracep->declBit(c+7,"asyncResetNext", false,-1);
    tracep->declBus(c+1,"reg_0_x", false,-1, 7,0);
    tracep->declBus(c+2,"reg_0_y", false,-1, 7,0);
    tracep->declBus(c+3,"reg_1_x", false,-1, 7,0);
    tracep->declBus(c+4,"reg_1_y", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VAsyncResetAggregateTester___024root__trace_init_top(VAsyncResetAggregateTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root__trace_init_top\n"); );
    // Body
    VAsyncResetAggregateTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAsyncResetAggregateTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VAsyncResetAggregateTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VAsyncResetAggregateTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VAsyncResetAggregateTester___024root__trace_register(VAsyncResetAggregateTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VAsyncResetAggregateTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VAsyncResetAggregateTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VAsyncResetAggregateTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAsyncResetAggregateTester___024root__trace_full_sub_0(VAsyncResetAggregateTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAsyncResetAggregateTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root__trace_full_top_0\n"); );
    // Init
    VAsyncResetAggregateTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAsyncResetAggregateTester___024root*>(voidSelf);
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAsyncResetAggregateTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VAsyncResetAggregateTester___024root__trace_full_sub_0(VAsyncResetAggregateTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetAggregateTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetAggregateTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->AsyncResetAggregateTester__DOT__reg_0_x),8);
    tracep->fullCData(oldp+2,(vlSelf->AsyncResetAggregateTester__DOT__reg_0_y),8);
    tracep->fullCData(oldp+3,(vlSelf->AsyncResetAggregateTester__DOT__reg_1_x),8);
    tracep->fullCData(oldp+4,(vlSelf->AsyncResetAggregateTester__DOT__reg_1_y),8);
    tracep->fullCData(oldp+5,(vlSelf->AsyncResetAggregateTester__DOT__count),4);
    tracep->fullBit(oldp+6,((0xfU == (IData)(vlSelf->AsyncResetAggregateTester__DOT__count))));
    tracep->fullBit(oldp+7,(vlSelf->AsyncResetAggregateTester__DOT__asyncResetNext));
    tracep->fullBit(oldp+8,(vlSelf->clock));
    tracep->fullBit(oldp+9,(vlSelf->reset));
    tracep->fullCData(oldp+10,(vlSelf->AsyncResetAggregateTester__DOT__cDiv_value),2);
    tracep->fullBit(oldp+11,(vlSelf->AsyncResetAggregateTester__DOT__slowClk));
}
