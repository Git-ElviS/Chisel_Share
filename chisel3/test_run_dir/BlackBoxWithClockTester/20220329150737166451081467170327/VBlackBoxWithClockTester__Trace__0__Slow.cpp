// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlackBoxWithClockTester__Syms.h"


VL_ATTR_COLD void VBlackBoxWithClockTester___024root__trace_init_sub__TOP__0(VBlackBoxWithClockTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithClockTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+7,"reset", false,-1);
    tracep->pushNamePrefix("BlackBoxWithClockTester ");
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+7,"reset", false,-1);
    tracep->declBit(c+6,"blackBox_clock", false,-1);
    tracep->declBit(c+1,"blackBox_in", false,-1);
    tracep->declBit(c+2,"blackBox_out", false,-1);
    tracep->declBit(c+3,"model", false,-1);
    tracep->declBus(c+4,"cycles", false,-1, 3,0);
    tracep->declBit(c+5,"wrap_wrap", false,-1);
    tracep->pushNamePrefix("blackBox ");
    tracep->declBus(c+6,"clock", false,-1, 0,0);
    tracep->declBus(c+1,"in", false,-1, 0,0);
    tracep->declBus(c+2,"out", false,-1, 0,0);
    tracep->declBus(c+2,"register", false,-1, 0,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VBlackBoxWithClockTester___024root__trace_init_top(VBlackBoxWithClockTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithClockTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester___024root__trace_init_top\n"); );
    // Body
    VBlackBoxWithClockTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VBlackBoxWithClockTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VBlackBoxWithClockTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VBlackBoxWithClockTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VBlackBoxWithClockTester___024root__trace_register(VBlackBoxWithClockTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithClockTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VBlackBoxWithClockTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VBlackBoxWithClockTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VBlackBoxWithClockTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VBlackBoxWithClockTester___024root__trace_full_sub_0(VBlackBoxWithClockTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBlackBoxWithClockTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester___024root__trace_full_top_0\n"); );
    // Init
    VBlackBoxWithClockTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBlackBoxWithClockTester___024root*>(voidSelf);
    VBlackBoxWithClockTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBlackBoxWithClockTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VBlackBoxWithClockTester___024root__trace_full_sub_0(VBlackBoxWithClockTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBlackBoxWithClockTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBlackBoxWithClockTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,((1U & (IData)(vlSelf->BlackBoxWithClockTester__DOT__cycles))));
    tracep->fullBit(oldp+2,(vlSelf->BlackBoxWithClockTester__DOT__blackBox__DOT__register));
    tracep->fullBit(oldp+3,(vlSelf->BlackBoxWithClockTester__DOT__model));
    tracep->fullCData(oldp+4,(vlSelf->BlackBoxWithClockTester__DOT__cycles),4);
    tracep->fullBit(oldp+5,((0xeU == (IData)(vlSelf->BlackBoxWithClockTester__DOT__cycles))));
    tracep->fullBit(oldp+6,(vlSelf->clock));
    tracep->fullBit(oldp+7,(vlSelf->reset));
}
