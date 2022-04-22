// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGCDTester__Syms.h"


VL_ATTR_COLD void VGCDTester___024root__trace_init_sub__TOP__0(VGCDTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VGCDTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->pushNamePrefix("GCDTester ");
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->declBit(c+5,"dut_clock", false,-1);
    tracep->declBit(c+1,"dut_io_e", false,-1);
    tracep->declBus(c+2,"dut_io_z", false,-1, 31,0);
    tracep->declBit(c+3,"dut_io_v", false,-1);
    tracep->declBit(c+1,"first", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+1,"io_e", false,-1);
    tracep->declBus(c+2,"io_z", false,-1, 31,0);
    tracep->declBit(c+3,"io_v", false,-1);
    tracep->declBus(c+2,"x", false,-1, 31,0);
    tracep->declBus(c+4,"y", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VGCDTester___024root__trace_init_top(VGCDTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VGCDTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester___024root__trace_init_top\n"); );
    // Body
    VGCDTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VGCDTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VGCDTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VGCDTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VGCDTester___024root__trace_register(VGCDTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VGCDTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VGCDTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VGCDTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VGCDTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VGCDTester___024root__trace_full_sub_0(VGCDTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VGCDTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester___024root__trace_full_top_0\n"); );
    // Init
    VGCDTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VGCDTester___024root*>(voidSelf);
    VGCDTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VGCDTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VGCDTester___024root__trace_full_sub_0(VGCDTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VGCDTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGCDTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->GCDTester__DOT__first));
    tracep->fullIData(oldp+2,(vlSelf->GCDTester__DOT__dut__DOT__x),32);
    tracep->fullBit(oldp+3,((0U == vlSelf->GCDTester__DOT__dut__DOT__y)));
    tracep->fullIData(oldp+4,(vlSelf->GCDTester__DOT__dut__DOT__y),32);
    tracep->fullBit(oldp+5,(vlSelf->clock));
    tracep->fullBit(oldp+6,(vlSelf->reset));
}
