// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLFSRMaxPeriod__Syms.h"


void VLFSRMaxPeriod___024root__trace_chg_sub_0(VLFSRMaxPeriod___024root* vlSelf, VerilatedVcd* tracep);

void VLFSRMaxPeriod___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod___024root__trace_chg_top_0\n"); );
    // Init
    VLFSRMaxPeriod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLFSRMaxPeriod___024root*>(voidSelf);
    VLFSRMaxPeriod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VLFSRMaxPeriod___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VLFSRMaxPeriod___024root__trace_chg_sub_0(VLFSRMaxPeriod___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRMaxPeriod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0));
        tracep->chgBit(oldp+1,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1));
        tracep->chgBit(oldp+2,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_2));
        tracep->chgBit(oldp+3,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_3));
        tracep->chgBit(oldp+4,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_4));
        tracep->chgBit(oldp+5,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_5));
        tracep->chgBit(oldp+6,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_6));
        tracep->chgBit(oldp+7,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_7));
        tracep->chgBit(oldp+8,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_8));
        tracep->chgBit(oldp+9,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_9));
        tracep->chgBit(oldp+10,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_10));
        tracep->chgBit(oldp+11,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_11));
        tracep->chgCData(oldp+12,(vlSelf->LFSRMaxPeriod__DOT__rv_lo),6);
        tracep->chgCData(oldp+13,((((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_11) 
                                    << 5U) | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_10) 
                                               << 4U) 
                                              | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_9) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_8) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_7) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_6))))))),6);
        tracep->chgSData(oldp+14,(vlSelf->LFSRMaxPeriod__DOT__rv),12);
        tracep->chgBit(oldp+15,(vlSelf->LFSRMaxPeriod__DOT__started));
        tracep->chgSData(oldp+16,(vlSelf->LFSRMaxPeriod__DOT__seed),12);
        tracep->chgSData(oldp+17,(vlSelf->LFSRMaxPeriod__DOT__wrap_value),12);
        tracep->chgBit(oldp+18,((0xffeU == (IData)(vlSelf->LFSRMaxPeriod__DOT__wrap_value))));
        tracep->chgBit(oldp+19,(((IData)(vlSelf->LFSRMaxPeriod__DOT__started) 
                                 & (0xffeU == (IData)(vlSelf->LFSRMaxPeriod__DOT__wrap_value)))));
        tracep->chgSData(oldp+20,(vlSelf->LFSRMaxPeriod__DOT__last),12);
    }
    tracep->chgBit(oldp+21,(vlSelf->clock));
    tracep->chgBit(oldp+22,(vlSelf->reset));
}

void VLFSRMaxPeriod___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod___024root__trace_cleanup\n"); );
    // Init
    VLFSRMaxPeriod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLFSRMaxPeriod___024root*>(voidSelf);
    VLFSRMaxPeriod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
