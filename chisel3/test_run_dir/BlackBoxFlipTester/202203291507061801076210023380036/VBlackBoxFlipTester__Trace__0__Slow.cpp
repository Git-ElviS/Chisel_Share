// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlackBoxFlipTester__Syms.h"


VL_ATTR_COLD void VBlackBoxFlipTester___024root__trace_init_sub__TOP__0(VBlackBoxFlipTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxFlipTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxFlipTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("BlackBoxFlipTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"blackBox_in", false,-1);
    tracep->declBit(c+3,"blackBox_out", false,-1);
    tracep->pushNamePrefix("blackBox ");
    tracep->declBus(c+3,"in", false,-1, 0,0);
    tracep->declBus(c+3,"out", false,-1, 0,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VBlackBoxFlipTester___024root__trace_init_top(VBlackBoxFlipTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxFlipTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxFlipTester___024root__trace_init_top\n"); );
    // Body
    VBlackBoxFlipTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VBlackBoxFlipTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VBlackBoxFlipTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VBlackBoxFlipTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VBlackBoxFlipTester___024root__trace_register(VBlackBoxFlipTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxFlipTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxFlipTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VBlackBoxFlipTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VBlackBoxFlipTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VBlackBoxFlipTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VBlackBoxFlipTester___024root__trace_full_sub_0(VBlackBoxFlipTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBlackBoxFlipTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxFlipTester___024root__trace_full_top_0\n"); );
    // Init
    VBlackBoxFlipTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBlackBoxFlipTester___024root*>(voidSelf);
    VBlackBoxFlipTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBlackBoxFlipTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VBlackBoxFlipTester___024root__trace_full_sub_0(VBlackBoxFlipTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxFlipTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxFlipTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullBit(oldp+3,(1U));
}