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
    tracep->declBit(c+18,"clock", false,-1);
    tracep->declBit(c+19,"reset", false,-1);
    tracep->pushNamePrefix("LFSRMaxPeriod ");
    tracep->declBit(c+18,"clock", false,-1);
    tracep->declBit(c+19,"reset", false,-1);
    tracep->declBit(c+18,"rv_prng_clock", false,-1);
    tracep->declBit(c+19,"rv_prng_reset", false,-1);
    tracep->declBit(c+1,"rv_prng_io_out_0", false,-1);
    tracep->declBit(c+2,"rv_prng_io_out_1", false,-1);
    tracep->declBit(c+3,"rv_prng_io_out_2", false,-1);
    tracep->declBit(c+4,"rv_prng_io_out_3", false,-1);
    tracep->declBit(c+5,"rv_prng_io_out_4", false,-1);
    tracep->declBit(c+6,"rv_prng_io_out_5", false,-1);
    tracep->declBit(c+7,"rv_prng_io_out_6", false,-1);
    tracep->declBit(c+8,"rv_prng_io_out_7", false,-1);
    tracep->declBus(c+9,"rv_lo", false,-1, 3,0);
    tracep->declBus(c+10,"rv_hi", false,-1, 3,0);
    tracep->declBus(c+11,"rv", false,-1, 7,0);
    tracep->declBit(c+12,"started", false,-1);
    tracep->declBus(c+13,"seed", false,-1, 7,0);
    tracep->declBus(c+14,"wrap_value", false,-1, 7,0);
    tracep->declBit(c+15,"wrap_wrap_wrap", false,-1);
    tracep->declBit(c+16,"wrap", false,-1);
    tracep->declBus(c+17,"last", false,-1, 7,0);
    tracep->pushNamePrefix("rv_prng ");
    tracep->declBit(c+18,"clock", false,-1);
    tracep->declBit(c+19,"reset", false,-1);
    tracep->declBit(c+1,"io_out_0", false,-1);
    tracep->declBit(c+2,"io_out_1", false,-1);
    tracep->declBit(c+3,"io_out_2", false,-1);
    tracep->declBit(c+4,"io_out_3", false,-1);
    tracep->declBit(c+5,"io_out_4", false,-1);
    tracep->declBit(c+6,"io_out_5", false,-1);
    tracep->declBit(c+7,"io_out_6", false,-1);
    tracep->declBit(c+8,"io_out_7", false,-1);
    tracep->declBit(c+1,"state_0", false,-1);
    tracep->declBit(c+2,"state_1", false,-1);
    tracep->declBit(c+3,"state_2", false,-1);
    tracep->declBit(c+4,"state_3", false,-1);
    tracep->declBit(c+5,"state_4", false,-1);
    tracep->declBit(c+6,"state_5", false,-1);
    tracep->declBit(c+7,"state_6", false,-1);
    tracep->declBit(c+8,"state_7", false,-1);
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
    tracep->fullCData(oldp+9,((((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_3) 
                                << 3U) | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_2) 
                                           << 2U) | 
                                          (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_1) 
                                            << 1U) 
                                           | (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_0))))),4);
    tracep->fullCData(oldp+10,((((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_7) 
                                 << 3U) | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_6) 
                                            << 2U) 
                                           | (((IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_5) 
                                               << 1U) 
                                              | (IData)(vlSelf->LFSRMaxPeriod__DOT__rv_prng__DOT__state_4))))),4);
    tracep->fullCData(oldp+11,(vlSelf->LFSRMaxPeriod__DOT__rv),8);
    tracep->fullBit(oldp+12,(vlSelf->LFSRMaxPeriod__DOT__started));
    tracep->fullCData(oldp+13,(vlSelf->LFSRMaxPeriod__DOT__seed),8);
    tracep->fullCData(oldp+14,(vlSelf->LFSRMaxPeriod__DOT__wrap_value),8);
    tracep->fullBit(oldp+15,((0xfeU == (IData)(vlSelf->LFSRMaxPeriod__DOT__wrap_value))));
    tracep->fullBit(oldp+16,(((IData)(vlSelf->LFSRMaxPeriod__DOT__started) 
                              & (0xfeU == (IData)(vlSelf->LFSRMaxPeriod__DOT__wrap_value)))));
    tracep->fullCData(oldp+17,(vlSelf->LFSRMaxPeriod__DOT__last),8);
    tracep->fullBit(oldp+18,(vlSelf->clock));
    tracep->fullBit(oldp+19,(vlSelf->reset));
}
