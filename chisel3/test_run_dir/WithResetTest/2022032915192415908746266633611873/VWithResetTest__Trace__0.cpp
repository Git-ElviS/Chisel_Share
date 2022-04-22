// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VWithResetTest__Syms.h"


void VWithResetTest___024root__trace_chg_sub_0(VWithResetTest___024root* vlSelf, VerilatedVcd* tracep);

void VWithResetTest___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWithResetTest___024root__trace_chg_top_0\n"); );
    // Init
    VWithResetTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWithResetTest___024root*>(voidSelf);
    VWithResetTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VWithResetTest___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VWithResetTest___024root__trace_chg_sub_0(VWithResetTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VWithResetTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWithResetTest___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->WithResetTest__DOT__cycle),4);
        tracep->chgBit(oldp+1,(((7U <= (IData)(vlSelf->WithResetTest__DOT__cycle)) 
                                & (7U == (IData)(vlSelf->WithResetTest__DOT__cycle)))));
        tracep->chgCData(oldp+2,(vlSelf->WithResetTest__DOT__reg_),8);
        tracep->chgBit(oldp+3,((9U == (IData)(vlSelf->WithResetTest__DOT__cycle))));
    }
    tracep->chgBit(oldp+4,(vlSelf->clock));
    tracep->chgBit(oldp+5,(vlSelf->reset));
}

void VWithResetTest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VWithResetTest___024root__trace_cleanup\n"); );
    // Init
    VWithResetTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VWithResetTest___024root*>(voidSelf);
    VWithResetTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
