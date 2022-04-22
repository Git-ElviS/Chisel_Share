// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VClockDividerTest__Syms.h"


VL_ATTR_COLD void VClockDividerTest___024root__trace_init_sub__TOP__0(VClockDividerTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VClockDividerTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDividerTest___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("ClockDividerTest ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"cDiv", false,-1);
    tracep->declBus(c+4,"reg1", false,-1, 7,0);
    tracep->declBus(c+5,"reg2", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VClockDividerTest___024root__trace_init_top(VClockDividerTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VClockDividerTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDividerTest___024root__trace_init_top\n"); );
    // Body
    VClockDividerTest___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VClockDividerTest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VClockDividerTest___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VClockDividerTest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VClockDividerTest___024root__trace_register(VClockDividerTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VClockDividerTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDividerTest___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VClockDividerTest___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VClockDividerTest___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VClockDividerTest___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VClockDividerTest___024root__trace_full_sub_0(VClockDividerTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VClockDividerTest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDividerTest___024root__trace_full_top_0\n"); );
    // Init
    VClockDividerTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VClockDividerTest___024root*>(voidSelf);
    VClockDividerTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VClockDividerTest___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VClockDividerTest___024root__trace_full_sub_0(VClockDividerTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VClockDividerTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VClockDividerTest___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullBit(oldp+3,(vlSelf->ClockDividerTest__DOT__cDiv));
    tracep->fullCData(oldp+4,(vlSelf->ClockDividerTest__DOT__reg1),8);
    tracep->fullCData(oldp+5,(vlSelf->ClockDividerTest__DOT__reg2),8);
}
