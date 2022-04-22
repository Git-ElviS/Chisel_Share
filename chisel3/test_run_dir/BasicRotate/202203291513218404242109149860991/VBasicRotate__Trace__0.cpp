// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBasicRotate__Syms.h"


void VBasicRotate___024root__trace_chg_sub_0(VBasicRotate___024root* vlSelf, VerilatedVcd* tracep);

void VBasicRotate___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicRotate___024root__trace_chg_top_0\n"); );
    // Init
    VBasicRotate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBasicRotate___024root*>(voidSelf);
    VBasicRotate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VBasicRotate___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VBasicRotate___024root__trace_chg_sub_0(VBasicRotate___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBasicRotate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicRotate___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_0));
        tracep->chgBit(oldp+1,(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_1));
        tracep->chgBit(oldp+2,(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_2));
        tracep->chgBit(oldp+3,(vlSelf->BasicRotate__DOT__shiftAmount_prng__DOT__state_3));
        tracep->chgCData(oldp+4,(vlSelf->BasicRotate__DOT__shiftAmount),4);
        tracep->chgCData(oldp+5,(vlSelf->BasicRotate__DOT__ctr),4);
        tracep->chgCData(oldp+6,(((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                   ? ((4U & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                             << 2U)) 
                                      | (3U & ((IData)(vlSelf->BasicRotate__DOT___rotL_T_15) 
                                               >> 1U)))
                                   : (IData)(vlSelf->BasicRotate__DOT___rotL_T_15))),3);
        tracep->chgCData(oldp+7,(((8U & (IData)(vlSelf->BasicRotate__DOT__shiftAmount))
                                   ? ((6U & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                             << 1U)) 
                                      | (1U & ((IData)(vlSelf->BasicRotate__DOT___rotR_T_14) 
                                               >> 2U)))
                                   : (IData)(vlSelf->BasicRotate__DOT___rotR_T_14))),3);
    }
    tracep->chgBit(oldp+8,(vlSelf->clock));
    tracep->chgBit(oldp+9,(vlSelf->reset));
}

void VBasicRotate___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBasicRotate___024root__trace_cleanup\n"); );
    // Init
    VBasicRotate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBasicRotate___024root*>(voidSelf);
    VBasicRotate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
