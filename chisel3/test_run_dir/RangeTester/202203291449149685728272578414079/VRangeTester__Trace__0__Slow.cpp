// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRangeTester__Syms.h"


VL_ATTR_COLD void VRangeTester___024root__trace_init_sub__TOP__0(VRangeTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRangeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRangeTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->pushNamePrefix("RangeTester ");
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->declBus(c+1,"cnt", false,-1, 3,0);
    tracep->declBit(c+2,"wrap_wrap", false,-1);
    tracep->declBit(c+3,"checkWrap", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VRangeTester___024root__trace_init_top(VRangeTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRangeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRangeTester___024root__trace_init_top\n"); );
    // Body
    VRangeTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRangeTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VRangeTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VRangeTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRangeTester___024root__trace_register(VRangeTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRangeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRangeTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VRangeTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VRangeTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VRangeTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRangeTester___024root__trace_full_sub_0(VRangeTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRangeTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRangeTester___024root__trace_full_top_0\n"); );
    // Init
    VRangeTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRangeTester___024root*>(voidSelf);
    VRangeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRangeTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VRangeTester___024root__trace_full_sub_0(VRangeTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRangeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRangeTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->RangeTester__DOT__cnt),4);
    tracep->fullBit(oldp+2,((6U == (IData)(vlSelf->RangeTester__DOT__cnt))));
    tracep->fullBit(oldp+3,(vlSelf->RangeTester__DOT__checkWrap));
    tracep->fullBit(oldp+4,(vlSelf->clock));
    tracep->fullBit(oldp+5,(vlSelf->reset));
}
