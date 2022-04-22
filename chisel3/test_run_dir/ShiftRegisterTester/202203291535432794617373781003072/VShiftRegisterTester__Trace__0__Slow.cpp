// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VShiftRegisterTester__Syms.h"


VL_ATTR_COLD void VShiftRegisterTester___024root__trace_init_sub__TOP__0(VShiftRegisterTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftRegisterTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+7,"clock", false,-1);
    tracep->declBit(c+8,"reset", false,-1);
    tracep->pushNamePrefix("ShiftRegisterTester ");
    tracep->declBit(c+7,"clock", false,-1);
    tracep->declBit(c+8,"reset", false,-1);
    tracep->declBus(c+1,"cnt", false,-1, 2,0);
    tracep->declBit(c+2,"wrap_wrap", false,-1);
    tracep->declBus(c+3,"shifter_0", false,-1, 1,0);
    tracep->declBus(c+4,"shifter_1", false,-1, 1,0);
    tracep->declBus(c+5,"shifter_2", false,-1, 1,0);
    tracep->declBus(c+6,"expected", false,-1, 2,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VShiftRegisterTester___024root__trace_init_top(VShiftRegisterTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftRegisterTester___024root__trace_init_top\n"); );
    // Body
    VShiftRegisterTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VShiftRegisterTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VShiftRegisterTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VShiftRegisterTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VShiftRegisterTester___024root__trace_register(VShiftRegisterTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftRegisterTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VShiftRegisterTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VShiftRegisterTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VShiftRegisterTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VShiftRegisterTester___024root__trace_full_sub_0(VShiftRegisterTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VShiftRegisterTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftRegisterTester___024root__trace_full_top_0\n"); );
    // Init
    VShiftRegisterTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VShiftRegisterTester___024root*>(voidSelf);
    VShiftRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VShiftRegisterTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VShiftRegisterTester___024root__trace_full_sub_0(VShiftRegisterTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VShiftRegisterTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShiftRegisterTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->ShiftRegisterTester__DOT__cnt),3);
    tracep->fullBit(oldp+2,((5U == (IData)(vlSelf->ShiftRegisterTester__DOT__cnt))));
    tracep->fullCData(oldp+3,(vlSelf->ShiftRegisterTester__DOT__shifter_0),2);
    tracep->fullCData(oldp+4,(vlSelf->ShiftRegisterTester__DOT__shifter_1),2);
    tracep->fullCData(oldp+5,(vlSelf->ShiftRegisterTester__DOT__shifter_2),2);
    tracep->fullCData(oldp+6,((7U & ((IData)(vlSelf->ShiftRegisterTester__DOT__cnt) 
                                     - (IData)(3U)))),3);
    tracep->fullBit(oldp+7,(vlSelf->clock));
    tracep->fullBit(oldp+8,(vlSelf->reset));
}
