// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiClockSubModuleTest__Syms.h"


VL_ATTR_COLD void VMultiClockSubModuleTest___024root__trace_init_sub__TOP__0(VMultiClockSubModuleTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->pushNamePrefix("MultiClockSubModuleTest ");
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->declBit(c+6,"inst_clock", false,-1);
    tracep->declBit(c+1,"inst_reset", false,-1);
    tracep->declBus(c+7,"inst_io_out", false,-1, 3,0);
    tracep->declBus(c+2,"cycle", false,-1, 3,0);
    tracep->declBit(c+3,"wrap_wrap", false,-1);
    tracep->declBit(c+6,"cDiv", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+6,"clock", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBus(c+7,"io_out", false,-1, 3,0);
    tracep->declBus(c+7,"cycle", false,-1, 3,0);
    tracep->declBit(c+8,"cycle_wrap_wrap", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VMultiClockSubModuleTest___024root__trace_init_top(VMultiClockSubModuleTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root__trace_init_top\n"); );
    // Body
    VMultiClockSubModuleTest___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMultiClockSubModuleTest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMultiClockSubModuleTest___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VMultiClockSubModuleTest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMultiClockSubModuleTest___024root__trace_register(VMultiClockSubModuleTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VMultiClockSubModuleTest___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VMultiClockSubModuleTest___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VMultiClockSubModuleTest___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMultiClockSubModuleTest___024root__trace_full_sub_0(VMultiClockSubModuleTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMultiClockSubModuleTest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root__trace_full_top_0\n"); );
    // Init
    VMultiClockSubModuleTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMultiClockSubModuleTest___024root*>(voidSelf);
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMultiClockSubModuleTest___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VMultiClockSubModuleTest___024root__trace_full_sub_0(VMultiClockSubModuleTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiClockSubModuleTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiClockSubModuleTest___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,((3U > (IData)(vlSelf->MultiClockSubModuleTest__DOT__cycle))));
    tracep->fullCData(oldp+2,(vlSelf->MultiClockSubModuleTest__DOT__cycle),4);
    tracep->fullBit(oldp+3,((9U == (IData)(vlSelf->MultiClockSubModuleTest__DOT__cycle))));
    tracep->fullBit(oldp+4,(vlSelf->clock));
    tracep->fullBit(oldp+5,(vlSelf->reset));
    tracep->fullBit(oldp+6,(vlSelf->MultiClockSubModuleTest__DOT__cDiv));
    tracep->fullCData(oldp+7,(vlSelf->MultiClockSubModuleTest__DOT__inst__DOT__cycle),4);
    tracep->fullBit(oldp+8,((9U == (IData)(vlSelf->MultiClockSubModuleTest__DOT__inst__DOT__cycle))));
}
