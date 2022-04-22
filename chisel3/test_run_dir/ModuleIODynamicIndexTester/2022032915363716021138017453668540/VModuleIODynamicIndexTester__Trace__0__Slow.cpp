// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VModuleIODynamicIndexTester__Syms.h"


VL_ATTR_COLD void VModuleIODynamicIndexTester___024root__trace_init_sub__TOP__0(VModuleIODynamicIndexTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VModuleIODynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModuleIODynamicIndexTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+8,"clock", false,-1);
    tracep->declBit(c+9,"reset", false,-1);
    tracep->pushNamePrefix("ModuleIODynamicIndexTester ");
    tracep->declBit(c+8,"clock", false,-1);
    tracep->declBit(c+9,"reset", false,-1);
    tracep->declBus(c+1,"PassthroughModule_io_in", false,-1, 31,0);
    tracep->declBus(c+1,"PassthroughModule_io_out", false,-1, 31,0);
    tracep->declBus(c+2,"PassthroughModule_1_io_in", false,-1, 31,0);
    tracep->declBus(c+2,"PassthroughModule_1_io_out", false,-1, 31,0);
    tracep->declBus(c+3,"PassthroughModule_2_io_in", false,-1, 31,0);
    tracep->declBus(c+3,"PassthroughModule_2_io_out", false,-1, 31,0);
    tracep->declBus(c+4,"PassthroughModule_3_io_in", false,-1, 31,0);
    tracep->declBus(c+4,"PassthroughModule_3_io_out", false,-1, 31,0);
    tracep->declBit(c+8,"tester_clock", false,-1);
    tracep->declBit(c+9,"tester_reset", false,-1);
    tracep->declBus(c+5,"tester_io_out", false,-1, 31,0);
    tracep->declBus(c+6,"cycle", false,-1, 1,0);
    tracep->declBit(c+7,"wrap_wrap", false,-1);
    tracep->declBus(c+1,"duts_0_out", false,-1, 31,0);
    tracep->declBus(c+2,"duts_1_out", false,-1, 31,0);
    tracep->declBus(c+3,"duts_2_out", false,-1, 31,0);
    tracep->declBus(c+4,"duts_3_out", false,-1, 31,0);
    tracep->pushNamePrefix("PassthroughModule ");
    tracep->declBus(c+1,"io_in", false,-1, 31,0);
    tracep->declBus(c+1,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PassthroughModule_1 ");
    tracep->declBus(c+2,"io_in", false,-1, 31,0);
    tracep->declBus(c+2,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PassthroughModule_2 ");
    tracep->declBus(c+3,"io_in", false,-1, 31,0);
    tracep->declBus(c+3,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PassthroughModule_3 ");
    tracep->declBus(c+4,"io_in", false,-1, 31,0);
    tracep->declBus(c+4,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tester ");
    tracep->declBit(c+8,"clock", false,-1);
    tracep->declBit(c+9,"reset", false,-1);
    tracep->declBus(c+5,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VModuleIODynamicIndexTester___024root__trace_init_top(VModuleIODynamicIndexTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VModuleIODynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModuleIODynamicIndexTester___024root__trace_init_top\n"); );
    // Body
    VModuleIODynamicIndexTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VModuleIODynamicIndexTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VModuleIODynamicIndexTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VModuleIODynamicIndexTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VModuleIODynamicIndexTester___024root__trace_register(VModuleIODynamicIndexTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VModuleIODynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModuleIODynamicIndexTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VModuleIODynamicIndexTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VModuleIODynamicIndexTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VModuleIODynamicIndexTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VModuleIODynamicIndexTester___024root__trace_full_sub_0(VModuleIODynamicIndexTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VModuleIODynamicIndexTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModuleIODynamicIndexTester___024root__trace_full_top_0\n"); );
    // Init
    VModuleIODynamicIndexTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VModuleIODynamicIndexTester___024root*>(voidSelf);
    VModuleIODynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VModuleIODynamicIndexTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VModuleIODynamicIndexTester___024root__trace_full_sub_0(VModuleIODynamicIndexTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VModuleIODynamicIndexTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModuleIODynamicIndexTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(((0U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))
                                ? 0x7bU : 0U)),32);
    tracep->fullIData(oldp+2,(((1U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))
                                ? 0x7bU : 0U)),32);
    tracep->fullIData(oldp+3,(((2U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))
                                ? 0x7bU : 0U)),32);
    tracep->fullIData(oldp+4,(((3U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))
                                ? 0x7bU : 0U)),32);
    tracep->fullIData(oldp+5,(((3U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))
                                ? ((3U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))
                                    ? 0x7bU : 0U) : vlSelf->ModuleIODynamicIndexTester__DOT___GEN_12)),32);
    tracep->fullCData(oldp+6,(vlSelf->ModuleIODynamicIndexTester__DOT__cycle),2);
    tracep->fullBit(oldp+7,((3U == (IData)(vlSelf->ModuleIODynamicIndexTester__DOT__cycle))));
    tracep->fullBit(oldp+8,(vlSelf->clock));
    tracep->fullBit(oldp+9,(vlSelf->reset));
}
