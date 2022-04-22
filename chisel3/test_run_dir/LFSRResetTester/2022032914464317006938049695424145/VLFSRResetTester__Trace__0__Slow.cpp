// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLFSRResetTester__Syms.h"


VL_ATTR_COLD void VLFSRResetTester___024root__trace_init_sub__TOP__0(VLFSRResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+7,"reset", false,-1);
    tracep->pushNamePrefix("LFSRResetTester ");
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+7,"reset", false,-1);
    tracep->declBit(c+6,"lfsr_clock", false,-1);
    tracep->declBit(c+1,"lfsr_reset", false,-1);
    tracep->declBit(c+2,"lfsr_io_seed_valid", false,-1);
    tracep->declBit(c+3,"lfsr_io_out_0", false,-1);
    tracep->declBus(c+4,"count", false,-1, 2,0);
    tracep->declBit(c+5,"wrap_wrap", false,-1);
    tracep->pushNamePrefix("lfsr ");
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+2,"io_seed_valid", false,-1);
    tracep->declBit(c+3,"io_out_0", false,-1);
    tracep->declBit(c+3,"state_0", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VLFSRResetTester___024root__trace_init_top(VLFSRResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester___024root__trace_init_top\n"); );
    // Body
    VLFSRResetTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VLFSRResetTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VLFSRResetTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VLFSRResetTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VLFSRResetTester___024root__trace_register(VLFSRResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VLFSRResetTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VLFSRResetTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VLFSRResetTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VLFSRResetTester___024root__trace_full_sub_0(VLFSRResetTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VLFSRResetTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester___024root__trace_full_top_0\n"); );
    // Init
    VLFSRResetTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLFSRResetTester___024root*>(voidSelf);
    VLFSRResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VLFSRResetTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VLFSRResetTester___024root__trace_full_sub_0(VLFSRResetTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRResetTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRResetTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,((3U == (IData)(vlSelf->LFSRResetTester__DOT__count))));
    tracep->fullBit(oldp+2,((1U == (IData)(vlSelf->LFSRResetTester__DOT__count))));
    tracep->fullBit(oldp+3,(vlSelf->LFSRResetTester__DOT__lfsr__DOT__state_0));
    tracep->fullCData(oldp+4,(vlSelf->LFSRResetTester__DOT__count),3);
    tracep->fullBit(oldp+5,((4U == (IData)(vlSelf->LFSRResetTester__DOT__count))));
    tracep->fullBit(oldp+6,(vlSelf->clock));
    tracep->fullBit(oldp+7,(vlSelf->reset));
}
