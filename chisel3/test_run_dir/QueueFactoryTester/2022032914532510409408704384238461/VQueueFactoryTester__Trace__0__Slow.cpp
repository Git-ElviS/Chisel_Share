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
    tracep->declBit(c+39,"clock", false,-1);
    tracep->declBit(c+40,"reset", false,-1);
    tracep->pushNamePrefix("QueueFactoryTester ");
    tracep->declBit(c+39,"clock", false,-1);
    tracep->declBit(c+40,"reset", false,-1);
    tracep->declBit(c+39,"deq_clock", false,-1);
    tracep->declBit(c+40,"deq_reset", false,-1);
    tracep->declBit(c+1,"deq_io_enq_ready", false,-1);
    tracep->declBit(c+2,"deq_io_enq_valid", false,-1);
    tracep->declBus(c+3,"deq_io_enq_bits", false,-1, 3,0);
    tracep->declBit(c+4,"deq_io_deq_ready", false,-1);
    tracep->declBit(c+5,"deq_io_deq_valid", false,-1);
    tracep->declBus(c+6,"deq_io_deq_bits", false,-1, 3,0);
    tracep->declBit(c+39,"deq_io_deq_ready_prng_clock", false,-1);
    tracep->declBit(c+40,"deq_io_deq_ready_prng_reset", false,-1);
    tracep->declBit(c+7,"deq_io_deq_ready_prng_io_out_0", false,-1);
    tracep->declBit(c+8,"deq_io_deq_ready_prng_io_out_1", false,-1);
    tracep->declBit(c+9,"deq_io_deq_ready_prng_io_out_2", false,-1);
    tracep->declBit(c+10,"deq_io_deq_ready_prng_io_out_3", false,-1);
    tracep->declBit(c+11,"deq_io_deq_ready_prng_io_out_4", false,-1);
    tracep->declBit(c+12,"deq_io_deq_ready_prng_io_out_5", false,-1);
    tracep->declBit(c+13,"deq_io_deq_ready_prng_io_out_6", false,-1);
    tracep->declBit(c+14,"deq_io_deq_ready_prng_io_out_7", false,-1);
    tracep->declBit(c+15,"deq_io_deq_ready_prng_io_out_8", false,-1);
    tracep->declBit(c+16,"deq_io_deq_ready_prng_io_out_9", false,-1);
    tracep->declBit(c+17,"deq_io_deq_ready_prng_io_out_10", false,-1);
    tracep->declBit(c+18,"deq_io_deq_ready_prng_io_out_11", false,-1);
    tracep->declBit(c+19,"deq_io_deq_ready_prng_io_out_12", false,-1);
    tracep->declBit(c+20,"deq_io_deq_ready_prng_io_out_13", false,-1);
    tracep->declBit(c+21,"deq_io_deq_ready_prng_io_out_14", false,-1);
    tracep->declBit(c+22,"deq_io_deq_ready_prng_io_out_15", false,-1);
    tracep->declBus(c+23,"value", false,-1, 4,0);
    tracep->declBus(c+24,"value_1", false,-1, 4,0);
    tracep->declBit(c+2,"enq_valid", false,-1);
    tracep->declBus(c+25,"deq_io_deq_ready_lo", false,-1, 7,0);
    tracep->declBit(c+1,"enq_ready", false,-1);
    tracep->declBit(c+26,"wrap", false,-1);
    tracep->declBit(c+27,"wrap_1", false,-1);
    tracep->pushNamePrefix("deq ");
    tracep->declBit(c+39,"clock", false,-1);
    tracep->declBit(c+40,"reset", false,-1);
    tracep->declBit(c+1,"io_enq_ready", false,-1);
    tracep->declBit(c+2,"io_enq_valid", false,-1);
    tracep->declBus(c+3,"io_enq_bits", false,-1, 3,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+5,"io_deq_valid", false,-1);
    tracep->declBus(c+6,"io_deq_bits", false,-1, 3,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+28+i*1,"ram", true,(i+0), 3,0);
    }
    tracep->declBit(c+41,"ram_io_deq_bits_MPORT_en", false,-1);
    tracep->declBit(c+30,"ram_io_deq_bits_MPORT_addr", false,-1);
    tracep->declBus(c+6,"ram_io_deq_bits_MPORT_data", false,-1, 3,0);
    tracep->declBus(c+3,"ram_MPORT_data", false,-1, 3,0);
    tracep->declBit(c+31,"ram_MPORT_addr", false,-1);
    tracep->declBit(c+41,"ram_MPORT_mask", false,-1);
    tracep->declBit(c+32,"ram_MPORT_en", false,-1);
    tracep->declBit(c+31,"value", false,-1);
    tracep->declBit(c+30,"value_1", false,-1);
    tracep->declBit(c+33,"maybe_full", false,-1);
    tracep->declBit(c+34,"ptr_match", false,-1);
    tracep->declBit(c+35,"empty", false,-1);
    tracep->declBit(c+36,"full", false,-1);
    tracep->declBit(c+37,"do_enq", false,-1);
    tracep->declBit(c+38,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("deq_io_deq_ready_prng ");
    tracep->declBit(c+39,"clock", false,-1);
    tracep->declBit(c+40,"reset", false,-1);
    tracep->declBit(c+7,"io_out_0", false,-1);
    tracep->declBit(c+8,"io_out_1", false,-1);
    tracep->declBit(c+9,"io_out_2", false,-1);
    tracep->declBit(c+10,"io_out_3", false,-1);
    tracep->declBit(c+11,"io_out_4", false,-1);
    tracep->declBit(c+12,"io_out_5", false,-1);
    tracep->declBit(c+13,"io_out_6", false,-1);
    tracep->declBit(c+14,"io_out_7", false,-1);
    tracep->declBit(c+15,"io_out_8", false,-1);
    tracep->declBit(c+16,"io_out_9", false,-1);
    tracep->declBit(c+17,"io_out_10", false,-1);
    tracep->declBit(c+18,"io_out_11", false,-1);
    tracep->declBit(c+19,"io_out_12", false,-1);
    tracep->declBit(c+20,"io_out_13", false,-1);
    tracep->declBit(c+21,"io_out_14", false,-1);
    tracep->declBit(c+22,"io_out_15", false,-1);
    tracep->declBit(c+7,"state_0", false,-1);
    tracep->declBit(c+8,"state_1", false,-1);
    tracep->declBit(c+9,"state_2", false,-1);
    tracep->declBit(c+10,"state_3", false,-1);
    tracep->declBit(c+11,"state_4", false,-1);
    tracep->declBit(c+12,"state_5", false,-1);
    tracep->declBit(c+13,"state_6", false,-1);
    tracep->declBit(c+14,"state_7", false,-1);
    tracep->declBit(c+15,"state_8", false,-1);
    tracep->declBit(c+16,"state_9", false,-1);
    tracep->declBit(c+17,"state_10", false,-1);
    tracep->declBit(c+18,"state_11", false,-1);
    tracep->declBit(c+19,"state_12", false,-1);
    tracep->declBit(c+20,"state_13", false,-1);
    tracep->declBit(c+21,"state_14", false,-1);
    tracep->declBit(c+22,"state_15", false,-1);
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
    tracep->fullBit(oldp+1,((1U & (~ (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__full)))));
    tracep->fullBit(oldp+2,((0x14U > (IData)(vlSelf->QueueFactoryTester__DOT__value))));
    tracep->fullCData(oldp+3,(((0x13U == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                ? 3U : ((0x12U == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                         ? 2U : ((0x11U 
                                                  == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                  ? 6U
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                   ? 3U
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                    ? 0xdU
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                     ? 1U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                      ? 0xcU
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                       ? 0xcU
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                        ? 3U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                         ? 0xaU
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                          ? 1U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                           ? 2U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                            ? 0xcU
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                             ? 3U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                              ? 0xfU
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                               ? 0xcU
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                                ? 5U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                                 ? 0U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                                  ? 0xbU
                                                                  : 5U)))))))))))))))))))),4);
    tracep->fullBit(oldp+4,((1U & ((IData)(vlSelf->QueueFactoryTester__DOT___deq_io_deq_ready_T) 
                                   >> 0xeU))));
    tracep->fullBit(oldp+5,((1U & (~ (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__empty)))));
    tracep->fullCData(oldp+6,(vlSelf->QueueFactoryTester__DOT__deq__DOT__ram
                              [vlSelf->QueueFactoryTester__DOT__deq__DOT__value_1]),4);
    tracep->fullBit(oldp+7,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0));
    tracep->fullBit(oldp+8,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_1));
    tracep->fullBit(oldp+9,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_2));
    tracep->fullBit(oldp+10,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_3));
    tracep->fullBit(oldp+11,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_4));
    tracep->fullBit(oldp+12,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_5));
    tracep->fullBit(oldp+13,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_6));
    tracep->fullBit(oldp+14,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_7));
    tracep->fullBit(oldp+15,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_8));
    tracep->fullBit(oldp+16,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_9));
    tracep->fullBit(oldp+17,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_10));
    tracep->fullBit(oldp+18,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_11));
    tracep->fullBit(oldp+19,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_12));
    tracep->fullBit(oldp+20,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_13));
    tracep->fullBit(oldp+21,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_14));
    tracep->fullBit(oldp+22,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_15));
    tracep->fullCData(oldp+23,(vlSelf->QueueFactoryTester__DOT__value),5);
    tracep->fullCData(oldp+24,(vlSelf->QueueFactoryTester__DOT__value_1),5);
    tracep->fullCData(oldp+25,((((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_7) 
                                 << 7U) | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_6) 
                                            << 6U) 
                                           | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_5) 
                                               << 5U) 
                                              | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_4) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_3) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_2) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_1) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0))))))))),8);
    tracep->fullBit(oldp+26,((0x14U == (IData)(vlSelf->QueueFactoryTester__DOT__value))));
    tracep->fullBit(oldp+27,((0x14U == (IData)(vlSelf->QueueFactoryTester__DOT__value_1))));
    tracep->fullCData(oldp+28,(vlSelf->QueueFactoryTester__DOT__deq__DOT__ram[0]),4);
    tracep->fullCData(oldp+29,(vlSelf->QueueFactoryTester__DOT__deq__DOT__ram[1]),4);
    tracep->fullBit(oldp+30,(vlSelf->QueueFactoryTester__DOT__deq__DOT__value_1));
    tracep->fullBit(oldp+31,(vlSelf->QueueFactoryTester__DOT__deq__DOT__value));
    tracep->fullBit(oldp+32,(((~ (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__full)) 
                              & (0x14U > (IData)(vlSelf->QueueFactoryTester__DOT__value)))));
    tracep->fullBit(oldp+33,(vlSelf->QueueFactoryTester__DOT__deq__DOT__maybe_full));
    tracep->fullBit(oldp+34,(vlSelf->QueueFactoryTester__DOT__deq__DOT__ptr_match));
    tracep->fullBit(oldp+35,(vlSelf->QueueFactoryTester__DOT__deq__DOT__empty));
    tracep->fullBit(oldp+36,(vlSelf->QueueFactoryTester__DOT__deq__DOT__full));
    tracep->fullBit(oldp+37,(vlSelf->QueueFactoryTester__DOT__deq__DOT__do_enq));
    tracep->fullBit(oldp+38,(vlSelf->QueueFactoryTester__DOT__deq__DOT__do_deq));
    tracep->fullBit(oldp+39,(vlSelf->clock));
    tracep->fullBit(oldp+40,(vlSelf->reset));
    tracep->fullBit(oldp+41,(1U));
}
