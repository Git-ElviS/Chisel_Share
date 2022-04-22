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
    tracep->declBit(c+10,"clock", false,-1);
    tracep->declBit(c+11,"reset", false,-1);
    tracep->pushNamePrefix("ParameterizedVendingMachineTester ");
    tracep->declBit(c+10,"clock", false,-1);
    tracep->declBit(c+11,"reset", false,-1);
    tracep->declBit(c+10,"dut_clock", false,-1);
    tracep->declBit(c+11,"dut_reset", false,-1);
    tracep->declBit(c+1,"dut_io_inputs_0", false,-1);
    tracep->declBit(c+2,"dut_io_inputs_1", false,-1);
    tracep->declBit(c+3,"dut_io_inputs_2", false,-1);
    tracep->declBit(c+4,"dut_io_inputs_3", false,-1);
    tracep->declBit(c+5,"dut_io_dispense", false,-1);
    tracep->declBus(c+6,"idx", false,-1, 6,0);
    tracep->declBit(c+7,"wrap_wrap", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+10,"clock", false,-1);
    tracep->declBit(c+11,"reset", false,-1);
    tracep->declBit(c+1,"io_inputs_0", false,-1);
    tracep->declBit(c+2,"io_inputs_1", false,-1);
    tracep->declBit(c+3,"io_inputs_2", false,-1);
    tracep->declBit(c+4,"io_inputs_3", false,-1);
    tracep->declBit(c+5,"io_dispense", false,-1);
    tracep->declBus(c+8,"value", false,-1, 7,0);
    tracep->declBit(c+5,"doDispense", false,-1);
    tracep->declBus(c+9,"incValue", false,-1, 7,0);
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
    tracep->fullBit(oldp+3,((1U & ((IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102) 
                                   >> 2U))));
    tracep->fullBit(oldp+4,((1U & ((IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102) 
                                   >> 3U))));
    tracep->fullBit(oldp+5,((0x96U <= (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value))));
    tracep->fullCData(oldp+6,(vlSelf->ParameterizedVendingMachineTester__DOT__idx),7);
    tracep->fullBit(oldp+7,((0x64U == (IData)(vlSelf->ParameterizedVendingMachineTester__DOT__idx))));
    tracep->fullCData(oldp+8,(vlSelf->ParameterizedVendingMachineTester__DOT__dut__DOT__value),8);
    tracep->fullCData(oldp+9,(((8U & (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102))
                                ? 0x19U : ((4U & (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102))
                                            ? 0xaU : 
                                           ((2U & (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102))
                                             ? 5U : 
                                            ((1U & (IData)(vlSelf->ParameterizedVendingMachineTester__DOT___GEN_102))
                                              ? 1U : 0U))))),8);
    tracep->fullBit(oldp+10,(vlSelf->clock));
    tracep->fullBit(oldp+11,(vlSelf->reset));
}
