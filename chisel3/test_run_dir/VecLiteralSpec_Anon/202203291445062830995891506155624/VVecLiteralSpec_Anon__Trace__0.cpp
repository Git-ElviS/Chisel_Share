// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VVecLiteralSpec_Anon__Syms.h"


void VVecLiteralSpec_Anon___024root__trace_chg_sub_0(VVecLiteralSpec_Anon___024root* vlSelf, VerilatedVcd* tracep);

void VVecLiteralSpec_Anon___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecLiteralSpec_Anon___024root__trace_chg_top_0\n"); );
    // Init
    VVecLiteralSpec_Anon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VVecLiteralSpec_Anon___024root*>(voidSelf);
    VVecLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VVecLiteralSpec_Anon___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VVecLiteralSpec_Anon___024root__trace_chg_sub_0(VVecLiteralSpec_Anon___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VVecLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecLiteralSpec_Anon___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgSData(oldp+0,(vlSelf->VecLiteralSpec_Anon__DOT__r_0),11);
        tracep->chgSData(oldp+1,(vlSelf->VecLiteralSpec_Anon__DOT__r_1),11);
        tracep->chgSData(oldp+2,(vlSelf->VecLiteralSpec_Anon__DOT__r_2),11);
    }
    tracep->chgBit(oldp+3,(vlSelf->clock));
    tracep->chgBit(oldp+4,(vlSelf->reset));
}

void VVecLiteralSpec_Anon___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVecLiteralSpec_Anon___024root__trace_cleanup\n"); );
    // Init
    VVecLiteralSpec_Anon___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VVecLiteralSpec_Anon___024root*>(voidSelf);
    VVecLiteralSpec_Anon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
