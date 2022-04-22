// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPRNGUpdateSeedTest__Syms.h"


void VPRNGUpdateSeedTest___024root__trace_chg_sub_0(VPRNGUpdateSeedTest___024root* vlSelf, VerilatedVcd* tracep);

void VPRNGUpdateSeedTest___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest___024root__trace_chg_top_0\n"); );
    // Init
    VPRNGUpdateSeedTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPRNGUpdateSeedTest___024root*>(voidSelf);
    VPRNGUpdateSeedTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPRNGUpdateSeedTest___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VPRNGUpdateSeedTest___024root__trace_chg_sub_0(VPRNGUpdateSeedTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGUpdateSeedTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((2U == (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count))));
        tracep->chgBit(oldp+1,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_0));
        tracep->chgBit(oldp+2,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_1));
        tracep->chgBit(oldp+3,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_2));
        tracep->chgBit(oldp+4,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_3));
        tracep->chgBit(oldp+5,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_4));
        tracep->chgBit(oldp+6,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_5));
        tracep->chgBit(oldp+7,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_6));
        tracep->chgBit(oldp+8,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_7));
        tracep->chgBit(oldp+9,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_8));
        tracep->chgBit(oldp+10,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_9));
        tracep->chgBit(oldp+11,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_10));
        tracep->chgBit(oldp+12,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_11));
        tracep->chgBit(oldp+13,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_12));
        tracep->chgBit(oldp+14,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_13));
        tracep->chgBit(oldp+15,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_14));
        tracep->chgBit(oldp+16,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_15));
        tracep->chgCData(oldp+17,(vlSelf->PRNGUpdateSeedTest__DOT__count),2);
        tracep->chgBit(oldp+18,((3U == (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count))));
        tracep->chgCData(oldp+19,((((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_7) 
                                    << 7U) | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_6) 
                                               << 6U) 
                                              | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_5) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_4) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_3) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_1) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_0))))))))),8);
    }
    tracep->chgBit(oldp+20,(vlSelf->clock));
    tracep->chgBit(oldp+21,(vlSelf->reset));
}

void VPRNGUpdateSeedTest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest___024root__trace_cleanup\n"); );
    // Init
    VPRNGUpdateSeedTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPRNGUpdateSeedTest___024root*>(voidSelf);
    VPRNGUpdateSeedTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
