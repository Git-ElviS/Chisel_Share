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
    tracep->declBit(c+46,"clock", false,-1);
    tracep->declBit(c+47,"reset", false,-1);
    tracep->pushNamePrefix("EnqueueEmptyFlushEdgecaseTester ");
    tracep->declBit(c+46,"clock", false,-1);
    tracep->declBit(c+47,"reset", false,-1);
    tracep->declBit(c+46,"q_clock", false,-1);
    tracep->declBit(c+47,"q_reset", false,-1);
    tracep->declBit(c+1,"q_io_enq_ready", false,-1);
    tracep->declBit(c+2,"q_io_enq_valid", false,-1);
    tracep->declBus(c+3,"q_io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+4,"q_io_deq_ready", false,-1);
    tracep->declBit(c+5,"q_io_deq_valid", false,-1);
    tracep->declBus(c+6,"q_io_deq_bits", false,-1, 1,0);
    tracep->declBus(c+7,"q_io_count", false,-1, 1,0);
    tracep->declBit(c+8,"q_io_flush", false,-1);
    tracep->declBit(c+46,"q_io_deq_ready_prng_clock", false,-1);
    tracep->declBit(c+47,"q_io_deq_ready_prng_reset", false,-1);
    tracep->declBit(c+9,"q_io_deq_ready_prng_io_out_0", false,-1);
    tracep->declBit(c+10,"q_io_deq_ready_prng_io_out_1", false,-1);
    tracep->declBit(c+11,"q_io_deq_ready_prng_io_out_2", false,-1);
    tracep->declBit(c+12,"q_io_deq_ready_prng_io_out_3", false,-1);
    tracep->declBit(c+13,"q_io_deq_ready_prng_io_out_4", false,-1);
    tracep->declBit(c+14,"q_io_deq_ready_prng_io_out_5", false,-1);
    tracep->declBit(c+15,"q_io_deq_ready_prng_io_out_6", false,-1);
    tracep->declBit(c+16,"q_io_deq_ready_prng_io_out_7", false,-1);
    tracep->declBit(c+17,"q_io_deq_ready_prng_io_out_8", false,-1);
    tracep->declBit(c+18,"q_io_deq_ready_prng_io_out_9", false,-1);
    tracep->declBit(c+19,"q_io_deq_ready_prng_io_out_10", false,-1);
    tracep->declBit(c+20,"q_io_deq_ready_prng_io_out_11", false,-1);
    tracep->declBit(c+21,"q_io_deq_ready_prng_io_out_12", false,-1);
    tracep->declBit(c+22,"q_io_deq_ready_prng_io_out_13", false,-1);
    tracep->declBit(c+23,"q_io_deq_ready_prng_io_out_14", false,-1);
    tracep->declBit(c+24,"q_io_deq_ready_prng_io_out_15", false,-1);
    tracep->declBus(c+25,"value", false,-1, 4,0);
    tracep->declBit(c+26,"flushRegister", false,-1);
    tracep->declBus(c+27,"q_io_deq_ready_lo", false,-1, 7,0);
    tracep->declBit(c+28,"wrap", false,-1);
    tracep->declBus(c+29,"value_1", false,-1, 4,0);
    tracep->declBus(c+30,"value_2", false,-1, 4,0);
    tracep->declBit(c+31,"flush", false,-1);
    tracep->declBit(c+32,"wrap_1", false,-1);
    tracep->declBit(c+33,"wrap_2", false,-1);
    tracep->pushNamePrefix("q ");
    tracep->declBit(c+46,"clock", false,-1);
    tracep->declBit(c+47,"reset", false,-1);
    tracep->declBit(c+1,"io_enq_ready", false,-1);
    tracep->declBit(c+2,"io_enq_valid", false,-1);
    tracep->declBus(c+3,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+5,"io_deq_valid", false,-1);
    tracep->declBus(c+6,"io_deq_bits", false,-1, 1,0);
    tracep->declBus(c+7,"io_count", false,-1, 1,0);
    tracep->declBit(c+8,"io_flush", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+34+i*1,"ram", true,(i+0), 1,0);
    }
    tracep->declBit(c+48,"ram_io_deq_bits_MPORT_en", false,-1);
    tracep->declBit(c+36,"ram_io_deq_bits_MPORT_addr", false,-1);
    tracep->declBus(c+6,"ram_io_deq_bits_MPORT_data", false,-1, 1,0);
    tracep->declBus(c+3,"ram_MPORT_data", false,-1, 1,0);
    tracep->declBit(c+37,"ram_MPORT_addr", false,-1);
    tracep->declBit(c+48,"ram_MPORT_mask", false,-1);
    tracep->declBit(c+38,"ram_MPORT_en", false,-1);
    tracep->declBit(c+37,"enq_ptr_value", false,-1);
    tracep->declBit(c+36,"deq_ptr_value", false,-1);
    tracep->declBit(c+39,"maybe_full", false,-1);
    tracep->declBit(c+40,"ptr_match", false,-1);
    tracep->declBit(c+41,"empty", false,-1);
    tracep->declBit(c+42,"full", false,-1);
    tracep->declBit(c+43,"do_enq", false,-1);
    tracep->declBit(c+44,"do_deq", false,-1);
    tracep->declBit(c+45,"ptr_diff", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("q_io_deq_ready_prng ");
    tracep->declBit(c+46,"clock", false,-1);
    tracep->declBit(c+47,"reset", false,-1);
    tracep->declBit(c+9,"io_out_0", false,-1);
    tracep->declBit(c+10,"io_out_1", false,-1);
    tracep->declBit(c+11,"io_out_2", false,-1);
    tracep->declBit(c+12,"io_out_3", false,-1);
    tracep->declBit(c+13,"io_out_4", false,-1);
    tracep->declBit(c+14,"io_out_5", false,-1);
    tracep->declBit(c+15,"io_out_6", false,-1);
    tracep->declBit(c+16,"io_out_7", false,-1);
    tracep->declBit(c+17,"io_out_8", false,-1);
    tracep->declBit(c+18,"io_out_9", false,-1);
    tracep->declBit(c+19,"io_out_10", false,-1);
    tracep->declBit(c+20,"io_out_11", false,-1);
    tracep->declBit(c+21,"io_out_12", false,-1);
    tracep->declBit(c+22,"io_out_13", false,-1);
    tracep->declBit(c+23,"io_out_14", false,-1);
    tracep->declBit(c+24,"io_out_15", false,-1);
    tracep->declBit(c+9,"state_0", false,-1);
    tracep->declBit(c+10,"state_1", false,-1);
    tracep->declBit(c+11,"state_2", false,-1);
    tracep->declBit(c+12,"state_3", false,-1);
    tracep->declBit(c+13,"state_4", false,-1);
    tracep->declBit(c+14,"state_5", false,-1);
    tracep->declBit(c+15,"state_6", false,-1);
    tracep->declBit(c+16,"state_7", false,-1);
    tracep->declBit(c+17,"state_8", false,-1);
    tracep->declBit(c+18,"state_9", false,-1);
    tracep->declBit(c+19,"state_10", false,-1);
    tracep->declBit(c+20,"state_11", false,-1);
    tracep->declBit(c+21,"state_12", false,-1);
    tracep->declBit(c+22,"state_13", false,-1);
    tracep->declBit(c+23,"state_14", false,-1);
    tracep->declBit(c+24,"state_15", false,-1);
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
    tracep->fullBit(oldp+1,((1U & (~ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__full)))));
    tracep->fullBit(oldp+2,((0x14U > (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))));
    tracep->fullCData(oldp+3,(((0x13U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                ? 0U : ((0x12U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                         ? 1U : ((0x11U 
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
                                                       ? 0U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                        ? 0U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                         ? 0U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                          ? 1U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                           ? 0U
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
                                                              ? 1U
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                               ? 3U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                                ? 3U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                                 ? 0U
                                                                 : 2U))))))))))))))))))),2);
    tracep->fullBit(oldp+4,((1U & ((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                                   >> 8U))));
    tracep->fullBit(oldp+5,((1U & (~ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__empty)))));
    tracep->fullCData(oldp+6,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram
                              [vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value]),2);
    tracep->fullCData(oldp+7,(((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full) 
                                 & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ptr_match))
                                 ? 2U : 0U) | (1U & 
                                               ((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
                                                - (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value))))),2);
    tracep->fullBit(oldp+8,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_flush));
    tracep->fullBit(oldp+9,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0));
    tracep->fullBit(oldp+10,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1));
    tracep->fullBit(oldp+11,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2));
    tracep->fullBit(oldp+12,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3));
    tracep->fullBit(oldp+13,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4));
    tracep->fullBit(oldp+14,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5));
    tracep->fullBit(oldp+15,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6));
    tracep->fullBit(oldp+16,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7));
    tracep->fullBit(oldp+17,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8));
    tracep->fullBit(oldp+18,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9));
    tracep->fullBit(oldp+19,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10));
    tracep->fullBit(oldp+20,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11));
    tracep->fullBit(oldp+21,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12));
    tracep->fullBit(oldp+22,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    tracep->fullBit(oldp+23,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    tracep->fullBit(oldp+24,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15));
    tracep->fullCData(oldp+25,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value),5);
    tracep->fullBit(oldp+26,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__flushRegister));
    tracep->fullCData(oldp+27,((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
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
    tracep->fullBit(oldp+28,((0x14U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))));
    tracep->fullCData(oldp+29,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1),5);
    tracep->fullCData(oldp+30,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2),5);
    tracep->fullBit(oldp+31,(((0U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1)) 
                              & (0U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value)))));
    tracep->fullBit(oldp+32,((0x14U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1))));
    tracep->fullBit(oldp+33,((0x14U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))));
    tracep->fullCData(oldp+34,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram[0]),2);
    tracep->fullCData(oldp+35,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram[1]),2);
    tracep->fullBit(oldp+36,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value));
    tracep->fullBit(oldp+37,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value));
    tracep->fullBit(oldp+38,(((~ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__full)) 
                              & (0x14U > (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value)))));
    tracep->fullBit(oldp+39,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full));
    tracep->fullBit(oldp+40,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ptr_match));
    tracep->fullBit(oldp+41,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__empty));
    tracep->fullBit(oldp+42,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__full));
    tracep->fullBit(oldp+43,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__do_enq));
    tracep->fullBit(oldp+44,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__do_deq));
    tracep->fullBit(oldp+45,((1U & ((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
                                    - (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value)))));
    tracep->fullBit(oldp+46,(vlSelf->clock));
    tracep->fullBit(oldp+47,(vlSelf->reset));
    tracep->fullBit(oldp+48,(1U));
}
