// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParameterizedOneHotTester__Syms.h"


VL_ATTR_COLD void VParameterizedOneHotTester___024root__trace_init_sub__TOP__0(VParameterizedOneHotTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedOneHotTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedOneHotTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("ParameterizedOneHotTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"dut_io_selectors_0", false,-1);
    tracep->declBit(c+4,"dut_io_selectors_1", false,-1);
    tracep->declBit(c+4,"dut_io_selectors_2", false,-1);
    tracep->declBit(c+4,"dut_io_selectors_3", false,-1);
    tracep->declBus(c+5,"dut_io_out", false,-1, 7,0);
    tracep->declBit(c+4,"dut_1_io_selectors_0", false,-1);
    tracep->declBit(c+3,"dut_1_io_selectors_1", false,-1);
    tracep->declBit(c+4,"dut_1_io_selectors_2", false,-1);
    tracep->declBit(c+4,"dut_1_io_selectors_3", false,-1);
    tracep->declBus(c+6,"dut_1_io_out", false,-1, 7,0);
    tracep->declBit(c+4,"dut_2_io_selectors_0", false,-1);
    tracep->declBit(c+4,"dut_2_io_selectors_1", false,-1);
    tracep->declBit(c+3,"dut_2_io_selectors_2", false,-1);
    tracep->declBit(c+4,"dut_2_io_selectors_3", false,-1);
    tracep->declBus(c+7,"dut_2_io_out", false,-1, 7,0);
    tracep->declBit(c+4,"dut_3_io_selectors_0", false,-1);
    tracep->declBit(c+4,"dut_3_io_selectors_1", false,-1);
    tracep->declBit(c+4,"dut_3_io_selectors_2", false,-1);
    tracep->declBit(c+3,"dut_3_io_selectors_3", false,-1);
    tracep->declBus(c+8,"dut_3_io_out", false,-1, 7,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+3,"io_selectors_0", false,-1);
    tracep->declBit(c+4,"io_selectors_1", false,-1);
    tracep->declBit(c+4,"io_selectors_2", false,-1);
    tracep->declBit(c+4,"io_selectors_3", false,-1);
    tracep->declBus(c+5,"io_out", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dut_1 ");
    tracep->declBit(c+4,"io_selectors_0", false,-1);
    tracep->declBit(c+3,"io_selectors_1", false,-1);
    tracep->declBit(c+4,"io_selectors_2", false,-1);
    tracep->declBit(c+4,"io_selectors_3", false,-1);
    tracep->declBus(c+6,"io_out", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dut_2 ");
    tracep->declBit(c+4,"io_selectors_0", false,-1);
    tracep->declBit(c+4,"io_selectors_1", false,-1);
    tracep->declBit(c+3,"io_selectors_2", false,-1);
    tracep->declBit(c+4,"io_selectors_3", false,-1);
    tracep->declBus(c+7,"io_out", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dut_3 ");
    tracep->declBit(c+4,"io_selectors_0", false,-1);
    tracep->declBit(c+4,"io_selectors_1", false,-1);
    tracep->declBit(c+4,"io_selectors_2", false,-1);
    tracep->declBit(c+3,"io_selectors_3", false,-1);
    tracep->declBus(c+8,"io_out", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VParameterizedOneHotTester___024root__trace_init_top(VParameterizedOneHotTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedOneHotTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedOneHotTester___024root__trace_init_top\n"); );
    // Body
    VParameterizedOneHotTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VParameterizedOneHotTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VParameterizedOneHotTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VParameterizedOneHotTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VParameterizedOneHotTester___024root__trace_register(VParameterizedOneHotTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedOneHotTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedOneHotTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VParameterizedOneHotTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VParameterizedOneHotTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VParameterizedOneHotTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VParameterizedOneHotTester___024root__trace_full_sub_0(VParameterizedOneHotTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VParameterizedOneHotTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedOneHotTester___024root__trace_full_top_0\n"); );
    // Init
    VParameterizedOneHotTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VParameterizedOneHotTester___024root*>(voidSelf);
    VParameterizedOneHotTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VParameterizedOneHotTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VParameterizedOneHotTester___024root__trace_full_sub_0(VParameterizedOneHotTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedOneHotTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedOneHotTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullBit(oldp+3,(1U));
    tracep->fullBit(oldp+4,(0U));
    tracep->fullCData(oldp+5,(0xfdU),8);
    tracep->fullCData(oldp+6,(0xfbU),8);
    tracep->fullCData(oldp+7,(0xf9U),8);
    tracep->fullCData(oldp+8,(0xf5U),8);
}
