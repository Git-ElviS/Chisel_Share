// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VWhenTester__Syms.h"


VL_ATTR_COLD void VWhenTester___024root__trace_init_sub__TOP__0(VWhenTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->pushNamePrefix("WhenTester ");
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->declBus(c+1,"value", false,-1, 1,0);
    tracep->declBit(c+2,"wrap", false,-1);
    tracep->declBus(c+3,"out", false,-1, 2,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VWhenTester___024root__trace_init_top(VWhenTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenTester___024root__trace_init_top\n"); );
    // Body
    VWhenTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VWhenTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VWhenTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VWhenTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VWhenTester___024root__trace_register(VWhenTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VWhenTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VWhenTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VWhenTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VWhenTester___024root__trace_full_sub_0(VWhenTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VWhenTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenTester___024root__trace_full_top_0\n"); );
    // Init
    VWhenTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWhenTester___024root*>(voidSelf);
    VWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VWhenTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VWhenTester___024root__trace_full_sub_0(VWhenTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWhenTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->WhenTester__DOT__value),2);
    tracep->fullBit(oldp+2,((3U == (IData)(vlSelf->WhenTester__DOT__value))));
    tracep->fullCData(oldp+3,(((0U == (IData)(vlSelf->WhenTester__DOT__value))
                                ? 1U : ((1U == (IData)(vlSelf->WhenTester__DOT__value))
                                         ? 2U : ((2U 
                                                  == (IData)(vlSelf->WhenTester__DOT__value))
                                                  ? 3U
                                                  : 0U)))),3);
    tracep->fullBit(oldp+4,(vlSelf->clock));
    tracep->fullBit(oldp+5,(vlSelf->reset));
}
