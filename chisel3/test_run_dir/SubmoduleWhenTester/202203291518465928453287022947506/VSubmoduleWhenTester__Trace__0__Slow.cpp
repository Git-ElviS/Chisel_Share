// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSubmoduleWhenTester__Syms.h"


VL_ATTR_COLD void VSubmoduleWhenTester___024root__trace_init_sub__TOP__0(VSubmoduleWhenTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSubmoduleWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleWhenTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->pushNamePrefix("SubmoduleWhenTester ");
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->declBus(c+1,"children_0_io_in", false,-1, 31,0);
    tracep->declBus(c+1,"children_0_io_out", false,-1, 31,0);
    tracep->declBus(c+1,"children_1_io_in", false,-1, 31,0);
    tracep->declBus(c+1,"children_1_io_out", false,-1, 31,0);
    tracep->declBus(c+1,"children_2_io_in", false,-1, 31,0);
    tracep->declBus(c+1,"children_2_io_out", false,-1, 31,0);
    tracep->declBus(c+2,"cycle", false,-1, 1,0);
    tracep->declBit(c+3,"wrap_wrap", false,-1);
    tracep->pushNamePrefix("children_0 ");
    tracep->declBus(c+1,"io_in", false,-1, 31,0);
    tracep->declBus(c+1,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("children_1 ");
    tracep->declBus(c+1,"io_in", false,-1, 31,0);
    tracep->declBus(c+1,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("children_2 ");
    tracep->declBus(c+1,"io_in", false,-1, 31,0);
    tracep->declBus(c+1,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VSubmoduleWhenTester___024root__trace_init_top(VSubmoduleWhenTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSubmoduleWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleWhenTester___024root__trace_init_top\n"); );
    // Body
    VSubmoduleWhenTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSubmoduleWhenTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSubmoduleWhenTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSubmoduleWhenTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSubmoduleWhenTester___024root__trace_register(VSubmoduleWhenTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSubmoduleWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleWhenTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSubmoduleWhenTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSubmoduleWhenTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSubmoduleWhenTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSubmoduleWhenTester___024root__trace_full_sub_0(VSubmoduleWhenTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSubmoduleWhenTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleWhenTester___024root__trace_full_top_0\n"); );
    // Init
    VSubmoduleWhenTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSubmoduleWhenTester___024root*>(voidSelf);
    VSubmoduleWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSubmoduleWhenTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VSubmoduleWhenTester___024root__trace_full_sub_0(VSubmoduleWhenTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSubmoduleWhenTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSubmoduleWhenTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(((1U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle))
                                ? 0xdeadbeefU : 0xbadcad0U)),32);
    tracep->fullCData(oldp+2,(vlSelf->SubmoduleWhenTester__DOT__cycle),2);
    tracep->fullBit(oldp+3,((2U == (IData)(vlSelf->SubmoduleWhenTester__DOT__cycle))));
    tracep->fullBit(oldp+4,(vlSelf->clock));
    tracep->fullBit(oldp+5,(vlSelf->reset));
}
