// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VWithResetTest__Syms.h"


VL_ATTR_COLD void VWithResetTest___024root__trace_init_sub__TOP__0(VWithResetTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWithResetTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWithResetTest___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->pushNamePrefix("WithResetTest ");
    tracep->declBit(c+5,"clock", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->declBus(c+1,"cycle", false,-1, 3,0);
    tracep->declBit(c+2,"reset2", false,-1);
    tracep->declBus(c+3,"reg_", false,-1, 7,0);
    tracep->declBit(c+4,"wrap_wrap", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VWithResetTest___024root__trace_init_top(VWithResetTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWithResetTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWithResetTest___024root__trace_init_top\n"); );
    // Body
    VWithResetTest___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VWithResetTest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VWithResetTest___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VWithResetTest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VWithResetTest___024root__trace_register(VWithResetTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWithResetTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWithResetTest___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VWithResetTest___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VWithResetTest___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VWithResetTest___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VWithResetTest___024root__trace_full_sub_0(VWithResetTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VWithResetTest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWithResetTest___024root__trace_full_top_0\n"); );
    // Init
    VWithResetTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWithResetTest___024root*>(voidSelf);
    VWithResetTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VWithResetTest___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VWithResetTest___024root__trace_full_sub_0(VWithResetTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWithResetTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWithResetTest___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->WithResetTest__DOT__cycle),4);
    tracep->fullBit(oldp+2,(((7U <= (IData)(vlSelf->WithResetTest__DOT__cycle)) 
                             & (7U == (IData)(vlSelf->WithResetTest__DOT__cycle)))));
    tracep->fullCData(oldp+3,(vlSelf->WithResetTest__DOT__reg_),8);
    tracep->fullBit(oldp+4,((9U == (IData)(vlSelf->WithResetTest__DOT__cycle))));
    tracep->fullBit(oldp+5,(vlSelf->clock));
    tracep->fullBit(oldp+6,(vlSelf->reset));
}
