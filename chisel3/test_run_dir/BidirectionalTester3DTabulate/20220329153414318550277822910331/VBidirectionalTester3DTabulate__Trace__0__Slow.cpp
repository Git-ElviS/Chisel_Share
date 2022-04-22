// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBidirectionalTester3DTabulate__Syms.h"


VL_ATTR_COLD void VBidirectionalTester3DTabulate___024root__trace_init_sub__TOP__0(VBidirectionalTester3DTabulate___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBidirectionalTester3DTabulate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBidirectionalTester3DTabulate___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("BidirectionalTester3DTabulate ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"PassthroughModule_io_in", false,-1, 31,0);
    tracep->declBus(c+3,"PassthroughModule_io_out", false,-1, 31,0);
    tracep->declBus(c+4,"PassthroughModule_1_io_in", false,-1, 31,0);
    tracep->declBus(c+4,"PassthroughModule_1_io_out", false,-1, 31,0);
    tracep->declBus(c+5,"PassthroughModule_2_io_in", false,-1, 31,0);
    tracep->declBus(c+5,"PassthroughModule_2_io_out", false,-1, 31,0);
    tracep->declBus(c+6,"PassthroughModule_3_io_in", false,-1, 31,0);
    tracep->declBus(c+6,"PassthroughModule_3_io_out", false,-1, 31,0);
    tracep->declBus(c+4,"PassthroughModule_4_io_in", false,-1, 31,0);
    tracep->declBus(c+4,"PassthroughModule_4_io_out", false,-1, 31,0);
    tracep->declBus(c+5,"PassthroughModule_5_io_in", false,-1, 31,0);
    tracep->declBus(c+5,"PassthroughModule_5_io_out", false,-1, 31,0);
    tracep->declBus(c+6,"PassthroughModule_6_io_in", false,-1, 31,0);
    tracep->declBus(c+6,"PassthroughModule_6_io_out", false,-1, 31,0);
    tracep->declBus(c+7,"PassthroughModule_7_io_in", false,-1, 31,0);
    tracep->declBus(c+7,"PassthroughModule_7_io_out", false,-1, 31,0);
    tracep->pushNamePrefix("PassthroughModule ");
    tracep->declBus(c+3,"io_in", false,-1, 31,0);
    tracep->declBus(c+3,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PassthroughModule_1 ");
    tracep->declBus(c+4,"io_in", false,-1, 31,0);
    tracep->declBus(c+4,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PassthroughModule_2 ");
    tracep->declBus(c+5,"io_in", false,-1, 31,0);
    tracep->declBus(c+5,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PassthroughModule_3 ");
    tracep->declBus(c+6,"io_in", false,-1, 31,0);
    tracep->declBus(c+6,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PassthroughModule_4 ");
    tracep->declBus(c+4,"io_in", false,-1, 31,0);
    tracep->declBus(c+4,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PassthroughModule_5 ");
    tracep->declBus(c+5,"io_in", false,-1, 31,0);
    tracep->declBus(c+5,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PassthroughModule_6 ");
    tracep->declBus(c+6,"io_in", false,-1, 31,0);
    tracep->declBus(c+6,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PassthroughModule_7 ");
    tracep->declBus(c+7,"io_in", false,-1, 31,0);
    tracep->declBus(c+7,"io_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VBidirectionalTester3DTabulate___024root__trace_init_top(VBidirectionalTester3DTabulate___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBidirectionalTester3DTabulate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBidirectionalTester3DTabulate___024root__trace_init_top\n"); );
    // Body
    VBidirectionalTester3DTabulate___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VBidirectionalTester3DTabulate___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VBidirectionalTester3DTabulate___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VBidirectionalTester3DTabulate___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VBidirectionalTester3DTabulate___024root__trace_register(VBidirectionalTester3DTabulate___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBidirectionalTester3DTabulate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBidirectionalTester3DTabulate___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VBidirectionalTester3DTabulate___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VBidirectionalTester3DTabulate___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VBidirectionalTester3DTabulate___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VBidirectionalTester3DTabulate___024root__trace_full_sub_0(VBidirectionalTester3DTabulate___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBidirectionalTester3DTabulate___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBidirectionalTester3DTabulate___024root__trace_full_top_0\n"); );
    // Init
    VBidirectionalTester3DTabulate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBidirectionalTester3DTabulate___024root*>(voidSelf);
    VBidirectionalTester3DTabulate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBidirectionalTester3DTabulate___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VBidirectionalTester3DTabulate___024root__trace_full_sub_0(VBidirectionalTester3DTabulate___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBidirectionalTester3DTabulate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBidirectionalTester3DTabulate___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullIData(oldp+3,(1U),32);
    tracep->fullIData(oldp+4,(2U),32);
    tracep->fullIData(oldp+5,(3U),32);
    tracep->fullIData(oldp+6,(4U),32);
    tracep->fullIData(oldp+7,(5U),32);
}
