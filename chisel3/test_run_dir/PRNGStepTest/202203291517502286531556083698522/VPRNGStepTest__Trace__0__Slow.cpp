// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPRNGStepTest__Syms.h"


VL_ATTR_COLD void VPRNGStepTest___024root__trace_init_sub__TOP__0(VPRNGStepTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGStepTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+60,"clock", false,-1);
    tracep->declBit(c+61,"reset", false,-1);
    tracep->pushNamePrefix("PRNGStepTest ");
    tracep->declBit(c+60,"clock", false,-1);
    tracep->declBit(c+61,"reset", false,-1);
    tracep->declBit(c+60,"a_prng_clock", false,-1);
    tracep->declBit(c+61,"a_prng_reset", false,-1);
    tracep->declBit(c+1,"a_prng_io_out_0", false,-1);
    tracep->declBit(c+2,"a_prng_io_out_1", false,-1);
    tracep->declBit(c+3,"a_prng_io_out_2", false,-1);
    tracep->declBit(c+4,"a_prng_io_out_3", false,-1);
    tracep->declBit(c+5,"a_prng_io_out_4", false,-1);
    tracep->declBit(c+6,"a_prng_io_out_5", false,-1);
    tracep->declBit(c+7,"a_prng_io_out_6", false,-1);
    tracep->declBit(c+8,"a_prng_io_out_7", false,-1);
    tracep->declBit(c+9,"a_prng_io_out_8", false,-1);
    tracep->declBit(c+10,"a_prng_io_out_9", false,-1);
    tracep->declBit(c+11,"a_prng_io_out_10", false,-1);
    tracep->declBit(c+12,"a_prng_io_out_11", false,-1);
    tracep->declBit(c+13,"a_prng_io_out_12", false,-1);
    tracep->declBit(c+14,"a_prng_io_out_13", false,-1);
    tracep->declBit(c+15,"a_prng_io_out_14", false,-1);
    tracep->declBit(c+16,"a_prng_io_out_15", false,-1);
    tracep->declBit(c+60,"b_prng_clock", false,-1);
    tracep->declBit(c+61,"b_prng_reset", false,-1);
    tracep->declBit(c+17,"b_prng_io_increment", false,-1);
    tracep->declBit(c+18,"b_prng_io_out_0", false,-1);
    tracep->declBit(c+19,"b_prng_io_out_1", false,-1);
    tracep->declBit(c+20,"b_prng_io_out_2", false,-1);
    tracep->declBit(c+21,"b_prng_io_out_3", false,-1);
    tracep->declBit(c+22,"b_prng_io_out_4", false,-1);
    tracep->declBit(c+23,"b_prng_io_out_5", false,-1);
    tracep->declBit(c+24,"b_prng_io_out_6", false,-1);
    tracep->declBit(c+25,"b_prng_io_out_7", false,-1);
    tracep->declBit(c+26,"b_prng_io_out_8", false,-1);
    tracep->declBit(c+27,"b_prng_io_out_9", false,-1);
    tracep->declBit(c+28,"b_prng_io_out_10", false,-1);
    tracep->declBit(c+29,"b_prng_io_out_11", false,-1);
    tracep->declBit(c+30,"b_prng_io_out_12", false,-1);
    tracep->declBit(c+31,"b_prng_io_out_13", false,-1);
    tracep->declBit(c+32,"b_prng_io_out_14", false,-1);
    tracep->declBit(c+33,"b_prng_io_out_15", false,-1);
    tracep->declBit(c+60,"c_prng_clock", false,-1);
    tracep->declBit(c+61,"c_prng_reset", false,-1);
    tracep->declBit(c+34,"c_prng_io_increment", false,-1);
    tracep->declBit(c+35,"c_prng_io_out_0", false,-1);
    tracep->declBit(c+36,"c_prng_io_out_1", false,-1);
    tracep->declBit(c+37,"c_prng_io_out_2", false,-1);
    tracep->declBit(c+38,"c_prng_io_out_3", false,-1);
    tracep->declBit(c+39,"c_prng_io_out_4", false,-1);
    tracep->declBit(c+40,"c_prng_io_out_5", false,-1);
    tracep->declBit(c+41,"c_prng_io_out_6", false,-1);
    tracep->declBit(c+42,"c_prng_io_out_7", false,-1);
    tracep->declBit(c+43,"c_prng_io_out_8", false,-1);
    tracep->declBit(c+44,"c_prng_io_out_9", false,-1);
    tracep->declBit(c+45,"c_prng_io_out_10", false,-1);
    tracep->declBit(c+46,"c_prng_io_out_11", false,-1);
    tracep->declBit(c+47,"c_prng_io_out_12", false,-1);
    tracep->declBit(c+48,"c_prng_io_out_13", false,-1);
    tracep->declBit(c+49,"c_prng_io_out_14", false,-1);
    tracep->declBit(c+50,"c_prng_io_out_15", false,-1);
    tracep->declBit(c+17,"count2", false,-1);
    tracep->declBus(c+51,"count4", false,-1, 1,0);
    tracep->declBus(c+52,"a_lo", false,-1, 7,0);
    tracep->declBus(c+53,"a", false,-1, 15,0);
    tracep->declBus(c+54,"b_lo", false,-1, 7,0);
    tracep->declBus(c+55,"b", false,-1, 15,0);
    tracep->declBus(c+56,"c_lo", false,-1, 7,0);
    tracep->declBus(c+57,"c", false,-1, 15,0);
    tracep->declBus(c+58,"done_value", false,-1, 3,0);
    tracep->declBit(c+59,"done_wrap_wrap", false,-1);
    tracep->pushNamePrefix("a_prng ");
    tracep->declBit(c+60,"clock", false,-1);
    tracep->declBit(c+61,"reset", false,-1);
    tracep->declBit(c+1,"io_out_0", false,-1);
    tracep->declBit(c+2,"io_out_1", false,-1);
    tracep->declBit(c+3,"io_out_2", false,-1);
    tracep->declBit(c+4,"io_out_3", false,-1);
    tracep->declBit(c+5,"io_out_4", false,-1);
    tracep->declBit(c+6,"io_out_5", false,-1);
    tracep->declBit(c+7,"io_out_6", false,-1);
    tracep->declBit(c+8,"io_out_7", false,-1);
    tracep->declBit(c+9,"io_out_8", false,-1);
    tracep->declBit(c+10,"io_out_9", false,-1);
    tracep->declBit(c+11,"io_out_10", false,-1);
    tracep->declBit(c+12,"io_out_11", false,-1);
    tracep->declBit(c+13,"io_out_12", false,-1);
    tracep->declBit(c+14,"io_out_13", false,-1);
    tracep->declBit(c+15,"io_out_14", false,-1);
    tracep->declBit(c+16,"io_out_15", false,-1);
    tracep->declBit(c+1,"state_0", false,-1);
    tracep->declBit(c+2,"state_1", false,-1);
    tracep->declBit(c+3,"state_2", false,-1);
    tracep->declBit(c+4,"state_3", false,-1);
    tracep->declBit(c+5,"state_4", false,-1);
    tracep->declBit(c+6,"state_5", false,-1);
    tracep->declBit(c+7,"state_6", false,-1);
    tracep->declBit(c+8,"state_7", false,-1);
    tracep->declBit(c+9,"state_8", false,-1);
    tracep->declBit(c+10,"state_9", false,-1);
    tracep->declBit(c+11,"state_10", false,-1);
    tracep->declBit(c+12,"state_11", false,-1);
    tracep->declBit(c+13,"state_12", false,-1);
    tracep->declBit(c+14,"state_13", false,-1);
    tracep->declBit(c+15,"state_14", false,-1);
    tracep->declBit(c+16,"state_15", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b_prng ");
    tracep->declBit(c+60,"clock", false,-1);
    tracep->declBit(c+61,"reset", false,-1);
    tracep->declBit(c+17,"io_increment", false,-1);
    tracep->declBit(c+18,"io_out_0", false,-1);
    tracep->declBit(c+19,"io_out_1", false,-1);
    tracep->declBit(c+20,"io_out_2", false,-1);
    tracep->declBit(c+21,"io_out_3", false,-1);
    tracep->declBit(c+22,"io_out_4", false,-1);
    tracep->declBit(c+23,"io_out_5", false,-1);
    tracep->declBit(c+24,"io_out_6", false,-1);
    tracep->declBit(c+25,"io_out_7", false,-1);
    tracep->declBit(c+26,"io_out_8", false,-1);
    tracep->declBit(c+27,"io_out_9", false,-1);
    tracep->declBit(c+28,"io_out_10", false,-1);
    tracep->declBit(c+29,"io_out_11", false,-1);
    tracep->declBit(c+30,"io_out_12", false,-1);
    tracep->declBit(c+31,"io_out_13", false,-1);
    tracep->declBit(c+32,"io_out_14", false,-1);
    tracep->declBit(c+33,"io_out_15", false,-1);
    tracep->declBit(c+18,"state_0", false,-1);
    tracep->declBit(c+19,"state_1", false,-1);
    tracep->declBit(c+20,"state_2", false,-1);
    tracep->declBit(c+21,"state_3", false,-1);
    tracep->declBit(c+22,"state_4", false,-1);
    tracep->declBit(c+23,"state_5", false,-1);
    tracep->declBit(c+24,"state_6", false,-1);
    tracep->declBit(c+25,"state_7", false,-1);
    tracep->declBit(c+26,"state_8", false,-1);
    tracep->declBit(c+27,"state_9", false,-1);
    tracep->declBit(c+28,"state_10", false,-1);
    tracep->declBit(c+29,"state_11", false,-1);
    tracep->declBit(c+30,"state_12", false,-1);
    tracep->declBit(c+31,"state_13", false,-1);
    tracep->declBit(c+32,"state_14", false,-1);
    tracep->declBit(c+33,"state_15", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("c_prng ");
    tracep->declBit(c+60,"clock", false,-1);
    tracep->declBit(c+61,"reset", false,-1);
    tracep->declBit(c+34,"io_increment", false,-1);
    tracep->declBit(c+35,"io_out_0", false,-1);
    tracep->declBit(c+36,"io_out_1", false,-1);
    tracep->declBit(c+37,"io_out_2", false,-1);
    tracep->declBit(c+38,"io_out_3", false,-1);
    tracep->declBit(c+39,"io_out_4", false,-1);
    tracep->declBit(c+40,"io_out_5", false,-1);
    tracep->declBit(c+41,"io_out_6", false,-1);
    tracep->declBit(c+42,"io_out_7", false,-1);
    tracep->declBit(c+43,"io_out_8", false,-1);
    tracep->declBit(c+44,"io_out_9", false,-1);
    tracep->declBit(c+45,"io_out_10", false,-1);
    tracep->declBit(c+46,"io_out_11", false,-1);
    tracep->declBit(c+47,"io_out_12", false,-1);
    tracep->declBit(c+48,"io_out_13", false,-1);
    tracep->declBit(c+49,"io_out_14", false,-1);
    tracep->declBit(c+50,"io_out_15", false,-1);
    tracep->declBit(c+35,"state_0", false,-1);
    tracep->declBit(c+36,"state_1", false,-1);
    tracep->declBit(c+37,"state_2", false,-1);
    tracep->declBit(c+38,"state_3", false,-1);
    tracep->declBit(c+39,"state_4", false,-1);
    tracep->declBit(c+40,"state_5", false,-1);
    tracep->declBit(c+41,"state_6", false,-1);
    tracep->declBit(c+42,"state_7", false,-1);
    tracep->declBit(c+43,"state_8", false,-1);
    tracep->declBit(c+44,"state_9", false,-1);
    tracep->declBit(c+45,"state_10", false,-1);
    tracep->declBit(c+46,"state_11", false,-1);
    tracep->declBit(c+47,"state_12", false,-1);
    tracep->declBit(c+48,"state_13", false,-1);
    tracep->declBit(c+49,"state_14", false,-1);
    tracep->declBit(c+50,"state_15", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPRNGStepTest___024root__trace_init_top(VPRNGStepTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGStepTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest___024root__trace_init_top\n"); );
    // Body
    VPRNGStepTest___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPRNGStepTest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VPRNGStepTest___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VPRNGStepTest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPRNGStepTest___024root__trace_register(VPRNGStepTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGStepTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPRNGStepTest___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPRNGStepTest___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPRNGStepTest___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPRNGStepTest___024root__trace_full_sub_0(VPRNGStepTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPRNGStepTest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest___024root__trace_full_top_0\n"); );
    // Init
    VPRNGStepTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPRNGStepTest___024root*>(voidSelf);
    VPRNGStepTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPRNGStepTest___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VPRNGStepTest___024root__trace_full_sub_0(VPRNGStepTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGStepTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGStepTest___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_0));
    tracep->fullBit(oldp+2,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_1));
    tracep->fullBit(oldp+3,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_2));
    tracep->fullBit(oldp+4,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_3));
    tracep->fullBit(oldp+5,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_4));
    tracep->fullBit(oldp+6,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_5));
    tracep->fullBit(oldp+7,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_6));
    tracep->fullBit(oldp+8,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_7));
    tracep->fullBit(oldp+9,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_8));
    tracep->fullBit(oldp+10,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_9));
    tracep->fullBit(oldp+11,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_10));
    tracep->fullBit(oldp+12,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_11));
    tracep->fullBit(oldp+13,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_12));
    tracep->fullBit(oldp+14,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_13));
    tracep->fullBit(oldp+15,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_14));
    tracep->fullBit(oldp+16,(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_15));
    tracep->fullBit(oldp+17,(vlSelf->PRNGStepTest__DOT__count2));
    tracep->fullBit(oldp+18,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_0));
    tracep->fullBit(oldp+19,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_1));
    tracep->fullBit(oldp+20,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_2));
    tracep->fullBit(oldp+21,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_3));
    tracep->fullBit(oldp+22,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_4));
    tracep->fullBit(oldp+23,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_5));
    tracep->fullBit(oldp+24,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_6));
    tracep->fullBit(oldp+25,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_7));
    tracep->fullBit(oldp+26,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_8));
    tracep->fullBit(oldp+27,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_9));
    tracep->fullBit(oldp+28,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_10));
    tracep->fullBit(oldp+29,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_11));
    tracep->fullBit(oldp+30,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_12));
    tracep->fullBit(oldp+31,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_13));
    tracep->fullBit(oldp+32,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_14));
    tracep->fullBit(oldp+33,(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_15));
    tracep->fullBit(oldp+34,((3U == (IData)(vlSelf->PRNGStepTest__DOT__count4))));
    tracep->fullBit(oldp+35,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_0));
    tracep->fullBit(oldp+36,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_1));
    tracep->fullBit(oldp+37,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_2));
    tracep->fullBit(oldp+38,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_3));
    tracep->fullBit(oldp+39,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_4));
    tracep->fullBit(oldp+40,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_5));
    tracep->fullBit(oldp+41,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_6));
    tracep->fullBit(oldp+42,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_7));
    tracep->fullBit(oldp+43,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_8));
    tracep->fullBit(oldp+44,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_9));
    tracep->fullBit(oldp+45,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_10));
    tracep->fullBit(oldp+46,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_11));
    tracep->fullBit(oldp+47,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_12));
    tracep->fullBit(oldp+48,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_13));
    tracep->fullBit(oldp+49,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_14));
    tracep->fullBit(oldp+50,(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_15));
    tracep->fullCData(oldp+51,(vlSelf->PRNGStepTest__DOT__count4),2);
    tracep->fullCData(oldp+52,((((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_7) 
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
    tracep->fullSData(oldp+53,((((IData)(vlSelf->PRNGStepTest__DOT__a_prng__DOT__state_15) 
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
    tracep->fullCData(oldp+54,((((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_7) 
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
    tracep->fullSData(oldp+55,((((IData)(vlSelf->PRNGStepTest__DOT__b_prng__DOT__state_15) 
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
    tracep->fullCData(oldp+56,((((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_7) 
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
    tracep->fullSData(oldp+57,((((IData)(vlSelf->PRNGStepTest__DOT__c_prng__DOT__state_15) 
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
    tracep->fullCData(oldp+58,(vlSelf->PRNGStepTest__DOT__done_value),4);
    tracep->fullBit(oldp+59,((0xfU == (IData)(vlSelf->PRNGStepTest__DOT__done_value))));
    tracep->fullBit(oldp+60,(vlSelf->clock));
    tracep->fullBit(oldp+61,(vlSelf->reset));
}
