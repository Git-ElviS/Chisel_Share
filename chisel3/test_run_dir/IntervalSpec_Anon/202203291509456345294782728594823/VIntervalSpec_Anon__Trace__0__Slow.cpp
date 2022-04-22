// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIntervalSpec_Anon__Syms.h"


VL_ATTR_COLD void VIntervalSpec_Anon___024root__trace_init_sub__TOP__0(VIntervalSpec_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSpec_Anon___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("IntervalSpec_Anon ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"wrappedValue_25", false,-1, 5,0);
    tracep->declBus(c+4,"wrappedValue_26", false,-1, 5,0);
    tracep->declBus(c+5,"wrappedValue_27", false,-1, 5,0);
    tracep->declBus(c+6,"wrappedValue_28", false,-1, 5,0);
    tracep->declBus(c+7,"wrappedValue_29", false,-1, 5,0);
    tracep->declBus(c+8,"wrappedValue_30", false,-1, 5,0);
    tracep->declBus(c+9,"wrappedValue_31", false,-1, 5,0);
    tracep->declBus(c+10,"wrappedValue_32", false,-1, 5,0);
    tracep->declBus(c+11,"wrappedValue_33", false,-1, 5,0);
    tracep->declBus(c+12,"wrappedValue_34", false,-1, 5,0);
    tracep->declBus(c+13,"wrappedValue_35", false,-1, 5,0);
    tracep->declBus(c+14,"wrappedValue_36", false,-1, 5,0);
    tracep->declBus(c+15,"wrappedValue_37", false,-1, 5,0);
    tracep->declBus(c+16,"wrappedValue_38", false,-1, 5,0);
    tracep->declBus(c+17,"wrappedValue_39", false,-1, 5,0);
    tracep->declBus(c+18,"wrappedValue_40", false,-1, 5,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VIntervalSpec_Anon___024root__trace_init_top(VIntervalSpec_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSpec_Anon___024root__trace_init_top\n"); );
    // Body
    VIntervalSpec_Anon___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VIntervalSpec_Anon___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VIntervalSpec_Anon___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VIntervalSpec_Anon___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VIntervalSpec_Anon___024root__trace_register(VIntervalSpec_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSpec_Anon___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VIntervalSpec_Anon___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VIntervalSpec_Anon___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VIntervalSpec_Anon___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VIntervalSpec_Anon___024root__trace_full_sub_0(VIntervalSpec_Anon___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VIntervalSpec_Anon___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSpec_Anon___024root__trace_full_top_0\n"); );
    // Init
    VIntervalSpec_Anon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VIntervalSpec_Anon___024root*>(voidSelf);
    VIntervalSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VIntervalSpec_Anon___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VIntervalSpec_Anon___024root__trace_full_sub_0(VIntervalSpec_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VIntervalSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntervalSpec_Anon___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullCData(oldp+3,(8U),6);
    tracep->fullCData(oldp+4,(9U),6);
    tracep->fullCData(oldp+5,(0xaU),6);
    tracep->fullCData(oldp+6,(0xbU),6);
    tracep->fullCData(oldp+7,(0xcU),6);
    tracep->fullCData(oldp+8,(0xdU),6);
    tracep->fullCData(oldp+9,(0xeU),6);
    tracep->fullCData(oldp+10,(0xfU),6);
    tracep->fullCData(oldp+11,(0x10U),6);
    tracep->fullCData(oldp+12,(0x11U),6);
    tracep->fullCData(oldp+13,(0x12U),6);
    tracep->fullCData(oldp+14,(0x13U),6);
    tracep->fullCData(oldp+15,(0x14U),6);
    tracep->fullCData(oldp+16,(0x15U),6);
    tracep->fullCData(oldp+17,(0x16U),6);
    tracep->fullCData(oldp+18,(0x17U),6);
}
