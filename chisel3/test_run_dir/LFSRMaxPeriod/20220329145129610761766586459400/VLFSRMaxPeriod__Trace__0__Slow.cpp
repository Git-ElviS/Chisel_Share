// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLFSRMaxPeriod__Syms.h"


VL_ATTR_COLD void VLFSRMaxPeriod___024root__trace_init_sub__TOP__0(VLFSRMaxPeriod___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRMaxPeriod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+21,"clock", false,-1);
    tracep->declBit(c+22,"reset", false,-1);
    tracep->pushNamePrefix("LFSRMaxPeriod ");
    tracep->declBit(c+21,"clock", false,-1);
    tracep->declBit(c+22,"reset", false,-1);
    tracep->declBit(c+21,"rv_prng_clock", false,-1);
    tracep->declBit(c+22,"rv_prng_reset", false,-1);
    tracep->declBit(c+1,"rv_prng_io_out_0", false,-1);
    tracep->declBit(c+2,"rv_prng_io_out_1", false,-1);
    tracep->declBit(c+3,"rv_prng_io_out_2", false,-1);
    tracep->declBit(c+4,"rv_prng_io_out_3", false,-1);
    tracep->declBit(c+5,"rv_prng_io_out_4", false,-1);
    tracep->declBit(c+6,"rv_prng_io_out_5", false,-1);
    tracep->declBit(c+7,"rv_prng_io_out_6", false,-1);
    tracep->declBit(c+8,"rv_prng_io_out_7", false,-1);
    tracep->declBit(c+9,"rv_prng_io_out_8", false,-1);
    tracep->declBit(c+10,"rv_prng_io_out_9", false,-1);
    tracep->declBit(c+11,"rv_prng_io_out_10", false,-1);
    tracep->declBus(c+12,"rv_lo", false,-1, 4,0);
    tracep->declBus(c+13,"rv_hi", false,-1, 5,0);
    tracep->declBus(c+14,"rv", false,-1, 10,0);
    tracep->declBit(c+15,"started", false,-1);
    tracep->declBus(c+16,"seed", false,-1, 10,0);
    tracep->declBus(c+17,"wrap_value", false,-1, 10,0);
    tracep->declBit(c+18,"wrap_wrap_wrap", false,-1);
    tracep->declBit(c+19,"wrap", false,-1);
    tracep->declBus(c+20,"last", false,-1, 10,0);
    tracep->pushNamePrefix("rv_prng ");
    tracep->declBit(c+21,"clock", false,-1);
    tracep->declBit(c+22,"reset", false,-1);
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
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VLFSRMaxPeriod___024root__trace_init_top(VLFSRMaxPeriod___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRMaxPeriod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod___024root__trace_init_top\n"); );
    // Body
    VLFSRMaxPeriod___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VLFSRMaxPeriod___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VLFSRMaxPeriod___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VLFSRMaxPeriod___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VLFSRMaxPeriod___024root__trace_register(VLFSRMaxPeriod___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRMaxPeriod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VLFSRMaxPeriod___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VLFSRMaxPeriod___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VLFSRMaxPeriod___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VLFSRMaxPeriod___024root__trace_full_sub_0(VLFSRMaxPeriod___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VLFSRMaxPeriod___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod___024root__trace_full_top_0\n"); );
    // Init
    VLFSRMaxPeriod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLFSRMaxPeriod___024root*>(voidSelf);
    VLFSRMaxPeriod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VLFSRMaxPeriod___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VLFSRMaxPeriod___024root__trace_full_sub_0(VLFSRMaxPeriod___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSRMaxPeriod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSRMaxPeriod___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0));
    tracep->fullBit(oldp+2,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1));
    tracep->fullBit(oldp+3,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_2));
    tracep->fullBit(oldp+4,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_3));
    tracep->fullBit(oldp+5,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_4));
    tracep->fullBit(oldp+6,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_5));
    tracep->fullBit(oldp+7,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_6));
    tracep->fullBit(oldp+8,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_7));
    tracep->fullBit(oldp+9,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_8));
    tracep->fullBit(oldp+10,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_9));
    tracep->fullBit(oldp+11,(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_10));
    tracep->fullCData(oldp+12,(vlSelf->LFSRMaxPeriod__DOT__rv_lo),5);
    tracep->fullCData(oldp+13,((((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_10) 
                                 << 5U) | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_9) 
                                            << 4U) 
                                           | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_8) 
                                               << 3U) 
                                              | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_7) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_6) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_5))))))),6);
    tracep->fullSData(oldp+14,(vlSelf->LFSRMaxPeriod__DOT__rv),11);
    tracep->fullBit(oldp+15,(vlSelf->LFSRMaxPeriod__DOT__started));
    tracep->fullSData(oldp+16,(vlSelf->LFSRMaxPeriod__DOT__seed),11);
    tracep->fullSData(oldp+17,(vlSelf->LFSRMaxPeriod__DOT__wrap_value),11);
    tracep->fullBit(oldp+18,((0x7feU == (IData)(vlSelf->LFSRMaxPeriod__DOT__wrap_value))));
    tracep->fullBit(oldp+19,(((IData)(vlSelf->LFSRMaxPeriod__DOT__started) 
                              & (0x7feU == (IData)(vlSelf->LFSRMaxPeriod__DOT__wrap_value)))));
    tracep->fullSData(oldp+20,(vlSelf->LFSRMaxPeriod__DOT__last),11);
    tracep->fullBit(oldp+21,(vlSelf->clock));
    tracep->fullBit(oldp+22,(vlSelf->reset));
}
