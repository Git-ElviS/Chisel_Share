// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEnqueueEmptyFlushEdgecaseTester__Syms.h"


VL_ATTR_COLD void VEnqueueEmptyFlushEdgecaseTester___024root__trace_init_sub__TOP__0(VEnqueueEmptyFlushEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VEnqueueEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnqueueEmptyFlushEdgecaseTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+36,"clock", false,-1);
    tracep->declBit(c+37,"reset", false,-1);
    tracep->pushNamePrefix("EnqueueEmptyFlushEdgecaseTester ");
    tracep->declBit(c+36,"clock", false,-1);
    tracep->declBit(c+37,"reset", false,-1);
    tracep->declBit(c+36,"q_clock", false,-1);
    tracep->declBit(c+37,"q_reset", false,-1);
    tracep->declBit(c+1,"q_io_enq_ready", false,-1);
    tracep->declBit(c+2,"q_io_enq_valid", false,-1);
    tracep->declBus(c+3,"q_io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+4,"q_io_deq_ready", false,-1);
    tracep->declBit(c+5,"q_io_deq_valid", false,-1);
    tracep->declBus(c+6,"q_io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+5,"q_io_count", false,-1);
    tracep->declBit(c+7,"q_io_flush", false,-1);
    tracep->declBit(c+36,"q_io_deq_ready_prng_clock", false,-1);
    tracep->declBit(c+37,"q_io_deq_ready_prng_reset", false,-1);
    tracep->declBit(c+8,"q_io_deq_ready_prng_io_out_0", false,-1);
    tracep->declBit(c+9,"q_io_deq_ready_prng_io_out_1", false,-1);
    tracep->declBit(c+10,"q_io_deq_ready_prng_io_out_2", false,-1);
    tracep->declBit(c+11,"q_io_deq_ready_prng_io_out_3", false,-1);
    tracep->declBit(c+12,"q_io_deq_ready_prng_io_out_4", false,-1);
    tracep->declBit(c+13,"q_io_deq_ready_prng_io_out_5", false,-1);
    tracep->declBit(c+14,"q_io_deq_ready_prng_io_out_6", false,-1);
    tracep->declBit(c+15,"q_io_deq_ready_prng_io_out_7", false,-1);
    tracep->declBit(c+16,"q_io_deq_ready_prng_io_out_8", false,-1);
    tracep->declBit(c+17,"q_io_deq_ready_prng_io_out_9", false,-1);
    tracep->declBit(c+18,"q_io_deq_ready_prng_io_out_10", false,-1);
    tracep->declBit(c+19,"q_io_deq_ready_prng_io_out_11", false,-1);
    tracep->declBit(c+20,"q_io_deq_ready_prng_io_out_12", false,-1);
    tracep->declBit(c+21,"q_io_deq_ready_prng_io_out_13", false,-1);
    tracep->declBit(c+22,"q_io_deq_ready_prng_io_out_14", false,-1);
    tracep->declBit(c+23,"q_io_deq_ready_prng_io_out_15", false,-1);
    tracep->declBus(c+24,"value", false,-1, 4,0);
    tracep->declBit(c+25,"flushRegister", false,-1);
    tracep->declBus(c+26,"q_io_deq_ready_lo", false,-1, 7,0);
    tracep->declBit(c+27,"wrap", false,-1);
    tracep->declBus(c+28,"value_1", false,-1, 4,0);
    tracep->declBus(c+29,"value_2", false,-1, 4,0);
    tracep->declBit(c+7,"flush", false,-1);
    tracep->declBit(c+30,"wrap_1", false,-1);
    tracep->declBit(c+31,"wrap_2", false,-1);
    tracep->pushNamePrefix("q ");
    tracep->declBit(c+36,"clock", false,-1);
    tracep->declBit(c+37,"reset", false,-1);
    tracep->declBit(c+1,"io_enq_ready", false,-1);
    tracep->declBit(c+2,"io_enq_valid", false,-1);
    tracep->declBus(c+3,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+5,"io_deq_valid", false,-1);
    tracep->declBus(c+6,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+5,"io_count", false,-1);
    tracep->declBit(c+7,"io_flush", false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+32+i*1,"ram", true,(i+0), 1,0);
    }
    tracep->declBit(c+38,"ram_io_deq_bits_MPORT_en", false,-1);
    tracep->declBit(c+39,"ram_io_deq_bits_MPORT_addr", false,-1);
    tracep->declBus(c+6,"ram_io_deq_bits_MPORT_data", false,-1, 1,0);
    tracep->declBus(c+3,"ram_MPORT_data", false,-1, 1,0);
    tracep->declBit(c+39,"ram_MPORT_addr", false,-1);
    tracep->declBit(c+38,"ram_MPORT_mask", false,-1);
    tracep->declBit(c+33,"ram_MPORT_en", false,-1);
    tracep->declBit(c+5,"maybe_full", false,-1);
    tracep->declBit(c+1,"empty", false,-1);
    tracep->declBit(c+34,"do_enq", false,-1);
    tracep->declBit(c+35,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("q_io_deq_ready_prng ");
    tracep->declBit(c+36,"clock", false,-1);
    tracep->declBit(c+37,"reset", false,-1);
    tracep->declBit(c+8,"io_out_0", false,-1);
    tracep->declBit(c+9,"io_out_1", false,-1);
    tracep->declBit(c+10,"io_out_2", false,-1);
    tracep->declBit(c+11,"io_out_3", false,-1);
    tracep->declBit(c+12,"io_out_4", false,-1);
    tracep->declBit(c+13,"io_out_5", false,-1);
    tracep->declBit(c+14,"io_out_6", false,-1);
    tracep->declBit(c+15,"io_out_7", false,-1);
    tracep->declBit(c+16,"io_out_8", false,-1);
    tracep->declBit(c+17,"io_out_9", false,-1);
    tracep->declBit(c+18,"io_out_10", false,-1);
    tracep->declBit(c+19,"io_out_11", false,-1);
    tracep->declBit(c+20,"io_out_12", false,-1);
    tracep->declBit(c+21,"io_out_13", false,-1);
    tracep->declBit(c+22,"io_out_14", false,-1);
    tracep->declBit(c+23,"io_out_15", false,-1);
    tracep->declBit(c+8,"state_0", false,-1);
    tracep->declBit(c+9,"state_1", false,-1);
    tracep->declBit(c+10,"state_2", false,-1);
    tracep->declBit(c+11,"state_3", false,-1);
    tracep->declBit(c+12,"state_4", false,-1);
    tracep->declBit(c+13,"state_5", false,-1);
    tracep->declBit(c+14,"state_6", false,-1);
    tracep->declBit(c+15,"state_7", false,-1);
    tracep->declBit(c+16,"state_8", false,-1);
    tracep->declBit(c+17,"state_9", false,-1);
    tracep->declBit(c+18,"state_10", false,-1);
    tracep->declBit(c+19,"state_11", false,-1);
    tracep->declBit(c+20,"state_12", false,-1);
    tracep->declBit(c+21,"state_13", false,-1);
    tracep->declBit(c+22,"state_14", false,-1);
    tracep->declBit(c+23,"state_15", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VEnqueueEmptyFlushEdgecaseTester___024root__trace_init_top(VEnqueueEmptyFlushEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VEnqueueEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnqueueEmptyFlushEdgecaseTester___024root__trace_init_top\n"); );
    // Body
    VEnqueueEmptyFlushEdgecaseTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VEnqueueEmptyFlushEdgecaseTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VEnqueueEmptyFlushEdgecaseTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VEnqueueEmptyFlushEdgecaseTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VEnqueueEmptyFlushEdgecaseTester___024root__trace_register(VEnqueueEmptyFlushEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VEnqueueEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnqueueEmptyFlushEdgecaseTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VEnqueueEmptyFlushEdgecaseTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VEnqueueEmptyFlushEdgecaseTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VEnqueueEmptyFlushEdgecaseTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VEnqueueEmptyFlushEdgecaseTester___024root__trace_full_sub_0(VEnqueueEmptyFlushEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VEnqueueEmptyFlushEdgecaseTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnqueueEmptyFlushEdgecaseTester___024root__trace_full_top_0\n"); );
    // Init
    VEnqueueEmptyFlushEdgecaseTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VEnqueueEmptyFlushEdgecaseTester___024root*>(voidSelf);
    VEnqueueEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VEnqueueEmptyFlushEdgecaseTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VEnqueueEmptyFlushEdgecaseTester___024root__trace_full_sub_0(VEnqueueEmptyFlushEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VEnqueueEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnqueueEmptyFlushEdgecaseTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,((1U & (~ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)))));
    tracep->fullBit(oldp+2,((0x14U > (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))));
    tracep->fullCData(oldp+3,(((0x13U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                ? 0U : ((0x12U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                         ? 3U : ((0x11U 
                                                  == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                   ? 1U
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                    ? 0U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                     ? 3U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                      ? 0U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                       ? 3U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                        ? 0U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                         ? 2U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                           ? 3U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                            ? 2U
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                             ? 0U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                               ? 0U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                                ? 1U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                                 ? 1U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                                  ? 2U
                                                                  : 3U)))))))))))))))))))),2);
    tracep->fullBit(oldp+4,((1U & ((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                                   >> 0xeU))));
    tracep->fullBit(oldp+5,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full));
    tracep->fullCData(oldp+6,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram
                              [0U]),2);
    tracep->fullBit(oldp+7,(((0U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1)) 
                             & (0U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value)))));
    tracep->fullBit(oldp+8,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0));
    tracep->fullBit(oldp+9,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1));
    tracep->fullBit(oldp+10,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2));
    tracep->fullBit(oldp+11,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3));
    tracep->fullBit(oldp+12,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4));
    tracep->fullBit(oldp+13,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5));
    tracep->fullBit(oldp+14,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6));
    tracep->fullBit(oldp+15,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7));
    tracep->fullBit(oldp+16,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8));
    tracep->fullBit(oldp+17,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9));
    tracep->fullBit(oldp+18,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10));
    tracep->fullBit(oldp+19,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11));
    tracep->fullBit(oldp+20,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12));
    tracep->fullBit(oldp+21,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    tracep->fullBit(oldp+22,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    tracep->fullBit(oldp+23,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15));
    tracep->fullCData(oldp+24,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value),5);
    tracep->fullBit(oldp+25,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__flushRegister));
    tracep->fullCData(oldp+26,((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                 << 7U) | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                            << 6U) 
                                           | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                               << 5U) 
                                              | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))),8);
    tracep->fullBit(oldp+27,((0x14U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))));
    tracep->fullCData(oldp+28,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1),5);
    tracep->fullCData(oldp+29,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2),5);
    tracep->fullBit(oldp+30,((0x14U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1))));
    tracep->fullBit(oldp+31,((0x14U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))));
    tracep->fullCData(oldp+32,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram[0]),2);
    tracep->fullBit(oldp+33,(((~ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)) 
                              & (0x14U > (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value)))));
    tracep->fullBit(oldp+34,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__do_enq));
    tracep->fullBit(oldp+35,((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                               >> 0xeU) & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full))));
    tracep->fullBit(oldp+36,(vlSelf->clock));
    tracep->fullBit(oldp+37,(vlSelf->reset));
    tracep->fullBit(oldp+38,(1U));
    tracep->fullBit(oldp+39,(0U));
}
