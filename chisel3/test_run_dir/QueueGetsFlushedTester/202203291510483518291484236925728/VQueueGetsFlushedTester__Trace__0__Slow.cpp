// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueGetsFlushedTester__Syms.h"


VL_ATTR_COLD void VQueueGetsFlushedTester___024root__trace_init_sub__TOP__0(VQueueGetsFlushedTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueGetsFlushedTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+63,"clock", false,-1);
    tracep->declBit(c+64,"reset", false,-1);
    tracep->pushNamePrefix("QueueGetsFlushedTester ");
    tracep->declBit(c+63,"clock", false,-1);
    tracep->declBit(c+64,"reset", false,-1);
    tracep->declBit(c+63,"q_clock", false,-1);
    tracep->declBit(c+64,"q_reset", false,-1);
    tracep->declBit(c+1,"q_io_enq_ready", false,-1);
    tracep->declBit(c+2,"q_io_enq_valid", false,-1);
    tracep->declBus(c+3,"q_io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+4,"q_io_deq_ready", false,-1);
    tracep->declBit(c+5,"q_io_deq_valid", false,-1);
    tracep->declBus(c+6,"q_io_deq_bits", false,-1, 1,0);
    tracep->declBus(c+7,"q_io_count", false,-1, 1,0);
    tracep->declBit(c+8,"q_io_flush", false,-1);
    tracep->declBit(c+63,"q_io_deq_ready_prng_clock", false,-1);
    tracep->declBit(c+64,"q_io_deq_ready_prng_reset", false,-1);
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
    tracep->declBit(c+63,"flush_prng_clock", false,-1);
    tracep->declBit(c+64,"flush_prng_reset", false,-1);
    tracep->declBit(c+25,"flush_prng_io_out_0", false,-1);
    tracep->declBit(c+26,"flush_prng_io_out_1", false,-1);
    tracep->declBit(c+27,"flush_prng_io_out_2", false,-1);
    tracep->declBit(c+28,"flush_prng_io_out_3", false,-1);
    tracep->declBit(c+29,"flush_prng_io_out_4", false,-1);
    tracep->declBit(c+30,"flush_prng_io_out_5", false,-1);
    tracep->declBit(c+31,"flush_prng_io_out_6", false,-1);
    tracep->declBit(c+32,"flush_prng_io_out_7", false,-1);
    tracep->declBit(c+33,"flush_prng_io_out_8", false,-1);
    tracep->declBit(c+34,"flush_prng_io_out_9", false,-1);
    tracep->declBit(c+35,"flush_prng_io_out_10", false,-1);
    tracep->declBit(c+36,"flush_prng_io_out_11", false,-1);
    tracep->declBit(c+37,"flush_prng_io_out_12", false,-1);
    tracep->declBit(c+38,"flush_prng_io_out_13", false,-1);
    tracep->declBit(c+39,"flush_prng_io_out_14", false,-1);
    tracep->declBit(c+40,"flush_prng_io_out_15", false,-1);
    tracep->declBus(c+41,"value", false,-1, 4,0);
    tracep->declBus(c+42,"outCnt", false,-1, 4,0);
    tracep->declBus(c+43,"currQCnt", false,-1, 2,0);
    tracep->declBit(c+44,"flushRegister", false,-1);
    tracep->declBus(c+45,"q_io_deq_ready_lo", false,-1, 7,0);
    tracep->declBit(c+46,"wrap", false,-1);
    tracep->declBus(c+47,"flush_lo", false,-1, 7,0);
    tracep->declBit(c+8,"flush", false,-1);
    tracep->pushNamePrefix("flush_prng ");
    tracep->declBit(c+63,"clock", false,-1);
    tracep->declBit(c+64,"reset", false,-1);
    tracep->declBit(c+25,"io_out_0", false,-1);
    tracep->declBit(c+26,"io_out_1", false,-1);
    tracep->declBit(c+27,"io_out_2", false,-1);
    tracep->declBit(c+28,"io_out_3", false,-1);
    tracep->declBit(c+29,"io_out_4", false,-1);
    tracep->declBit(c+30,"io_out_5", false,-1);
    tracep->declBit(c+31,"io_out_6", false,-1);
    tracep->declBit(c+32,"io_out_7", false,-1);
    tracep->declBit(c+33,"io_out_8", false,-1);
    tracep->declBit(c+34,"io_out_9", false,-1);
    tracep->declBit(c+35,"io_out_10", false,-1);
    tracep->declBit(c+36,"io_out_11", false,-1);
    tracep->declBit(c+37,"io_out_12", false,-1);
    tracep->declBit(c+38,"io_out_13", false,-1);
    tracep->declBit(c+39,"io_out_14", false,-1);
    tracep->declBit(c+40,"io_out_15", false,-1);
    tracep->declBit(c+25,"state_0", false,-1);
    tracep->declBit(c+26,"state_1", false,-1);
    tracep->declBit(c+27,"state_2", false,-1);
    tracep->declBit(c+28,"state_3", false,-1);
    tracep->declBit(c+29,"state_4", false,-1);
    tracep->declBit(c+30,"state_5", false,-1);
    tracep->declBit(c+31,"state_6", false,-1);
    tracep->declBit(c+32,"state_7", false,-1);
    tracep->declBit(c+33,"state_8", false,-1);
    tracep->declBit(c+34,"state_9", false,-1);
    tracep->declBit(c+35,"state_10", false,-1);
    tracep->declBit(c+36,"state_11", false,-1);
    tracep->declBit(c+37,"state_12", false,-1);
    tracep->declBit(c+38,"state_13", false,-1);
    tracep->declBit(c+39,"state_14", false,-1);
    tracep->declBit(c+40,"state_15", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("q ");
    tracep->declBit(c+63,"clock", false,-1);
    tracep->declBit(c+64,"reset", false,-1);
    tracep->declBit(c+1,"io_enq_ready", false,-1);
    tracep->declBit(c+2,"io_enq_valid", false,-1);
    tracep->declBus(c+3,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+5,"io_deq_valid", false,-1);
    tracep->declBus(c+6,"io_deq_bits", false,-1, 1,0);
    tracep->declBus(c+7,"io_count", false,-1, 1,0);
    tracep->declBit(c+8,"io_flush", false,-1);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+48+i*1,"ram", true,(i+0), 1,0);
    }
    tracep->declBit(c+65,"ram_io_deq_bits_MPORT_en", false,-1);
    tracep->declBus(c+51,"ram_io_deq_bits_MPORT_addr", false,-1, 1,0);
    tracep->declBus(c+6,"ram_io_deq_bits_MPORT_data", false,-1, 1,0);
    tracep->declBus(c+3,"ram_MPORT_data", false,-1, 1,0);
    tracep->declBus(c+52,"ram_MPORT_addr", false,-1, 1,0);
    tracep->declBit(c+65,"ram_MPORT_mask", false,-1);
    tracep->declBit(c+53,"ram_MPORT_en", false,-1);
    tracep->declBus(c+52,"enq_ptr_value", false,-1, 1,0);
    tracep->declBus(c+51,"deq_ptr_value", false,-1, 1,0);
    tracep->declBit(c+54,"maybe_full", false,-1);
    tracep->declBit(c+55,"ptr_match", false,-1);
    tracep->declBit(c+56,"empty", false,-1);
    tracep->declBit(c+57,"full", false,-1);
    tracep->declBit(c+58,"do_enq", false,-1);
    tracep->declBit(c+59,"do_deq", false,-1);
    tracep->declBit(c+60,"wrap", false,-1);
    tracep->declBit(c+61,"wrap_1", false,-1);
    tracep->declBus(c+62,"ptr_diff", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("q_io_deq_ready_prng ");
    tracep->declBit(c+63,"clock", false,-1);
    tracep->declBit(c+64,"reset", false,-1);
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

VL_ATTR_COLD void VQueueGetsFlushedTester___024root__trace_init_top(VQueueGetsFlushedTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueGetsFlushedTester___024root__trace_init_top\n"); );
    // Body
    VQueueGetsFlushedTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VQueueGetsFlushedTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VQueueGetsFlushedTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VQueueGetsFlushedTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VQueueGetsFlushedTester___024root__trace_register(VQueueGetsFlushedTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueGetsFlushedTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VQueueGetsFlushedTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VQueueGetsFlushedTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VQueueGetsFlushedTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VQueueGetsFlushedTester___024root__trace_full_sub_0(VQueueGetsFlushedTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VQueueGetsFlushedTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueGetsFlushedTester___024root__trace_full_top_0\n"); );
    // Init
    VQueueGetsFlushedTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueueGetsFlushedTester___024root*>(voidSelf);
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VQueueGetsFlushedTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VQueueGetsFlushedTester___024root__trace_full_sub_0(VQueueGetsFlushedTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueGetsFlushedTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,((1U & (~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__full)))));
    tracep->fullBit(oldp+2,((0x14U > (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))));
    tracep->fullCData(oldp+3,(((0x13U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                ? 3U : ((0x12U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                         ? 2U : ((0x11U 
                                                  == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                  ? 1U
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                   ? 2U
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                    ? 3U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                     ? 0U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                      ? 3U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                       ? 1U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                        ? 0U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                         ? 1U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                          ? 1U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                           ? 0U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                            ? 2U
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                             ? 3U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                              ? 1U
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                               ? 1U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                                ? 0U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                                 ? 2U
                                                                 : 0U))))))))))))))))))),2);
    tracep->fullBit(oldp+4,((1U & ((IData)(vlSelf->QueueGetsFlushedTester__DOT___q_io_deq_ready_T) 
                                   >> 0xdU))));
    tracep->fullBit(oldp+5,((1U & (~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__empty)))));
    tracep->fullCData(oldp+6,(((2U >= (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value))
                                ? vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ram
                               [vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value]
                                : 0U)),2);
    tracep->fullCData(oldp+7,(vlSelf->QueueGetsFlushedTester__DOT__q_io_count),2);
    tracep->fullBit(oldp+8,((1U & (IData)(vlSelf->QueueGetsFlushedTester__DOT___flush_T))));
    tracep->fullBit(oldp+9,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_0));
    tracep->fullBit(oldp+10,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_1));
    tracep->fullBit(oldp+11,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_2));
    tracep->fullBit(oldp+12,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_3));
    tracep->fullBit(oldp+13,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_4));
    tracep->fullBit(oldp+14,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_5));
    tracep->fullBit(oldp+15,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_6));
    tracep->fullBit(oldp+16,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_7));
    tracep->fullBit(oldp+17,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_8));
    tracep->fullBit(oldp+18,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_9));
    tracep->fullBit(oldp+19,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_10));
    tracep->fullBit(oldp+20,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_11));
    tracep->fullBit(oldp+21,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_12));
    tracep->fullBit(oldp+22,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_13));
    tracep->fullBit(oldp+23,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_14));
    tracep->fullBit(oldp+24,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_15));
    tracep->fullBit(oldp+25,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_0));
    tracep->fullBit(oldp+26,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_1));
    tracep->fullBit(oldp+27,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_2));
    tracep->fullBit(oldp+28,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_3));
    tracep->fullBit(oldp+29,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_4));
    tracep->fullBit(oldp+30,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_5));
    tracep->fullBit(oldp+31,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_6));
    tracep->fullBit(oldp+32,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_7));
    tracep->fullBit(oldp+33,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_8));
    tracep->fullBit(oldp+34,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_9));
    tracep->fullBit(oldp+35,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_10));
    tracep->fullBit(oldp+36,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_11));
    tracep->fullBit(oldp+37,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_12));
    tracep->fullBit(oldp+38,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_13));
    tracep->fullBit(oldp+39,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_14));
    tracep->fullBit(oldp+40,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_15));
    tracep->fullCData(oldp+41,(vlSelf->QueueGetsFlushedTester__DOT__value),5);
    tracep->fullCData(oldp+42,(vlSelf->QueueGetsFlushedTester__DOT__outCnt),5);
    tracep->fullCData(oldp+43,(vlSelf->QueueGetsFlushedTester__DOT__currQCnt),3);
    tracep->fullBit(oldp+44,(vlSelf->QueueGetsFlushedTester__DOT__flushRegister));
    tracep->fullCData(oldp+45,((((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                 << 7U) | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                            << 6U) 
                                           | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                               << 5U) 
                                              | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))),8);
    tracep->fullBit(oldp+46,((0x14U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))));
    tracep->fullCData(oldp+47,((((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_7) 
                                 << 7U) | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_6) 
                                            << 6U) 
                                           | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_5) 
                                               << 5U) 
                                              | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_4) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_3) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_2) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_1) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_0))))))))),8);
    tracep->fullCData(oldp+48,(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ram[0]),2);
    tracep->fullCData(oldp+49,(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ram[1]),2);
    tracep->fullCData(oldp+50,(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ram[2]),2);
    tracep->fullCData(oldp+51,(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value),2);
    tracep->fullCData(oldp+52,(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__enq_ptr_value),2);
    tracep->fullBit(oldp+53,(((~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__full)) 
                              & (0x14U > (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)))));
    tracep->fullBit(oldp+54,(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full));
    tracep->fullBit(oldp+55,(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ptr_match));
    tracep->fullBit(oldp+56,(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__empty));
    tracep->fullBit(oldp+57,(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__full));
    tracep->fullBit(oldp+58,(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_enq));
    tracep->fullBit(oldp+59,(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_deq));
    tracep->fullBit(oldp+60,((2U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__enq_ptr_value))));
    tracep->fullBit(oldp+61,((2U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__deq_ptr_value))));
    tracep->fullCData(oldp+62,(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ptr_diff),2);
    tracep->fullBit(oldp+63,(vlSelf->clock));
    tracep->fullBit(oldp+64,(vlSelf->reset));
    tracep->fullBit(oldp+65,(1U));
}
