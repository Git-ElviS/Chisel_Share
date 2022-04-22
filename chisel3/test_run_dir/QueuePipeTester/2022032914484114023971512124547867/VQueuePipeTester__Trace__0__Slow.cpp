// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueuePipeTester__Syms.h"


VL_ATTR_COLD void VQueuePipeTester___024root__trace_init_sub__TOP__0(VQueuePipeTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueuePipeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+29,"clock", false,-1);
    tracep->declBit(c+30,"reset", false,-1);
    tracep->pushNamePrefix("QueuePipeTester ");
    tracep->declBit(c+29,"clock", false,-1);
    tracep->declBit(c+30,"reset", false,-1);
    tracep->declBit(c+29,"q_clock", false,-1);
    tracep->declBit(c+30,"q_reset", false,-1);
    tracep->declBit(c+1,"q_io_enq_ready", false,-1);
    tracep->declBit(c+2,"q_io_enq_valid", false,-1);
    tracep->declBit(c+3,"q_io_deq_ready", false,-1);
    tracep->declBit(c+4,"q_io_deq_valid", false,-1);
    tracep->declBit(c+4,"q_io_count", false,-1);
    tracep->declBit(c+29,"q_io_deq_ready_prng_clock", false,-1);
    tracep->declBit(c+30,"q_io_deq_ready_prng_reset", false,-1);
    tracep->declBit(c+5,"q_io_deq_ready_prng_io_out_0", false,-1);
    tracep->declBit(c+6,"q_io_deq_ready_prng_io_out_1", false,-1);
    tracep->declBit(c+7,"q_io_deq_ready_prng_io_out_2", false,-1);
    tracep->declBit(c+8,"q_io_deq_ready_prng_io_out_3", false,-1);
    tracep->declBit(c+9,"q_io_deq_ready_prng_io_out_4", false,-1);
    tracep->declBit(c+10,"q_io_deq_ready_prng_io_out_5", false,-1);
    tracep->declBit(c+11,"q_io_deq_ready_prng_io_out_6", false,-1);
    tracep->declBit(c+12,"q_io_deq_ready_prng_io_out_7", false,-1);
    tracep->declBit(c+13,"q_io_deq_ready_prng_io_out_8", false,-1);
    tracep->declBit(c+14,"q_io_deq_ready_prng_io_out_9", false,-1);
    tracep->declBit(c+15,"q_io_deq_ready_prng_io_out_10", false,-1);
    tracep->declBit(c+16,"q_io_deq_ready_prng_io_out_11", false,-1);
    tracep->declBit(c+17,"q_io_deq_ready_prng_io_out_12", false,-1);
    tracep->declBit(c+18,"q_io_deq_ready_prng_io_out_13", false,-1);
    tracep->declBit(c+19,"q_io_deq_ready_prng_io_out_14", false,-1);
    tracep->declBit(c+20,"q_io_deq_ready_prng_io_out_15", false,-1);
    tracep->declBus(c+21,"value", false,-1, 4,0);
    tracep->declBus(c+22,"value_1", false,-1, 4,0);
    tracep->declBus(c+23,"q_io_deq_ready_lo", false,-1, 7,0);
    tracep->declBit(c+24,"wrap", false,-1);
    tracep->declBit(c+25,"wrap_1", false,-1);
    tracep->pushNamePrefix("q ");
    tracep->declBit(c+29,"clock", false,-1);
    tracep->declBit(c+30,"reset", false,-1);
    tracep->declBit(c+1,"io_enq_ready", false,-1);
    tracep->declBit(c+2,"io_enq_valid", false,-1);
    tracep->declBit(c+3,"io_deq_ready", false,-1);
    tracep->declBit(c+4,"io_deq_valid", false,-1);
    tracep->declBit(c+4,"io_count", false,-1);
    tracep->declBit(c+4,"maybe_full", false,-1);
    tracep->declBit(c+26,"empty", false,-1);
    tracep->declBit(c+27,"do_enq", false,-1);
    tracep->declBit(c+28,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("q_io_deq_ready_prng ");
    tracep->declBit(c+29,"clock", false,-1);
    tracep->declBit(c+30,"reset", false,-1);
    tracep->declBit(c+5,"io_out_0", false,-1);
    tracep->declBit(c+6,"io_out_1", false,-1);
    tracep->declBit(c+7,"io_out_2", false,-1);
    tracep->declBit(c+8,"io_out_3", false,-1);
    tracep->declBit(c+9,"io_out_4", false,-1);
    tracep->declBit(c+10,"io_out_5", false,-1);
    tracep->declBit(c+11,"io_out_6", false,-1);
    tracep->declBit(c+12,"io_out_7", false,-1);
    tracep->declBit(c+13,"io_out_8", false,-1);
    tracep->declBit(c+14,"io_out_9", false,-1);
    tracep->declBit(c+15,"io_out_10", false,-1);
    tracep->declBit(c+16,"io_out_11", false,-1);
    tracep->declBit(c+17,"io_out_12", false,-1);
    tracep->declBit(c+18,"io_out_13", false,-1);
    tracep->declBit(c+19,"io_out_14", false,-1);
    tracep->declBit(c+20,"io_out_15", false,-1);
    tracep->declBit(c+5,"state_0", false,-1);
    tracep->declBit(c+6,"state_1", false,-1);
    tracep->declBit(c+7,"state_2", false,-1);
    tracep->declBit(c+8,"state_3", false,-1);
    tracep->declBit(c+9,"state_4", false,-1);
    tracep->declBit(c+10,"state_5", false,-1);
    tracep->declBit(c+11,"state_6", false,-1);
    tracep->declBit(c+12,"state_7", false,-1);
    tracep->declBit(c+13,"state_8", false,-1);
    tracep->declBit(c+14,"state_9", false,-1);
    tracep->declBit(c+15,"state_10", false,-1);
    tracep->declBit(c+16,"state_11", false,-1);
    tracep->declBit(c+17,"state_12", false,-1);
    tracep->declBit(c+18,"state_13", false,-1);
    tracep->declBit(c+19,"state_14", false,-1);
    tracep->declBit(c+20,"state_15", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VQueuePipeTester___024root__trace_init_top(VQueuePipeTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueuePipeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester___024root__trace_init_top\n"); );
    // Body
    VQueuePipeTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VQueuePipeTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VQueuePipeTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VQueuePipeTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VQueuePipeTester___024root__trace_register(VQueuePipeTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueuePipeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VQueuePipeTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VQueuePipeTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VQueuePipeTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VQueuePipeTester___024root__trace_full_sub_0(VQueuePipeTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VQueuePipeTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester___024root__trace_full_top_0\n"); );
    // Init
    VQueuePipeTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueuePipeTester___024root*>(voidSelf);
    VQueuePipeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VQueuePipeTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VQueuePipeTester___024root__trace_full_sub_0(VQueuePipeTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueuePipeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueuePipeTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->QueuePipeTester__DOT__q_io_enq_ready));
    tracep->fullBit(oldp+2,((0x14U > (IData)(vlSelf->QueuePipeTester__DOT__value))));
    tracep->fullBit(oldp+3,((1U & ((IData)(vlSelf->QueuePipeTester__DOT___q_io_deq_ready_T) 
                                   >> 9U))));
    tracep->fullBit(oldp+4,(vlSelf->QueuePipeTester__DOT__q__DOT__maybe_full));
    tracep->fullBit(oldp+5,(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0));
    tracep->fullBit(oldp+6,(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1));
    tracep->fullBit(oldp+7,(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2));
    tracep->fullBit(oldp+8,(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3));
    tracep->fullBit(oldp+9,(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4));
    tracep->fullBit(oldp+10,(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5));
    tracep->fullBit(oldp+11,(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6));
    tracep->fullBit(oldp+12,(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7));
    tracep->fullBit(oldp+13,(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_8));
    tracep->fullBit(oldp+14,(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_9));
    tracep->fullBit(oldp+15,(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10));
    tracep->fullBit(oldp+16,(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_11));
    tracep->fullBit(oldp+17,(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12));
    tracep->fullBit(oldp+18,(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    tracep->fullBit(oldp+19,(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    tracep->fullBit(oldp+20,(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_15));
    tracep->fullCData(oldp+21,(vlSelf->QueuePipeTester__DOT__value),5);
    tracep->fullCData(oldp+22,(vlSelf->QueuePipeTester__DOT__value_1),5);
    tracep->fullCData(oldp+23,((((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                 << 7U) | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                            << 6U) 
                                           | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                               << 5U) 
                                              | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))),8);
    tracep->fullBit(oldp+24,((0x14U == (IData)(vlSelf->QueuePipeTester__DOT__value))));
    tracep->fullBit(oldp+25,((0x14U == (IData)(vlSelf->QueuePipeTester__DOT__value_1))));
    tracep->fullBit(oldp+26,((1U & (~ (IData)(vlSelf->QueuePipeTester__DOT__q__DOT__maybe_full)))));
    tracep->fullBit(oldp+27,(vlSelf->QueuePipeTester__DOT__q__DOT__do_enq));
    tracep->fullBit(oldp+28,((((IData)(vlSelf->QueuePipeTester__DOT___q_io_deq_ready_T) 
                               >> 9U) & (IData)(vlSelf->QueuePipeTester__DOT__q__DOT__maybe_full))));
    tracep->fullBit(oldp+29,(vlSelf->clock));
    tracep->fullBit(oldp+30,(vlSelf->reset));
}
