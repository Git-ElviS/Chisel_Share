// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSqueezeFunctionalityTester__Syms.h"


VL_ATTR_COLD void VSqueezeFunctionalityTester___024root__trace_init_sub__TOP__0(VSqueezeFunctionalityTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSqueezeFunctionalityTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("SqueezeFunctionalityTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"counter", false,-1, 9,0);
    tracep->declBus(c+4,"toSqueeze", false,-1, 3,0);
    tracep->declBus(c+4,"squeezeTemplate", false,-1, 3,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VSqueezeFunctionalityTester___024root__trace_init_top(VSqueezeFunctionalityTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSqueezeFunctionalityTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester___024root__trace_init_top\n"); );
    // Body
    VSqueezeFunctionalityTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSqueezeFunctionalityTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSqueezeFunctionalityTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSqueezeFunctionalityTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSqueezeFunctionalityTester___024root__trace_register(VSqueezeFunctionalityTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSqueezeFunctionalityTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSqueezeFunctionalityTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSqueezeFunctionalityTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSqueezeFunctionalityTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSqueezeFunctionalityTester___024root__trace_full_sub_0(VSqueezeFunctionalityTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSqueezeFunctionalityTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester___024root__trace_full_top_0\n"); );
    // Init
    VSqueezeFunctionalityTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSqueezeFunctionalityTester___024root*>(voidSelf);
    VSqueezeFunctionalityTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSqueezeFunctionalityTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VSqueezeFunctionalityTester___024root__trace_full_sub_0(VSqueezeFunctionalityTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSqueezeFunctionalityTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSqueezeFunctionalityTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullSData(oldp+3,(vlSelf->SqueezeFunctionalityTester__DOT__counter),10);
    tracep->fullCData(oldp+4,((0xfU & ((0x1fU & VL_EXTENDS_II(5,4, 
                                                              (0xfU 
                                                               & (IData)(vlSelf->SqueezeFunctionalityTester__DOT__counter)))) 
                                       - (IData)(6U)))),4);
}
