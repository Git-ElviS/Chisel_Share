// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUInt2VecOfBool__Syms.h"


VL_ATTR_COLD void VUInt2VecOfBool___024root__trace_init_sub__TOP__0(VUInt2VecOfBool___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VUInt2VecOfBool__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2VecOfBool___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->pushNamePrefix("UInt2VecOfBool ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"cycle", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VUInt2VecOfBool___024root__trace_init_top(VUInt2VecOfBool___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VUInt2VecOfBool__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2VecOfBool___024root__trace_init_top\n"); );
    // Body
    VUInt2VecOfBool___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VUInt2VecOfBool___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VUInt2VecOfBool___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VUInt2VecOfBool___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VUInt2VecOfBool___024root__trace_register(VUInt2VecOfBool___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VUInt2VecOfBool__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2VecOfBool___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VUInt2VecOfBool___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VUInt2VecOfBool___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VUInt2VecOfBool___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VUInt2VecOfBool___024root__trace_full_sub_0(VUInt2VecOfBool___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VUInt2VecOfBool___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2VecOfBool___024root__trace_full_top_0\n"); );
    // Init
    VUInt2VecOfBool___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VUInt2VecOfBool___024root*>(voidSelf);
    VUInt2VecOfBool__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VUInt2VecOfBool___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VUInt2VecOfBool___024root__trace_full_sub_0(VUInt2VecOfBool___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VUInt2VecOfBool__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VUInt2VecOfBool___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->clock));
    tracep->fullBit(oldp+2,(vlSelf->reset));
    tracep->fullBit(oldp+3,(vlSelf->UInt2VecOfBool__DOT__cycle));
}
