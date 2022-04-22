// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAnalogSpec_Anon__Syms.h"


VL_ATTR_COLD void VAnalogSpec_Anon___024root__trace_init_sub__TOP__0(VAnalogSpec_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogSpec_Anon___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("AnalogSpec_Anon ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+4,"writer_in", false,-1, 31,0);
    tracep->declBus(c+5,"mod_out", false,-1, 31,0);
    tracep->declBit(c+3,"cycle", false,-1);
    tracep->pushNamePrefix("mod ");
    tracep->declBus(c+5,"vecBunBus_0_analog", false,-1, 31,0);
    tracep->declBus(c+5,"out", false,-1, 31,0);
    tracep->declBus(c+5,"mod_out", false,-1, 31,0);
    tracep->pushNamePrefix("mod ");
    tracep->declBus(c+5,"bus", false,-1, 31,0);
    tracep->declBus(c+5,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("writer ");
    tracep->declBus(c+5,"bus", false,-1, 31,0);
    tracep->declBus(c+4,"in", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VAnalogSpec_Anon___024root__trace_init_top(VAnalogSpec_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogSpec_Anon___024root__trace_init_top\n"); );
    // Body
    VAnalogSpec_Anon___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAnalogSpec_Anon___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VAnalogSpec_Anon___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VAnalogSpec_Anon___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VAnalogSpec_Anon___024root__trace_register(VAnalogSpec_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogSpec_Anon___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VAnalogSpec_Anon___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VAnalogSpec_Anon___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VAnalogSpec_Anon___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAnalogSpec_Anon___024root__trace_full_sub_0(VAnalogSpec_Anon___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VAnalogSpec_Anon___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogSpec_Anon___024root__trace_full_top_0\n"); );
    // Init
    VAnalogSpec_Anon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAnalogSpec_Anon___024root*>(voidSelf);
    VAnalogSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAnalogSpec_Anon___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VAnalogSpec_Anon___024root__trace_full_sub_0(VAnalogSpec_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAnalogSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAnalogSpec_Anon___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullBit(oldp+3,(vlSelf->AnalogSpec_Anon__DOT__cycle));
    tracep->fullIData(oldp+4,(0xdeadbeefU),32);
    tracep->fullIData(oldp+5,(0xdeadbeefU),32);
}
