// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VChiselRunners_Anon__Syms.h"


VL_ATTR_COLD void VChiselRunners_Anon___024root__trace_init_sub__TOP__0(VChiselRunners_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VChiselRunners_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("ChiselRunners_Anon ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"x", false,-1, 3,0);
    tracep->declBit(c+4,"done_value", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VChiselRunners_Anon___024root__trace_init_top(VChiselRunners_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VChiselRunners_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon___024root__trace_init_top\n"); );
    // Body
    VChiselRunners_Anon___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VChiselRunners_Anon___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VChiselRunners_Anon___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VChiselRunners_Anon___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VChiselRunners_Anon___024root__trace_register(VChiselRunners_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VChiselRunners_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VChiselRunners_Anon___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VChiselRunners_Anon___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VChiselRunners_Anon___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VChiselRunners_Anon___024root__trace_full_sub_0(VChiselRunners_Anon___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VChiselRunners_Anon___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon___024root__trace_full_top_0\n"); );
    // Init
    VChiselRunners_Anon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VChiselRunners_Anon___024root*>(voidSelf);
    VChiselRunners_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VChiselRunners_Anon___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VChiselRunners_Anon___024root__trace_full_sub_0(VChiselRunners_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VChiselRunners_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChiselRunners_Anon___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullCData(oldp+3,(vlSelf->ChiselRunners_Anon__DOT__x),4);
    tracep->fullBit(oldp+4,(vlSelf->ChiselRunners_Anon__DOT__done_value));
}
