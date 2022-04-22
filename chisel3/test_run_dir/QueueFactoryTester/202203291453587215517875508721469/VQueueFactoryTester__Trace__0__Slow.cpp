// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueFactoryTester__Syms.h"


VL_ATTR_COLD void VQueueFactoryTester___024root__trace_init_sub__TOP__0(VQueueFactoryTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueFactoryTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+24,"clock", false,-1);
    tracep->declBit(c+25,"reset", false,-1);
    tracep->pushNamePrefix("QueueFactoryTester ");
    tracep->declBit(c+24,"clock", false,-1);
    tracep->declBit(c+25,"reset", false,-1);
    tracep->declBit(c+24,"deq_ready_prng_clock", false,-1);
    tracep->declBit(c+25,"deq_ready_prng_reset", false,-1);
    tracep->declBit(c+1,"deq_ready_prng_io_out_0", false,-1);
    tracep->declBit(c+2,"deq_ready_prng_io_out_1", false,-1);
    tracep->declBit(c+3,"deq_ready_prng_io_out_2", false,-1);
    tracep->declBit(c+4,"deq_ready_prng_io_out_3", false,-1);
    tracep->declBit(c+5,"deq_ready_prng_io_out_4", false,-1);
    tracep->declBit(c+6,"deq_ready_prng_io_out_5", false,-1);
    tracep->declBit(c+7,"deq_ready_prng_io_out_6", false,-1);
    tracep->declBit(c+8,"deq_ready_prng_io_out_7", false,-1);
    tracep->declBit(c+9,"deq_ready_prng_io_out_8", false,-1);
    tracep->declBit(c+10,"deq_ready_prng_io_out_9", false,-1);
    tracep->declBit(c+11,"deq_ready_prng_io_out_10", false,-1);
    tracep->declBit(c+12,"deq_ready_prng_io_out_11", false,-1);
    tracep->declBit(c+13,"deq_ready_prng_io_out_12", false,-1);
    tracep->declBit(c+14,"deq_ready_prng_io_out_13", false,-1);
    tracep->declBit(c+15,"deq_ready_prng_io_out_14", false,-1);
    tracep->declBit(c+16,"deq_ready_prng_io_out_15", false,-1);
    tracep->declBus(c+17,"value", false,-1, 4,0);
    tracep->declBus(c+18,"value_1", false,-1, 4,0);
    tracep->declBit(c+19,"enq_valid", false,-1);
    tracep->declBus(c+20,"deq_ready_lo", false,-1, 7,0);
    tracep->declBit(c+2,"deq_ready", false,-1);
    tracep->declBit(c+21,"enq_bits", false,-1);
    tracep->declBit(c+22,"wrap", false,-1);
    tracep->declBit(c+23,"wrap_1", false,-1);
    tracep->pushNamePrefix("deq_ready_prng ");
    tracep->declBit(c+24,"clock", false,-1);
    tracep->declBit(c+25,"reset", false,-1);
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
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VQueueFactoryTester___024root__trace_init_top(VQueueFactoryTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueFactoryTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester___024root__trace_init_top\n"); );
    // Body
    VQueueFactoryTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VQueueFactoryTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VQueueFactoryTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VQueueFactoryTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VQueueFactoryTester___024root__trace_register(VQueueFactoryTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueFactoryTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VQueueFactoryTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VQueueFactoryTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VQueueFactoryTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VQueueFactoryTester___024root__trace_full_sub_0(VQueueFactoryTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VQueueFactoryTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester___024root__trace_full_top_0\n"); );
    // Init
    VQueueFactoryTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueueFactoryTester___024root*>(voidSelf);
    VQueueFactoryTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VQueueFactoryTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VQueueFactoryTester___024root__trace_full_sub_0(VQueueFactoryTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueFactoryTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_0));
    tracep->fullBit(oldp+2,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_1));
    tracep->fullBit(oldp+3,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_2));
    tracep->fullBit(oldp+4,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_3));
    tracep->fullBit(oldp+5,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_4));
    tracep->fullBit(oldp+6,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_5));
    tracep->fullBit(oldp+7,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_6));
    tracep->fullBit(oldp+8,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_7));
    tracep->fullBit(oldp+9,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_8));
    tracep->fullBit(oldp+10,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_9));
    tracep->fullBit(oldp+11,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_10));
    tracep->fullBit(oldp+12,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_11));
    tracep->fullBit(oldp+13,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_12));
    tracep->fullBit(oldp+14,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_13));
    tracep->fullBit(oldp+15,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_14));
    tracep->fullBit(oldp+16,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_15));
    tracep->fullCData(oldp+17,(vlSelf->QueueFactoryTester__DOT__value),5);
    tracep->fullCData(oldp+18,(vlSelf->QueueFactoryTester__DOT__value_1),5);
    tracep->fullBit(oldp+19,((0x14U > (IData)(vlSelf->QueueFactoryTester__DOT__value))));
    tracep->fullCData(oldp+20,((((IData)(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_7) 
                                 << 7U) | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_6) 
                                            << 6U) 
                                           | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_5) 
                                               << 5U) 
                                              | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_4) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_3) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_2) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_1) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_0))))))))),8);
    tracep->fullBit(oldp+21,(((0x13U != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                              & ((0x12U == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                 | ((0x11U == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                    | ((0x10U != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                       & ((0xfU != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                          & ((0xeU 
                                              != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                             & ((0xdU 
                                                 == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                | ((0xcU 
                                                    != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                   & ((0xbU 
                                                       != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                      & ((0xaU 
                                                          != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                         & ((9U 
                                                             != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                            & ((8U 
                                                                == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                               | ((7U 
                                                                   == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                                  | ((6U 
                                                                      == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                                     | ((5U 
                                                                         != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                                        & ((4U 
                                                                            != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                                           & ((3U 
                                                                               == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                                              | ((2U 
                                                                                == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                                                                | (1U 
                                                                                != (IData)(vlSelf->QueueFactoryTester__DOT__value))))))))))))))))))))));
    tracep->fullBit(oldp+22,((0x14U == (IData)(vlSelf->QueueFactoryTester__DOT__value))));
    tracep->fullBit(oldp+23,((0x14U == (IData)(vlSelf->QueueFactoryTester__DOT__value_1))));
    tracep->fullBit(oldp+24,(vlSelf->clock));
    tracep->fullBit(oldp+25,(vlSelf->reset));
}
