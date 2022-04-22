// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VNoOtherwiseOverlappedWhenTester__Syms.h"


VL_ATTR_COLD void VNoOtherwiseOverlappedWhenTester___024root__trace_init_sub__TOP__0(VNoOtherwiseOverlappedWhenTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VNoOtherwiseOverlappedWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoOtherwiseOverlappedWhenTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->pushNamePrefix("NoOtherwiseOverlappedWhenTester ");
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->declBus(c+1,"value", false,-1, 1,0);
    tracep->declBit(c+2,"wrap", false,-1);
    tracep->declBus(c+3,"out", false,-1, 2,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VNoOtherwiseOverlappedWhenTester___024root__trace_init_top(VNoOtherwiseOverlappedWhenTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VNoOtherwiseOverlappedWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoOtherwiseOverlappedWhenTester___024root__trace_init_top\n"); );
    // Body
    VNoOtherwiseOverlappedWhenTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VNoOtherwiseOverlappedWhenTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VNoOtherwiseOverlappedWhenTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VNoOtherwiseOverlappedWhenTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VNoOtherwiseOverlappedWhenTester___024root__trace_register(VNoOtherwiseOverlappedWhenTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VNoOtherwiseOverlappedWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoOtherwiseOverlappedWhenTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VNoOtherwiseOverlappedWhenTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VNoOtherwiseOverlappedWhenTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VNoOtherwiseOverlappedWhenTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VNoOtherwiseOverlappedWhenTester___024root__trace_full_sub_0(VNoOtherwiseOverlappedWhenTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VNoOtherwiseOverlappedWhenTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoOtherwiseOverlappedWhenTester___024root__trace_full_top_0\n"); );
    // Init
    VNoOtherwiseOverlappedWhenTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNoOtherwiseOverlappedWhenTester___024root*>(voidSelf);
    VNoOtherwiseOverlappedWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VNoOtherwiseOverlappedWhenTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VNoOtherwiseOverlappedWhenTester___024root__trace_full_sub_0(VNoOtherwiseOverlappedWhenTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VNoOtherwiseOverlappedWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNoOtherwiseOverlappedWhenTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->NoOtherwiseOverlappedWhenTester__DOT__value),2);
    tracep->fullBit(oldp+2,((3U == (IData)(vlSelf->NoOtherwiseOverlappedWhenTester__DOT__value))));
    tracep->fullCData(oldp+3,(((0U >= (IData)(vlSelf->NoOtherwiseOverlappedWhenTester__DOT__value))
                                ? 1U : ((1U >= (IData)(vlSelf->NoOtherwiseOverlappedWhenTester__DOT__value))
                                         ? 2U : ((2U 
                                                  >= (IData)(vlSelf->NoOtherwiseOverlappedWhenTester__DOT__value))
                                                  ? 3U
                                                  : 0U)))),3);
    tracep->fullBit(oldp+4,(vlSelf->clock));
    tracep->fullBit(oldp+5,(vlSelf->reset));
}
