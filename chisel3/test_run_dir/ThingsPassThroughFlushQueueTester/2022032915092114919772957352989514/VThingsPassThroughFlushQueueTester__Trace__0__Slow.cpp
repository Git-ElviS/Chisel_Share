// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VThingsPassThroughFlushQueueTester__Syms.h"


VL_ATTR_COLD void VThingsPassThroughFlushQueueTester___024root__trace_init_sub__TOP__0(VThingsPassThroughFlushQueueTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VThingsPassThroughFlushQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughFlushQueueTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+44,"clock", false,-1);
    tracep->declBit(c+45,"reset", false,-1);
    tracep->pushNamePrefix("ThingsPassThroughFlushQueueTester ");
    tracep->declBit(c+44,"clock", false,-1);
    tracep->declBit(c+45,"reset", false,-1);
    tracep->declBit(c+44,"q_clock", false,-1);
    tracep->declBit(c+45,"q_reset", false,-1);
    tracep->declBit(c+1,"q_io_enq_ready", false,-1);
    tracep->declBit(c+2,"q_io_enq_valid", false,-1);
    tracep->declBus(c+3,"q_io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+4,"q_io_deq_ready", false,-1);
    tracep->declBit(c+5,"q_io_deq_valid", false,-1);
    tracep->declBus(c+6,"q_io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+44,"q_io_deq_ready_prng_clock", false,-1);
    tracep->declBit(c+45,"q_io_deq_ready_prng_reset", false,-1);
    tracep->declBit(c+7,"q_io_deq_ready_prng_io_out_0", false,-1);
    tracep->declBit(c+8,"q_io_deq_ready_prng_io_out_1", false,-1);
    tracep->declBit(c+9,"q_io_deq_ready_prng_io_out_2", false,-1);
    tracep->declBit(c+10,"q_io_deq_ready_prng_io_out_3", false,-1);
    tracep->declBit(c+11,"q_io_deq_ready_prng_io_out_4", false,-1);
    tracep->declBit(c+12,"q_io_deq_ready_prng_io_out_5", false,-1);
    tracep->declBit(c+13,"q_io_deq_ready_prng_io_out_6", false,-1);
    tracep->declBit(c+14,"q_io_deq_ready_prng_io_out_7", false,-1);
    tracep->declBit(c+15,"q_io_deq_ready_prng_io_out_8", false,-1);
    tracep->declBit(c+16,"q_io_deq_ready_prng_io_out_9", false,-1);
    tracep->declBit(c+17,"q_io_deq_ready_prng_io_out_10", false,-1);
    tracep->declBit(c+18,"q_io_deq_ready_prng_io_out_11", false,-1);
    tracep->declBit(c+19,"q_io_deq_ready_prng_io_out_12", false,-1);
    tracep->declBit(c+20,"q_io_deq_ready_prng_io_out_13", false,-1);
    tracep->declBit(c+21,"q_io_deq_ready_prng_io_out_14", false,-1);
    tracep->declBit(c+22,"q_io_deq_ready_prng_io_out_15", false,-1);
    tracep->declBus(c+23,"value", false,-1, 4,0);
    tracep->declBus(c+24,"value_1", false,-1, 4,0);
    tracep->declBus(c+25,"q_io_deq_ready_lo", false,-1, 7,0);
    tracep->declBit(c+26,"wrap", false,-1);
    tracep->declBit(c+27,"wrap_1", false,-1);
    tracep->pushNamePrefix("q ");
    tracep->declBit(c+44,"clock", false,-1);
    tracep->declBit(c+45,"reset", false,-1);
    tracep->declBit(c+1,"io_enq_ready", false,-1);
    tracep->declBit(c+2,"io_enq_valid", false,-1);
    tracep->declBus(c+3,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+5,"io_deq_valid", false,-1);
    tracep->declBus(c+6,"io_deq_bits", false,-1, 1,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+28+i*1,"ram", true,(i+0), 1,0);
    }
    tracep->declBit(c+31,"ram_io_deq_bits_MPORT_en", false,-1);
    tracep->declBus(c+32,"ram_io_deq_bits_MPORT_addr", false,-1, 1,0);
    tracep->declBus(c+6,"ram_io_deq_bits_MPORT_data", false,-1, 1,0);
    tracep->declBus(c+3,"ram_MPORT_data", false,-1, 1,0);
    tracep->declBus(c+33,"ram_MPORT_addr", false,-1, 1,0);
    tracep->declBit(c+46,"ram_MPORT_mask", false,-1);
    tracep->declBit(c+34,"ram_MPORT_en", false,-1);
    tracep->declBit(c+31,"ram_io_deq_bits_MPORT_en_pipe_0", false,-1);
    tracep->declBus(c+32,"ram_io_deq_bits_MPORT_addr_pipe_0", false,-1, 1,0);
    tracep->declBus(c+33,"enq_ptr_value", false,-1, 1,0);
    tracep->declBus(c+35,"deq_ptr_value", false,-1, 1,0);
    tracep->declBit(c+36,"maybe_full", false,-1);
    tracep->declBit(c+37,"ptr_match", false,-1);
    tracep->declBit(c+38,"empty", false,-1);
    tracep->declBit(c+39,"full", false,-1);
    tracep->declBit(c+40,"do_enq", false,-1);
    tracep->declBit(c+41,"do_deq", false,-1);
    tracep->declBit(c+42,"wrap", false,-1);
    tracep->declBit(c+43,"wrap_1", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("q_io_deq_ready_prng ");
    tracep->declBit(c+44,"clock", false,-1);
    tracep->declBit(c+45,"reset", false,-1);
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

VL_ATTR_COLD void VThingsPassThroughFlushQueueTester___024root__trace_init_top(VThingsPassThroughFlushQueueTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VThingsPassThroughFlushQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughFlushQueueTester___024root__trace_init_top\n"); );
    // Body
    VThingsPassThroughFlushQueueTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VThingsPassThroughFlushQueueTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VThingsPassThroughFlushQueueTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VThingsPassThroughFlushQueueTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VThingsPassThroughFlushQueueTester___024root__trace_register(VThingsPassThroughFlushQueueTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VThingsPassThroughFlushQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughFlushQueueTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VThingsPassThroughFlushQueueTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VThingsPassThroughFlushQueueTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VThingsPassThroughFlushQueueTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VThingsPassThroughFlushQueueTester___024root__trace_full_sub_0(VThingsPassThroughFlushQueueTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VThingsPassThroughFlushQueueTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughFlushQueueTester___024root__trace_full_top_0\n"); );
    // Init
    VThingsPassThroughFlushQueueTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VThingsPassThroughFlushQueueTester___024root*>(voidSelf);
    VThingsPassThroughFlushQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VThingsPassThroughFlushQueueTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VThingsPassThroughFlushQueueTester___024root__trace_full_sub_0(VThingsPassThroughFlushQueueTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VThingsPassThroughFlushQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughFlushQueueTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,((1U & (~ (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__full)))));
    tracep->fullBit(oldp+2,((0x14U > (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))));
    tracep->fullCData(oldp+3,(((0x13U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                ? 2U : ((0x12U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                         ? 2U : ((0x11U 
                                                  == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                  ? 3U
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                   ? 2U
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                    ? 3U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                     ? 2U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                      ? 1U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                       ? 0U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                        ? 2U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                         ? 1U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                          ? 3U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                           ? 1U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                            ? 2U
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                             ? 2U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                              ? 3U
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                               ? 0U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                                ? 1U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                                 ? 1U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))
                                                                  ? 2U
                                                                  : 0U)))))))))))))))))))),2);
    tracep->fullBit(oldp+4,((1U & ((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT___q_io_deq_ready_T) 
                                   >> 0xdU))));
    tracep->fullBit(oldp+5,((1U & (~ (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__empty)))));
    tracep->fullCData(oldp+6,(((2U >= (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0))
                                ? vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram
                               [vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0]
                                : 0U)),2);
    tracep->fullBit(oldp+7,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_0));
    tracep->fullBit(oldp+8,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_1));
    tracep->fullBit(oldp+9,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_2));
    tracep->fullBit(oldp+10,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_3));
    tracep->fullBit(oldp+11,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_4));
    tracep->fullBit(oldp+12,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_5));
    tracep->fullBit(oldp+13,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_6));
    tracep->fullBit(oldp+14,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_7));
    tracep->fullBit(oldp+15,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_8));
    tracep->fullBit(oldp+16,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_9));
    tracep->fullBit(oldp+17,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_10));
    tracep->fullBit(oldp+18,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_11));
    tracep->fullBit(oldp+19,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_12));
    tracep->fullBit(oldp+20,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    tracep->fullBit(oldp+21,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    tracep->fullBit(oldp+22,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_15));
    tracep->fullCData(oldp+23,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value),5);
    tracep->fullCData(oldp+24,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1),5);
    tracep->fullCData(oldp+25,((((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                 << 7U) | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                               << 5U) 
                                              | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))),8);
    tracep->fullBit(oldp+26,((0x14U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value))));
    tracep->fullBit(oldp+27,((0x14U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value_1))));
    tracep->fullCData(oldp+28,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram[0]),2);
    tracep->fullCData(oldp+29,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram[1]),2);
    tracep->fullCData(oldp+30,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram[2]),2);
    tracep->fullBit(oldp+31,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram_io_deq_bits_MPORT_en_pipe_0));
    tracep->fullCData(oldp+32,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0),2);
    tracep->fullCData(oldp+33,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__enq_ptr_value),2);
    tracep->fullBit(oldp+34,(((~ (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__full)) 
                              & (0x14U > (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__value)))));
    tracep->fullCData(oldp+35,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__deq_ptr_value),2);
    tracep->fullBit(oldp+36,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__maybe_full));
    tracep->fullBit(oldp+37,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__ptr_match));
    tracep->fullBit(oldp+38,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__empty));
    tracep->fullBit(oldp+39,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__full));
    tracep->fullBit(oldp+40,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__do_enq));
    tracep->fullBit(oldp+41,(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__do_deq));
    tracep->fullBit(oldp+42,((2U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__enq_ptr_value))));
    tracep->fullBit(oldp+43,((2U == (IData)(vlSelf->ThingsPassThroughFlushQueueTester__DOT__q__DOT__deq_ptr_value))));
    tracep->fullBit(oldp+44,(vlSelf->clock));
    tracep->fullBit(oldp+45,(vlSelf->reset));
    tracep->fullBit(oldp+46,(1U));
}
