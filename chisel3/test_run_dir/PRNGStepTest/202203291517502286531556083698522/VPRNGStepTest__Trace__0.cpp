// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPRNGStepTest__Syms.h"


void VPRNGStepTest___024root__trace_chg_sub_0(VPRNGStepTest___024root* vlSelf, VerilatedVcd* tracep);

void VPRNGStepTest___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest___024root__trace_chg_top_0\n"); );
    // Init
    VPRNGStepTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPRNGStepTest___024root*>(voidSelf);
    VPRNGStepTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPRNGStepTest___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VPRNGStepTest___024root__trace_chg_sub_0(VPRNGStepTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGStepTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_0));
        tracep->chgBit(oldp+1,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_1));
        tracep->chgBit(oldp+2,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_2));
        tracep->chgBit(oldp+3,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_3));
        tracep->chgBit(oldp+4,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_4));
        tracep->chgBit(oldp+5,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_5));
        tracep->chgBit(oldp+6,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_6));
        tracep->chgBit(oldp+7,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_7));
        tracep->chgBit(oldp+8,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_8));
        tracep->chgBit(oldp+9,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_9));
        tracep->chgBit(oldp+10,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_10));
        tracep->chgBit(oldp+11,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_11));
        tracep->chgBit(oldp+12,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_12));
        tracep->chgBit(oldp+13,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_13));
        tracep->chgBit(oldp+14,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_14));
        tracep->chgBit(oldp+15,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_15));
        tracep->chgBit(oldp+16,(vlSelf->PRNGStepTest__DOT__count2));
        tracep->chgBit(oldp+17,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_0));
        tracep->chgBit(oldp+18,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_1));
        tracep->chgBit(oldp+19,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_2));
        tracep->chgBit(oldp+20,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_3));
        tracep->chgBit(oldp+21,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_4));
        tracep->chgBit(oldp+22,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_5));
        tracep->chgBit(oldp+23,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_6));
        tracep->chgBit(oldp+24,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_7));
        tracep->chgBit(oldp+25,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_8));
        tracep->chgBit(oldp+26,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_9));
        tracep->chgBit(oldp+27,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_10));
        tracep->chgBit(oldp+28,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_11));
        tracep->chgBit(oldp+29,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_12));
        tracep->chgBit(oldp+30,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_13));
        tracep->chgBit(oldp+31,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_14));
        tracep->chgBit(oldp+32,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_15));
        tracep->chgBit(oldp+33,((3U == (IData)(vlSelf->PRNGStepTest__DOT__count4))));
        tracep->chgBit(oldp+34,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_0));
        tracep->chgBit(oldp+35,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_1));
        tracep->chgBit(oldp+36,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_2));
        tracep->chgBit(oldp+37,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_3));
        tracep->chgBit(oldp+38,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_4));
        tracep->chgBit(oldp+39,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_5));
        tracep->chgBit(oldp+40,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_6));
        tracep->chgBit(oldp+41,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_7));
        tracep->chgBit(oldp+42,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_8));
        tracep->chgBit(oldp+43,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_9));
        tracep->chgBit(oldp+44,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_10));
        tracep->chgBit(oldp+45,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_11));
        tracep->chgBit(oldp+46,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_12));
        tracep->chgBit(oldp+47,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_13));
        tracep->chgBit(oldp+48,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_14));
        tracep->chgBit(oldp+49,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_15));
        tracep->chgCData(oldp+50,(vlSelf->PRNGStepTest__DOT__count4),2);
        tracep->chgCData(oldp+51,((((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_7) 
                                    << 7U) | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_6) 
                                               << 6U) 
                                              | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_5) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_4) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_3) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_1) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_0))))))))),8);
        tracep->chgSData(oldp+52,((((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_15) 
                                    << 0xfU) | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_14) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_13) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_12) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_11) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_10) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_9) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_8) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_7) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_6) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_5) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_4) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_0))))))))))))))))),16);
        tracep->chgCData(oldp+53,((((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_7) 
                                    << 7U) | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_6) 
                                               << 6U) 
                                              | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_5) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_4) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_3) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_1) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_0))))))))),8);
        tracep->chgSData(oldp+54,((((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_15) 
                                    << 0xfU) | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_14) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_13) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_12) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_11) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_10) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_9) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_8) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_7) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_6) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_5) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_4) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_0))))))))))))))))),16);
        tracep->chgCData(oldp+55,((((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_7) 
                                    << 7U) | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_6) 
                                               << 6U) 
                                              | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_5) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_4) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_3) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_1) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_0))))))))),8);
        tracep->chgSData(oldp+56,((((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_15) 
                                    << 0xfU) | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_14) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_13) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_12) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_11) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_10) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_9) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_8) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_7) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_6) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_5) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_4) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_0))))))))))))))))),16);
        tracep->chgCData(oldp+57,(vlSelf->PRNGStepTest__DOT__done_value),4);
        tracep->chgBit(oldp+58,((0xfU == (IData)(vlSelf->PRNGStepTest__DOT__done_value))));
    }
    tracep->chgBit(oldp+59,(vlSelf->clock));
    tracep->chgBit(oldp+60,(vlSelf->reset));
}

void VPRNGStepTest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest___024root__trace_cleanup\n"); );
    // Init
    VPRNGStepTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPRNGStepTest___024root*>(voidSelf);
    VPRNGStepTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
