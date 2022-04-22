// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimpleVendingMachineTester__Syms.h"


VL_ATTR_COLD void VSimpleVendingMachineTester___024root__trace_init_sub__TOP__0(VSimpleVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+8,"clock", false,-1);
    tracep->declBit(c+9,"reset", false,-1);
    tracep->pushNamePrefix("SimpleVendingMachineTester ");
    tracep->declBit(c+8,"clock", false,-1);
    tracep->declBit(c+9,"reset", false,-1);
    tracep->declBit(c+8,"dut_clock", false,-1);
    tracep->declBit(c+9,"dut_reset", false,-1);
    tracep->declBit(c+1,"dut_io_nickel", false,-1);
    tracep->declBit(c+2,"dut_io_dime", false,-1);
    tracep->declBit(c+3,"dut_io_dispense", false,-1);
    tracep->declBus(c+4,"cycle", false,-1, 3,0);
    tracep->declBit(c+5,"wrap_wrap", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+8,"clock", false,-1);
    tracep->declBit(c+9,"reset", false,-1);
    tracep->declBit(c+1,"io_nickel", false,-1);
    tracep->declBit(c+2,"io_dime", false,-1);
    tracep->declBit(c+3,"io_dispense", false,-1);
    tracep->declBus(c+6,"value", false,-1, 2,0);
    tracep->declBit(c+3,"doDispense", false,-1);
    tracep->declBus(c+7,"incValue", false,-1, 2,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VSimpleVendingMachineTester___024root__trace_init_top(VSimpleVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester___024root__trace_init_top\n"); );
    // Body
    VSimpleVendingMachineTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSimpleVendingMachineTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSimpleVendingMachineTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSimpleVendingMachineTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSimpleVendingMachineTester___024root__trace_register(VSimpleVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSimpleVendingMachineTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSimpleVendingMachineTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSimpleVendingMachineTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSimpleVendingMachineTester___024root__trace_full_sub_0(VSimpleVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSimpleVendingMachineTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester___024root__trace_full_top_0\n"); );
    // Init
    VSimpleVendingMachineTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimpleVendingMachineTester___024root*>(voidSelf);
    VSimpleVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSimpleVendingMachineTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VSimpleVendingMachineTester___024root__trace_full_sub_0(VSimpleVendingMachineTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimpleVendingMachineTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleVendingMachineTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(((9U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                             & ((8U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                | ((7U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                   & ((6U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                      & (5U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle))))))));
    tracep->fullBit(oldp+2,(((9U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                             | ((8U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                & ((7U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                   & ((6U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                      | (5U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle))))))));
    tracep->fullBit(oldp+3,((4U <= (IData)(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__value))));
    tracep->fullCData(oldp+4,(vlSelf->SimpleVendingMachineTester__DOT__cycle),4);
    tracep->fullBit(oldp+5,((9U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle))));
    tracep->fullCData(oldp+6,(vlSelf->SimpleVendingMachineTester__DOT__dut__DOT__value),3);
    tracep->fullCData(oldp+7,((((9U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                | ((8U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                   & ((7U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                      & ((6U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                         | (5U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle))))))
                                ? 2U : (((9U != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                         & ((8U == (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                            | ((7U 
                                                != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                               & ((6U 
                                                   != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle)) 
                                                  & (5U 
                                                     != (IData)(vlSelf->SimpleVendingMachineTester__DOT__cycle))))))
                                         ? 1U : 0U))),3);
    tracep->fullBit(oldp+8,(vlSelf->clock));
    tracep->fullBit(oldp+9,(vlSelf->reset));
}
