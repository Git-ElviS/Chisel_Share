// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegTester__Syms.h"


VL_ATTR_COLD void VRegTester___024root__trace_init_sub__TOP__0(VRegTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+10,"clock", false,-1);
    tracep->declBit(c+11,"reset", false,-1);
    tracep->pushNamePrefix("RegTester ");
    tracep->declBit(c+10,"clock", false,-1);
    tracep->declBit(c+11,"reset", false,-1);
    tracep->declBit(c+10,"dut_clock", false,-1);
    tracep->declBit(c+11,"dut_reset", false,-1);
    tracep->declBus(c+1,"dut_io_out_0", false,-1, 2,0);
    tracep->declBus(c+2,"dut_io_out_1", false,-1, 2,0);
    tracep->declBus(c+3,"dut_io_out_2", false,-1, 2,0);
    tracep->declBus(c+4,"dut_io_out_3", false,-1, 2,0);
    tracep->declBus(c+5,"dut_io_out_4", false,-1, 2,0);
    tracep->declBus(c+6,"dut_io_out_5", false,-1, 2,0);
    tracep->declBus(c+7,"dut_io_out_6", false,-1, 2,0);
    tracep->declBus(c+8,"dut_io_out_7", false,-1, 2,0);
    tracep->declBit(c+9,"doneReg", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+10,"clock", false,-1);
    tracep->declBit(c+11,"reset", false,-1);
    tracep->declBus(c+1,"io_out_0", false,-1, 2,0);
    tracep->declBus(c+2,"io_out_1", false,-1, 2,0);
    tracep->declBus(c+3,"io_out_2", false,-1, 2,0);
    tracep->declBus(c+4,"io_out_3", false,-1, 2,0);
    tracep->declBus(c+5,"io_out_4", false,-1, 2,0);
    tracep->declBus(c+6,"io_out_5", false,-1, 2,0);
    tracep->declBus(c+7,"io_out_6", false,-1, 2,0);
    tracep->declBus(c+8,"io_out_7", false,-1, 2,0);
    tracep->declBus(c+1,"vecReg_0", false,-1, 2,0);
    tracep->declBus(c+2,"vecReg_1", false,-1, 2,0);
    tracep->declBus(c+3,"vecReg_2", false,-1, 2,0);
    tracep->declBus(c+4,"vecReg_3", false,-1, 2,0);
    tracep->declBus(c+5,"vecReg_4", false,-1, 2,0);
    tracep->declBus(c+6,"vecReg_5", false,-1, 2,0);
    tracep->declBus(c+7,"vecReg_6", false,-1, 2,0);
    tracep->declBus(c+8,"vecReg_7", false,-1, 2,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VRegTester___024root__trace_init_top(VRegTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegTester___024root__trace_init_top\n"); );
    // Body
    VRegTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRegTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VRegTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VRegTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRegTester___024root__trace_register(VRegTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VRegTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VRegTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VRegTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRegTester___024root__trace_full_sub_0(VRegTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRegTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegTester___024root__trace_full_top_0\n"); );
    // Init
    VRegTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegTester___024root*>(voidSelf);
    VRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRegTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VRegTester___024root__trace_full_sub_0(VRegTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->RegTester__DOT__dut__DOT__vecReg_0),3);
    tracep->fullCData(oldp+2,(vlSelf->RegTester__DOT__dut__DOT__vecReg_1),3);
    tracep->fullCData(oldp+3,(vlSelf->RegTester__DOT__dut__DOT__vecReg_2),3);
    tracep->fullCData(oldp+4,(vlSelf->RegTester__DOT__dut__DOT__vecReg_3),3);
    tracep->fullCData(oldp+5,(vlSelf->RegTester__DOT__dut__DOT__vecReg_4),3);
    tracep->fullCData(oldp+6,(vlSelf->RegTester__DOT__dut__DOT__vecReg_5),3);
    tracep->fullCData(oldp+7,(vlSelf->RegTester__DOT__dut__DOT__vecReg_6),3);
    tracep->fullCData(oldp+8,(vlSelf->RegTester__DOT__dut__DOT__vecReg_7),3);
    tracep->fullBit(oldp+9,(vlSelf->RegTester__DOT__doneReg));
    tracep->fullBit(oldp+10,(vlSelf->clock));
    tracep->fullBit(oldp+11,(vlSelf->reset));
}
