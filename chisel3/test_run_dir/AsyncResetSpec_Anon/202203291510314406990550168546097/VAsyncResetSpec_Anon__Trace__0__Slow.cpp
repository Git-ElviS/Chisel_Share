// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAsyncResetSpec_Anon__Syms.h"


VL_ATTR_COLD void VAsyncResetSpec_Anon___024root__trace_init_sub__TOP__0(VAsyncResetSpec_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->pushNamePrefix("AsyncResetSpec_Anon ");
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->declBus(c+1,"reg_0", false,-1, 7,0);
    tracep->declBus(c+2,"reg_1", false,-1, 7,0);
    tracep->declBus(c+3,"reg_2", false,-1, 7,0);
    tracep->declBus(c+4,"reg_3", false,-1, 7,0);
    tracep->declBus(c+7,"count", false,-1, 1,0);
    tracep->declBit(c+8,"wrap_wrap", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VAsyncResetSpec_Anon___024root__trace_init_top(VAsyncResetSpec_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon___024root__trace_init_top\n"); );
    // Body
    VAsyncResetSpec_Anon___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAsyncResetSpec_Anon___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VAsyncResetSpec_Anon___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VAsyncResetSpec_Anon___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VAsyncResetSpec_Anon___024root__trace_register(VAsyncResetSpec_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VAsyncResetSpec_Anon___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VAsyncResetSpec_Anon___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VAsyncResetSpec_Anon___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAsyncResetSpec_Anon___024root__trace_full_sub_0(VAsyncResetSpec_Anon___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAsyncResetSpec_Anon___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon___024root__trace_full_top_0\n"); );
    // Init
    VAsyncResetSpec_Anon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAsyncResetSpec_Anon___024root*>(voidSelf);
    VAsyncResetSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAsyncResetSpec_Anon___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VAsyncResetSpec_Anon___024root__trace_full_sub_0(VAsyncResetSpec_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAsyncResetSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAsyncResetSpec_Anon___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->AsyncResetSpec_Anon__DOT__reg_0),8);
    tracep->fullCData(oldp+2,(vlSelf->AsyncResetSpec_Anon__DOT__reg_1),8);
    tracep->fullCData(oldp+3,(vlSelf->AsyncResetSpec_Anon__DOT__reg_2),8);
    tracep->fullCData(oldp+4,(vlSelf->AsyncResetSpec_Anon__DOT__reg_3),8);
    tracep->fullBit(oldp+5,(vlSelf->clock));
    tracep->fullBit(oldp+6,(vlSelf->reset));
    tracep->fullCData(oldp+7,(vlSelf->AsyncResetSpec_Anon__DOT__count),2);
    tracep->fullBit(oldp+8,((3U == (IData)(vlSelf->AsyncResetSpec_Anon__DOT__count))));
}
