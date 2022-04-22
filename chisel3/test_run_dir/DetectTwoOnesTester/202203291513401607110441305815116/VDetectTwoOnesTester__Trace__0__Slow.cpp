// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDetectTwoOnesTester__Syms.h"


VL_ATTR_COLD void VDetectTwoOnesTester___024root__trace_init_sub__TOP__0(VDetectTwoOnesTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDetectTwoOnesTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDetectTwoOnesTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+7,"reset", false,-1);
    tracep->pushNamePrefix("DetectTwoOnesTester ");
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+7,"reset", false,-1);
    tracep->declBit(c+6,"dut_clock", false,-1);
    tracep->declBit(c+7,"dut_reset", false,-1);
    tracep->declBit(c+1,"dut_io_in", false,-1);
    tracep->declBit(c+2,"dut_io_out", false,-1);
    tracep->declBus(c+3,"cycle", false,-1, 3,0);
    tracep->declBit(c+4,"wrap_wrap", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+7,"reset", false,-1);
    tracep->declBit(c+1,"io_in", false,-1);
    tracep->declBit(c+2,"io_out", false,-1);
    tracep->declBus(c+5,"state", false,-1, 1,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VDetectTwoOnesTester___024root__trace_init_top(VDetectTwoOnesTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDetectTwoOnesTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDetectTwoOnesTester___024root__trace_init_top\n"); );
    // Body
    VDetectTwoOnesTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VDetectTwoOnesTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VDetectTwoOnesTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VDetectTwoOnesTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VDetectTwoOnesTester___024root__trace_register(VDetectTwoOnesTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDetectTwoOnesTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDetectTwoOnesTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VDetectTwoOnesTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VDetectTwoOnesTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VDetectTwoOnesTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VDetectTwoOnesTester___024root__trace_full_sub_0(VDetectTwoOnesTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VDetectTwoOnesTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDetectTwoOnesTester___024root__trace_full_top_0\n"); );
    // Init
    VDetectTwoOnesTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDetectTwoOnesTester___024root*>(voidSelf);
    VDetectTwoOnesTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VDetectTwoOnesTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VDetectTwoOnesTester___024root__trace_full_sub_0(VDetectTwoOnesTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDetectTwoOnesTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDetectTwoOnesTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->DetectTwoOnesTester__DOT__dut_io_in));
    tracep->fullBit(oldp+2,((2U == (IData)(vlSelf->DetectTwoOnesTester__DOT__dut__DOT__state))));
    tracep->fullCData(oldp+3,(vlSelf->DetectTwoOnesTester__DOT__cycle),4);
    tracep->fullBit(oldp+4,((0xaU == (IData)(vlSelf->DetectTwoOnesTester__DOT__cycle))));
    tracep->fullCData(oldp+5,(vlSelf->DetectTwoOnesTester__DOT__dut__DOT__state),2);
    tracep->fullBit(oldp+6,(vlSelf->clock));
    tracep->fullBit(oldp+7,(vlSelf->reset));
}
