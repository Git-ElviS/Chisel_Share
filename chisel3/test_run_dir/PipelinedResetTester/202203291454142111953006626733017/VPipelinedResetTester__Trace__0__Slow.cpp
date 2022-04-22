// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelinedResetTester__Syms.h"


VL_ATTR_COLD void VPipelinedResetTester___024root__trace_init_sub__TOP__0(VPipelinedResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelinedResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("PipelinedResetTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"done_value", false,-1, 1,0);
    tracep->declBit(c+4,"done_wrap_wrap", false,-1);
    tracep->declBit(c+5,"done", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VPipelinedResetTester___024root__trace_init_top(VPipelinedResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelinedResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester___024root__trace_init_top\n"); );
    // Body
    VPipelinedResetTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPipelinedResetTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VPipelinedResetTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VPipelinedResetTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPipelinedResetTester___024root__trace_register(VPipelinedResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelinedResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPipelinedResetTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPipelinedResetTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPipelinedResetTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPipelinedResetTester___024root__trace_full_sub_0(VPipelinedResetTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPipelinedResetTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester___024root__trace_full_top_0\n"); );
    // Init
    VPipelinedResetTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelinedResetTester___024root*>(voidSelf);
    VPipelinedResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPipelinedResetTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VPipelinedResetTester___024root__trace_full_sub_0(VPipelinedResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelinedResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelinedResetTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullCData(oldp+3,(vlSelf->PipelinedResetTester__DOT__done_value),2);
    tracep->fullBit(oldp+4,((3U == (IData)(vlSelf->PipelinedResetTester__DOT__done_value))));
    tracep->fullBit(oldp+5,(((~ (IData)(vlSelf->reset)) 
                             & (3U == (IData)(vlSelf->PipelinedResetTester__DOT__done_value)))));
}
