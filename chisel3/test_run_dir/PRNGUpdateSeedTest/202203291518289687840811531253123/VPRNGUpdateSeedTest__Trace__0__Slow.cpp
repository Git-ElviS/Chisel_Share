// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPRNGUpdateSeedTest__Syms.h"


VL_ATTR_COLD void VPRNGUpdateSeedTest___024root__trace_init_sub__TOP__0(VPRNGUpdateSeedTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGUpdateSeedTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+21,"clock", false,-1);
    tracep->declBit(c+22,"reset", false,-1);
    tracep->pushNamePrefix("PRNGUpdateSeedTest ");
    tracep->declBit(c+21,"clock", false,-1);
    tracep->declBit(c+22,"reset", false,-1);
    tracep->declBit(c+21,"a_clock", false,-1);
    tracep->declBit(c+22,"a_reset", false,-1);
    tracep->declBit(c+1,"a_io_seed_valid", false,-1);
    tracep->declBit(c+2,"a_io_out_0", false,-1);
    tracep->declBit(c+3,"a_io_out_1", false,-1);
    tracep->declBit(c+4,"a_io_out_2", false,-1);
    tracep->declBit(c+5,"a_io_out_3", false,-1);
    tracep->declBit(c+6,"a_io_out_4", false,-1);
    tracep->declBit(c+7,"a_io_out_5", false,-1);
    tracep->declBit(c+8,"a_io_out_6", false,-1);
    tracep->declBit(c+9,"a_io_out_7", false,-1);
    tracep->declBit(c+10,"a_io_out_8", false,-1);
    tracep->declBit(c+11,"a_io_out_9", false,-1);
    tracep->declBit(c+12,"a_io_out_10", false,-1);
    tracep->declBit(c+13,"a_io_out_11", false,-1);
    tracep->declBit(c+14,"a_io_out_12", false,-1);
    tracep->declBit(c+15,"a_io_out_13", false,-1);
    tracep->declBit(c+16,"a_io_out_14", false,-1);
    tracep->declBit(c+17,"a_io_out_15", false,-1);
    tracep->declBus(c+18,"count", false,-1, 1,0);
    tracep->declBit(c+19,"wrap_wrap", false,-1);
    tracep->declBus(c+20,"lo", false,-1, 7,0);
    tracep->pushNamePrefix("a ");
    tracep->declBit(c+21,"clock", false,-1);
    tracep->declBit(c+22,"reset", false,-1);
    tracep->declBit(c+1,"io_seed_valid", false,-1);
    tracep->declBit(c+2,"io_out_0", false,-1);
    tracep->declBit(c+3,"io_out_1", false,-1);
    tracep->declBit(c+4,"io_out_2", false,-1);
    tracep->declBit(c+5,"io_out_3", false,-1);
    tracep->declBit(c+6,"io_out_4", false,-1);
    tracep->declBit(c+7,"io_out_5", false,-1);
    tracep->declBit(c+8,"io_out_6", false,-1);
    tracep->declBit(c+9,"io_out_7", false,-1);
    tracep->declBit(c+10,"io_out_8", false,-1);
    tracep->declBit(c+11,"io_out_9", false,-1);
    tracep->declBit(c+12,"io_out_10", false,-1);
    tracep->declBit(c+13,"io_out_11", false,-1);
    tracep->declBit(c+14,"io_out_12", false,-1);
    tracep->declBit(c+15,"io_out_13", false,-1);
    tracep->declBit(c+16,"io_out_14", false,-1);
    tracep->declBit(c+17,"io_out_15", false,-1);
    tracep->declBit(c+2,"state_0", false,-1);
    tracep->declBit(c+3,"state_1", false,-1);
    tracep->declBit(c+4,"state_2", false,-1);
    tracep->declBit(c+5,"state_3", false,-1);
    tracep->declBit(c+6,"state_4", false,-1);
    tracep->declBit(c+7,"state_5", false,-1);
    tracep->declBit(c+8,"state_6", false,-1);
    tracep->declBit(c+9,"state_7", false,-1);
    tracep->declBit(c+10,"state_8", false,-1);
    tracep->declBit(c+11,"state_9", false,-1);
    tracep->declBit(c+12,"state_10", false,-1);
    tracep->declBit(c+13,"state_11", false,-1);
    tracep->declBit(c+14,"state_12", false,-1);
    tracep->declBit(c+15,"state_13", false,-1);
    tracep->declBit(c+16,"state_14", false,-1);
    tracep->declBit(c+17,"state_15", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPRNGUpdateSeedTest___024root__trace_init_top(VPRNGUpdateSeedTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGUpdateSeedTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest___024root__trace_init_top\n"); );
    // Body
    VPRNGUpdateSeedTest___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPRNGUpdateSeedTest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VPRNGUpdateSeedTest___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VPRNGUpdateSeedTest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPRNGUpdateSeedTest___024root__trace_register(VPRNGUpdateSeedTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGUpdateSeedTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPRNGUpdateSeedTest___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPRNGUpdateSeedTest___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPRNGUpdateSeedTest___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPRNGUpdateSeedTest___024root__trace_full_sub_0(VPRNGUpdateSeedTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPRNGUpdateSeedTest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest___024root__trace_full_top_0\n"); );
    // Init
    VPRNGUpdateSeedTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPRNGUpdateSeedTest___024root*>(voidSelf);
    VPRNGUpdateSeedTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPRNGUpdateSeedTest___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VPRNGUpdateSeedTest___024root__trace_full_sub_0(VPRNGUpdateSeedTest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPRNGUpdateSeedTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPRNGUpdateSeedTest___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,((2U == (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count))));
    tracep->fullBit(oldp+2,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_0));
    tracep->fullBit(oldp+3,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_1));
    tracep->fullBit(oldp+4,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_2));
    tracep->fullBit(oldp+5,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_3));
    tracep->fullBit(oldp+6,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_4));
    tracep->fullBit(oldp+7,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_5));
    tracep->fullBit(oldp+8,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_6));
    tracep->fullBit(oldp+9,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_7));
    tracep->fullBit(oldp+10,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_8));
    tracep->fullBit(oldp+11,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_9));
    tracep->fullBit(oldp+12,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_10));
    tracep->fullBit(oldp+13,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_11));
    tracep->fullBit(oldp+14,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_12));
    tracep->fullBit(oldp+15,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_13));
    tracep->fullBit(oldp+16,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_14));
    tracep->fullBit(oldp+17,(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_15));
    tracep->fullCData(oldp+18,(vlSelf->PRNGUpdateSeedTest__DOT__count),2);
    tracep->fullBit(oldp+19,((3U == (IData)(vlSelf->PRNGUpdateSeedTest__DOT__count))));
    tracep->fullCData(oldp+20,((((IData)(vlSelf->PRNGUpdateSeedTest__DOT__a__DOT__state_7) 
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
    tracep->fullBit(oldp+21,(vlSelf->clock));
    tracep->fullBit(oldp+22,(vlSelf->reset));
}
