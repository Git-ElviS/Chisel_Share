// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMatchedRotateLeftAndRight__Syms.h"


void VMatchedRotateLeftAndRight___024root__trace_chg_sub_0(VMatchedRotateLeftAndRight___024root* vlSelf, VerilatedVcd* tracep);

void VMatchedRotateLeftAndRight___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatchedRotateLeftAndRight___024root__trace_chg_top_0\n"); );
    // Init
    VMatchedRotateLeftAndRight___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMatchedRotateLeftAndRight___024root*>(voidSelf);
    VMatchedRotateLeftAndRight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMatchedRotateLeftAndRight___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VMatchedRotateLeftAndRight___024root__trace_chg_sub_0(VMatchedRotateLeftAndRight___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMatchedRotateLeftAndRight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatchedRotateLeftAndRight___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgSData(oldp+0,(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1),13);
        tracep->chgSData(oldp+1,(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2),13);
        tracep->chgSData(oldp+2,(((0x1000U & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount1))
                                   ? ((0x1ffeU & ((IData)(vlSelf->MatchedRotateLeftAndRight__DOT___out1_T_60) 
                                                  << 1U)) 
                                      | (1U & ((IData)(vlSelf->MatchedRotateLeftAndRight__DOT___out1_T_60) 
                                               >> 0xcU)))
                                   : (IData)(vlSelf->MatchedRotateLeftAndRight__DOT___out1_T_60))),13);
        tracep->chgSData(oldp+3,(((0x1000U & (IData)(vlSelf->MatchedRotateLeftAndRight__DOT__shiftAmount2))
                                   ? ((0x1000U & ((IData)(vlSelf->MatchedRotateLeftAndRight__DOT___out2_T_60) 
                                                  << 0xcU)) 
                                      | (0xfffU & ((IData)(vlSelf->MatchedRotateLeftAndRight__DOT___out2_T_60) 
                                                   >> 1U)))
                                   : (IData)(vlSelf->MatchedRotateLeftAndRight__DOT___out2_T_60))),13);
    }
    tracep->chgBit(oldp+4,(vlSelf->clock));
    tracep->chgBit(oldp+5,(vlSelf->reset));
}

void VMatchedRotateLeftAndRight___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatchedRotateLeftAndRight___024root__trace_cleanup\n"); );
    // Init
    VMatchedRotateLeftAndRight___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMatchedRotateLeftAndRight___024root*>(voidSelf);
    VMatchedRotateLeftAndRight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
