// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSyncReadMemWithZeroWidthTester__Syms.h"


VL_ATTR_COLD void VSyncReadMemWithZeroWidthTester___024root__trace_init_sub__TOP__0(VSyncReadMemWithZeroWidthTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWithZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWithZeroWidthTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("SyncReadMemWithZeroWidthTester ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"cnt", false,-1, 1,0);
    tracep->declBit(c+4,"cnt_wrap_wrap", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VSyncReadMemWithZeroWidthTester___024root__trace_init_top(VSyncReadMemWithZeroWidthTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWithZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWithZeroWidthTester___024root__trace_init_top\n"); );
    // Body
    VSyncReadMemWithZeroWidthTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSyncReadMemWithZeroWidthTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSyncReadMemWithZeroWidthTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSyncReadMemWithZeroWidthTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSyncReadMemWithZeroWidthTester___024root__trace_register(VSyncReadMemWithZeroWidthTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWithZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWithZeroWidthTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSyncReadMemWithZeroWidthTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSyncReadMemWithZeroWidthTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSyncReadMemWithZeroWidthTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSyncReadMemWithZeroWidthTester___024root__trace_full_sub_0(VSyncReadMemWithZeroWidthTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSyncReadMemWithZeroWidthTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWithZeroWidthTester___024root__trace_full_top_0\n"); );
    // Init
    VSyncReadMemWithZeroWidthTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSyncReadMemWithZeroWidthTester___024root*>(voidSelf);
    VSyncReadMemWithZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSyncReadMemWithZeroWidthTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VSyncReadMemWithZeroWidthTester___024root__trace_full_sub_0(VSyncReadMemWithZeroWidthTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSyncReadMemWithZeroWidthTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSyncReadMemWithZeroWidthTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullCData(oldp+3,(vlSelf->SyncReadMemWithZeroWidthTester__DOT__cnt),2);
    tracep->fullBit(oldp+4,((2U == (IData)(vlSelf->SyncReadMemWithZeroWidthTester__DOT__cnt))));
}
