// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParameterizedAggregateOneHotTester__Syms.h"


VL_ATTR_COLD void VParameterizedAggregateOneHotTester___024root__trace_init_sub__TOP__0(VParameterizedAggregateOneHotTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedAggregateOneHotTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedAggregateOneHotTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("ParameterizedAggregateOneHotTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"dut_io_selectors_1", false,-1);
    tracep->declBit(c+3,"dut_io_selectors_2", false,-1);
    tracep->declBit(c+3,"dut_io_selectors_3", false,-1);
    tracep->declBus(c+4,"dut_io_out_v_0", false,-1, 7,0);
    tracep->declBus(c+4,"dut_io_out_v_1", false,-1, 7,0);
    tracep->declBus(c+5,"dut_io_out_a_f1", false,-1, 6,0);
    tracep->declBus(c+6,"dut_io_out_a_f2", false,-1, 8,0);
    tracep->declBit(c+7,"dut_1_io_selectors_1", false,-1);
    tracep->declBit(c+3,"dut_1_io_selectors_2", false,-1);
    tracep->declBit(c+3,"dut_1_io_selectors_3", false,-1);
    tracep->declBus(c+8,"dut_1_io_out_v_0", false,-1, 7,0);
    tracep->declBus(c+9,"dut_1_io_out_v_1", false,-1, 7,0);
    tracep->declBus(c+10,"dut_1_io_out_a_f1", false,-1, 6,0);
    tracep->declBus(c+11,"dut_1_io_out_a_f2", false,-1, 8,0);
    tracep->declBit(c+3,"dut_2_io_selectors_1", false,-1);
    tracep->declBit(c+7,"dut_2_io_selectors_2", false,-1);
    tracep->declBit(c+3,"dut_2_io_selectors_3", false,-1);
    tracep->declBus(c+9,"dut_2_io_out_v_0", false,-1, 7,0);
    tracep->declBus(c+12,"dut_2_io_out_v_1", false,-1, 7,0);
    tracep->declBus(c+13,"dut_2_io_out_a_f1", false,-1, 6,0);
    tracep->declBus(c+14,"dut_2_io_out_a_f2", false,-1, 8,0);
    tracep->declBit(c+3,"dut_3_io_selectors_1", false,-1);
    tracep->declBit(c+3,"dut_3_io_selectors_2", false,-1);
    tracep->declBit(c+7,"dut_3_io_selectors_3", false,-1);
    tracep->declBus(c+15,"dut_3_io_out_v_0", false,-1, 7,0);
    tracep->declBus(c+16,"dut_3_io_out_v_1", false,-1, 7,0);
    tracep->declBus(c+17,"dut_3_io_out_a_f1", false,-1, 6,0);
    tracep->declBus(c+18,"dut_3_io_out_a_f2", false,-1, 8,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+3,"io_selectors_1", false,-1);
    tracep->declBit(c+3,"io_selectors_2", false,-1);
    tracep->declBit(c+3,"io_selectors_3", false,-1);
    tracep->declBus(c+4,"io_out_v_0", false,-1, 7,0);
    tracep->declBus(c+4,"io_out_v_1", false,-1, 7,0);
    tracep->declBus(c+5,"io_out_a_f1", false,-1, 6,0);
    tracep->declBus(c+6,"io_out_a_f2", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dut_1 ");
    tracep->declBit(c+7,"io_selectors_1", false,-1);
    tracep->declBit(c+3,"io_selectors_2", false,-1);
    tracep->declBit(c+3,"io_selectors_3", false,-1);
    tracep->declBus(c+8,"io_out_v_0", false,-1, 7,0);
    tracep->declBus(c+9,"io_out_v_1", false,-1, 7,0);
    tracep->declBus(c+10,"io_out_a_f1", false,-1, 6,0);
    tracep->declBus(c+11,"io_out_a_f2", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dut_2 ");
    tracep->declBit(c+3,"io_selectors_1", false,-1);
    tracep->declBit(c+7,"io_selectors_2", false,-1);
    tracep->declBit(c+3,"io_selectors_3", false,-1);
    tracep->declBus(c+9,"io_out_v_0", false,-1, 7,0);
    tracep->declBus(c+12,"io_out_v_1", false,-1, 7,0);
    tracep->declBus(c+13,"io_out_a_f1", false,-1, 6,0);
    tracep->declBus(c+14,"io_out_a_f2", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dut_3 ");
    tracep->declBit(c+3,"io_selectors_1", false,-1);
    tracep->declBit(c+3,"io_selectors_2", false,-1);
    tracep->declBit(c+7,"io_selectors_3", false,-1);
    tracep->declBus(c+15,"io_out_v_0", false,-1, 7,0);
    tracep->declBus(c+16,"io_out_v_1", false,-1, 7,0);
    tracep->declBus(c+17,"io_out_a_f1", false,-1, 6,0);
    tracep->declBus(c+18,"io_out_a_f2", false,-1, 8,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VParameterizedAggregateOneHotTester___024root__trace_init_top(VParameterizedAggregateOneHotTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedAggregateOneHotTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedAggregateOneHotTester___024root__trace_init_top\n"); );
    // Body
    VParameterizedAggregateOneHotTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VParameterizedAggregateOneHotTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VParameterizedAggregateOneHotTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VParameterizedAggregateOneHotTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VParameterizedAggregateOneHotTester___024root__trace_register(VParameterizedAggregateOneHotTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedAggregateOneHotTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedAggregateOneHotTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VParameterizedAggregateOneHotTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VParameterizedAggregateOneHotTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VParameterizedAggregateOneHotTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VParameterizedAggregateOneHotTester___024root__trace_full_sub_0(VParameterizedAggregateOneHotTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VParameterizedAggregateOneHotTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedAggregateOneHotTester___024root__trace_full_top_0\n"); );
    // Init
    VParameterizedAggregateOneHotTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VParameterizedAggregateOneHotTester___024root*>(voidSelf);
    VParameterizedAggregateOneHotTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VParameterizedAggregateOneHotTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VParameterizedAggregateOneHotTester___024root__trace_full_sub_0(VParameterizedAggregateOneHotTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedAggregateOneHotTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedAggregateOneHotTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullBit(oldp+3,(0U));
    tracep->fullCData(oldp+4,(0U),8);
    tracep->fullCData(oldp+5,(0U),7);
    tracep->fullSData(oldp+6,(0U),9);
    tracep->fullBit(oldp+7,(1U));
    tracep->fullCData(oldp+8,(4U),8);
    tracep->fullCData(oldp+9,(8U),8);
    tracep->fullCData(oldp+10,(6U),7);
    tracep->fullSData(oldp+11,(0x20U),9);
    tracep->fullCData(oldp+12,(0x10U),8);
    tracep->fullCData(oldp+13,(0xcU),7);
    tracep->fullSData(oldp+14,(0x40U),9);
    tracep->fullCData(oldp+15,(0xcU),8);
    tracep->fullCData(oldp+16,(0x18U),8);
    tracep->fullCData(oldp+17,(0x12U),7);
    tracep->fullSData(oldp+18,(0x60U),9);
}
