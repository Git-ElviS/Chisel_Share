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
        tracep->chgCData(oldp+0,(((2U > (IData)(vlSelf->VecLiteralSpec_Anon__DOT__counter))
                                   ? 0xffU : 0U)),8);
        tracep->chgCData(oldp+1,(vlSelf->VecLiteralSpec_Anon__DOT__m__DOT__y_1),8);
        tracep->chgCData(oldp+2,(vlSelf->VecLiteralSpec_Anon__DOT__m__DOT__y_2),8);
        tracep->chgCData(oldp+3,(vlSelf->VecLiteralSpec_Anon__DOT__counter),3);
        tracep->chgBit(oldp+4,((7U == (IData)(vlSelf->VecLiteralSpec_Anon__DOT__counter))));
    }
    tracep->chgBit(oldp+5,(vlSelf->clock));
    tracep->chgBit(oldp+6,(vlSelf->reset));
    tracep->chgBit(oldp+7,(((2U > (IData)(vlSelf->VecLiteralSpec_Anon__DOT__counter))
                             ? (IData)(vlSelf->reset)
                             : ((2U == (IData)(vlSelf->VecLiteralSpec_Anon__DOT__counter))
                                 ? (IData)(vlSelf->reset)
                                 : ((3U == (IData)(vlSelf->VecLiteralSpec_Anon__DOT__counter)) 
                                    | (IData)(vlSelf->reset))))));
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
