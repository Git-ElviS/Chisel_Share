// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VParameterizedVendingMachineTester__Syms.h"


VL_ATTR_COLD void VParameterizedVendingMachineTester___024root__trace_init_sub__TOP__0(VParameterizedVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+8,"clock", false,-1);
    tracep->declBit(c+9,"reset", false,-1);
    tracep->pushNamePrefix("ParameterizedVendingMachineTester ");
    tracep->declBit(c+8,"clock", false,-1);
    tracep->declBit(c+9,"reset", false,-1);
    tracep->declBit(c+8,"dut_clock", false,-1);
    tracep->declBit(c+9,"dut_reset", false,-1);
    tracep->declBit(c+1,"dut_io_inputs_0", false,-1);
    tracep->declBit(c+2,"dut_io_inputs_1", false,-1);
    tracep->declBit(c+3,"dut_io_dispense", false,-1);
    tracep->declBus(c+4,"idx", false,-1, 6,0);
    tracep->declBit(c+5,"wrap_wrap", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+8,"clock", false,-1);
    tracep->declBit(c+9,"reset", false,-1);
    tracep->declBit(c+1,"io_inputs_0", false,-1);
    tracep->declBit(c+2,"io_inputs_1", false,-1);
    tracep->declBit(c+3,"io_dispense", false,-1);
    tracep->declBus(c+6,"value", false,-1, 2,0);
    tracep->declBit(c+3,"doDispense", false,-1);
    tracep->declBus(c+7,"incValue", false,-1, 2,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root__trace_init_top(VParameterizedVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root__trace_init_top\n"); );
    // Body
    VParameterizedVendingMachineTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VParameterizedVendingMachineTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VParameterizedVendingMachineTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root__trace_register(VParameterizedVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VParameterizedVendingMachineTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VParameterizedVendingMachineTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VParameterizedVendingMachineTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root__trace_full_sub_0(VParameterizedVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root__trace_full_top_0\n"); );
    // Init
    VParameterizedVendingMachineTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VParameterizedVendingMachineTester___024root*>(voidSelf);
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VParameterizedVendingMachineTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VParameterizedVendingMachineTester___024root__trace_full_sub_0(VParameterizedVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VParameterizedVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VParameterizedVendingMachineTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,((1U & (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102))));
    tracep->fullBit(oldp+2,((1U & ((IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102) 
                                   >> 1U))));
    tracep->fullBit(oldp+3,((4U <= (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value))));
    tracep->fullCData(oldp+4,(vlSelf->ParameterizedVendingMachineTester__DOT__idx),7);
    tracep->fullBit(oldp+5,((0x64U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))));
    tracep->fullCData(oldp+6,(vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value),3);
    tracep->fullCData(oldp+7,(((2U & (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102))
                                ? 2U : ((1U & (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102))
                                         ? 1U : 0U))),3);
    tracep->fullBit(oldp+8,(vlSelf->clock));
    tracep->fullBit(oldp+9,(vlSelf->reset));
}
