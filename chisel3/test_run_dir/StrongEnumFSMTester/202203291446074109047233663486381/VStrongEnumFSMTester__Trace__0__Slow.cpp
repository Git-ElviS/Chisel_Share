// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStrongEnumFSMTester__Syms.h"


VL_ATTR_COLD void VStrongEnumFSMTester___024root__trace_init_sub__TOP__0(VStrongEnumFSMTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VStrongEnumFSMTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+7,"reset", false,-1);
    tracep->pushNamePrefix("StrongEnumFSMTester ");
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+7,"reset", false,-1);
    tracep->declBit(c+6,"dut_clock", false,-1);
    tracep->declBit(c+7,"dut_reset", false,-1);
    tracep->declBit(c+1,"dut_io_in", false,-1);
    tracep->declBit(c+2,"dut_io_out", false,-1);
    tracep->declBus(c+3,"dut_io_state", false,-1, 1,0);
    tracep->declBus(c+4,"value", false,-1, 3,0);
    tracep->declBit(c+5,"wrap", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+7,"reset", false,-1);
    tracep->declBit(c+1,"io_in", false,-1);
    tracep->declBit(c+2,"io_out", false,-1);
    tracep->declBus(c+3,"io_state", false,-1, 1,0);
    tracep->declBus(c+3,"state", false,-1, 1,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VStrongEnumFSMTester___024root__trace_init_top(VStrongEnumFSMTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VStrongEnumFSMTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester___024root__trace_init_top\n"); );
    // Body
    VStrongEnumFSMTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VStrongEnumFSMTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VStrongEnumFSMTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VStrongEnumFSMTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VStrongEnumFSMTester___024root__trace_register(VStrongEnumFSMTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VStrongEnumFSMTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VStrongEnumFSMTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VStrongEnumFSMTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VStrongEnumFSMTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VStrongEnumFSMTester___024root__trace_full_sub_0(VStrongEnumFSMTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VStrongEnumFSMTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester___024root__trace_full_top_0\n"); );
    // Init
    VStrongEnumFSMTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VStrongEnumFSMTester___024root*>(voidSelf);
    VStrongEnumFSMTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VStrongEnumFSMTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VStrongEnumFSMTester___024root__trace_full_sub_0(VStrongEnumFSMTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VStrongEnumFSMTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStrongEnumFSMTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->StrongEnumFSMTester__DOT__dut_io_in));
    tracep->fullBit(oldp+2,((2U == (IData)(vlSelf->StrongEnumFSMTester__DOT__dut__DOT__state))));
    tracep->fullCData(oldp+3,(vlSelf->StrongEnumFSMTester__DOT__dut__DOT__state),2);
    tracep->fullCData(oldp+4,(vlSelf->StrongEnumFSMTester__DOT__value),4);
    tracep->fullBit(oldp+5,((9U == (IData)(vlSelf->StrongEnumFSMTester__DOT__value))));
    tracep->fullBit(oldp+6,(vlSelf->clock));
    tracep->fullBit(oldp+7,(vlSelf->reset));
}
