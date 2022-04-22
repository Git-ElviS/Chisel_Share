// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShiftResetTester__Syms.h"


VL_ATTR_COLD void VShiftResetTester___024root__trace_init_sub__TOP__0(VShiftResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->pushNamePrefix("ShiftResetTester ");
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->declBit(c+1,"cntVal", false,-1);
    tracep->declBus(c+2,"sr_r", false,-1, 4,0);
    tracep->declBus(c+3,"sr_r_1", false,-1, 4,0);
    tracep->declBus(c+4,"sr", false,-1, 4,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VShiftResetTester___024root__trace_init_top(VShiftResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester___024root__trace_init_top\n"); );
    // Body
    VShiftResetTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VShiftResetTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VShiftResetTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VShiftResetTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VShiftResetTester___024root__trace_register(VShiftResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VShiftResetTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VShiftResetTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VShiftResetTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VShiftResetTester___024root__trace_full_sub_0(VShiftResetTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VShiftResetTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester___024root__trace_full_top_0\n"); );
    // Init
    VShiftResetTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VShiftResetTester___024root*>(voidSelf);
    VShiftResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VShiftResetTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VShiftResetTester___024root__trace_full_sub_0(VShiftResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftResetTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->ShiftResetTester__DOT__cntVal));
    tracep->fullCData(oldp+2,(vlSelf->ShiftResetTester__DOT__sr_r),5);
    tracep->fullCData(oldp+3,(vlSelf->ShiftResetTester__DOT__sr_r_1),5);
    tracep->fullCData(oldp+4,(vlSelf->ShiftResetTester__DOT__sr),5);
    tracep->fullBit(oldp+5,(vlSelf->clock));
    tracep->fullBit(oldp+6,(vlSelf->reset));
}
