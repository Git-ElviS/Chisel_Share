// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTopTester__Syms.h"


VL_ATTR_COLD void VTopTester___024root__trace_init_sub__TOP__0(VTopTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTopTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("TopTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+1,"dut_clock", false,-1);
    tracep->declBit(c+2,"dut_reset", false,-1);
    tracep->declBit(c+3,"done_value", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+4,"sources_1_x_1", false,-1, 3,0);
    tracep->declBus(c+5,"sources_2_x_0", false,-1, 3,0);
    tracep->declBus(c+6,"sinks_0_out", false,-1, 3,0);
    tracep->declBus(c+4,"sinks_1_out", false,-1, 3,0);
    tracep->declBus(c+4,"sinks_1_x_1", false,-1, 3,0);
    tracep->declBus(c+4,"sinks_2_out", false,-1, 3,0);
    tracep->declBus(c+4,"sinks_2_x_1", false,-1, 3,0);
    tracep->declBus(c+5,"sinks_3_out", false,-1, 3,0);
    tracep->declBus(c+5,"sinks_3_x_1", false,-1, 3,0);
    tracep->declBus(c+5,"sinks_4_out", false,-1, 3,0);
    tracep->declBus(c+5,"sinks_4_x_1", false,-1, 3,0);
    tracep->declBus(c+5,"sinks_5_out", false,-1, 3,0);
    tracep->declBus(c+5,"sinks_5_x_1", false,-1, 3,0);
    tracep->pushNamePrefix("sinks_0 ");
    tracep->declBus(c+6,"out", false,-1, 3,0);
    tracep->declBus(c+6,"x", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sinks_1 ");
    tracep->declBus(c+4,"out", false,-1, 3,0);
    tracep->declBus(c+4,"x_1", false,-1, 3,0);
    tracep->declBus(c+4,"x", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sinks_2 ");
    tracep->declBus(c+4,"out", false,-1, 3,0);
    tracep->declBus(c+4,"x_1", false,-1, 3,0);
    tracep->declBus(c+4,"x", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sinks_3 ");
    tracep->declBus(c+5,"out", false,-1, 3,0);
    tracep->declBus(c+5,"x_1", false,-1, 3,0);
    tracep->declBus(c+5,"x", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sinks_4 ");
    tracep->declBus(c+5,"out", false,-1, 3,0);
    tracep->declBus(c+5,"x_1", false,-1, 3,0);
    tracep->declBus(c+5,"x", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sinks_5 ");
    tracep->declBus(c+5,"out", false,-1, 3,0);
    tracep->declBus(c+5,"x_1", false,-1, 3,0);
    tracep->declBus(c+5,"x", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sources_0 ");
    tracep->declBus(c+6,"x", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sources_1 ");
    tracep->declBus(c+4,"x_1", false,-1, 3,0);
    tracep->declBus(c+4,"x", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sources_2 ");
    tracep->declBus(c+5,"x_0", false,-1, 3,0);
    tracep->declBus(c+5,"x", false,-1, 3,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VTopTester___024root__trace_init_top(VTopTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTopTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester___024root__trace_init_top\n"); );
    // Body
    VTopTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTopTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VTopTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VTopTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTopTester___024root__trace_register(VTopTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTopTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTopTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTopTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTopTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTopTester___024root__trace_full_sub_0(VTopTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTopTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester___024root__trace_full_top_0\n"); );
    // Init
    VTopTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTopTester___024root*>(voidSelf);
    VTopTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTopTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VTopTester___024root__trace_full_sub_0(VTopTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTopTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullBit(oldp+3,(vlSelf->TopTester__DOT__done_value));
    tracep->fullCData(oldp+4,(1U),4);
    tracep->fullCData(oldp+5,(2U),4);
    tracep->fullCData(oldp+6,(0U),4);
}
