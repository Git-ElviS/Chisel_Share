// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShiftTester__Syms.h"


VL_ATTR_COLD void VShiftTester___024root__trace_init_sub__TOP__0(VShiftTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+7,"reset", false,-1);
    tracep->pushNamePrefix("ShiftTester ");
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+7,"reset", false,-1);
    tracep->declBus(c+1,"cntVal", false,-1, 1,0);
    tracep->declBit(c+2,"wrap_wrap", false,-1);
    tracep->declBus(c+3,"sr_r", false,-1, 4,0);
    tracep->declBus(c+4,"sr_r_1", false,-1, 4,0);
    tracep->declBus(c+5,"sr", false,-1, 4,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VShiftTester___024root__trace_init_top(VShiftTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester___024root__trace_init_top\n"); );
    // Body
    VShiftTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VShiftTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VShiftTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VShiftTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VShiftTester___024root__trace_register(VShiftTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VShiftTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VShiftTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VShiftTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VShiftTester___024root__trace_full_sub_0(VShiftTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VShiftTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester___024root__trace_full_top_0\n"); );
    // Init
    VShiftTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VShiftTester___024root*>(voidSelf);
    VShiftTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VShiftTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VShiftTester___024root__trace_full_sub_0(VShiftTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->ShiftTester__DOT__cntVal),2);
    tracep->fullBit(oldp+2,((2U == (IData)(vlSelf->ShiftTester__DOT__cntVal))));
    tracep->fullCData(oldp+3,(vlSelf->ShiftTester__DOT__sr_r),5);
    tracep->fullCData(oldp+4,(vlSelf->ShiftTester__DOT__sr_r_1),5);
    tracep->fullCData(oldp+5,(vlSelf->ShiftTester__DOT__sr),5);
    tracep->fullBit(oldp+6,(vlSelf->clock));
    tracep->fullBit(oldp+7,(vlSelf->reset));
}
