// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueGetsFlushedTester__Syms.h"


void VQueueGetsFlushedTester___024root__trace_chg_sub_0(VQueueGetsFlushedTester___024root* vlSelf, VerilatedVcd* tracep);

void VQueueGetsFlushedTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueGetsFlushedTester___024root__trace_chg_top_0\n"); );
    // Init
    VQueueGetsFlushedTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueueGetsFlushedTester___024root*>(voidSelf);
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VQueueGetsFlushedTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VQueueGetsFlushedTester___024root__trace_chg_sub_0(VQueueGetsFlushedTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueGetsFlushedTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((1U & (~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full)))));
        tracep->chgBit(oldp+1,((0x14U > (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))));
        tracep->chgCData(oldp+2,(((0x13U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                   ? 0xbU : ((0x12U 
                                              == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                              ? 4U : 
                                             ((0x11U 
                                               == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                               ? 6U
                                               : ((0x10U 
                                                   == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                   ? 8U
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                    ? 1U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                     ? 5U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                      ? 0xdU
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                       ? 8U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                        ? 0U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                         ? 3U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                          ? 5U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                           ? 2U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                            ? 0xfU
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                             ? 0U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                              ? 0xaU
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                               ? 7U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                                ? 5U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                                 ? 0xeU
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))
                                                                  ? 0xeU
                                                                  : 0xaU)))))))))))))))))))),4);
        tracep->chgBit(oldp+3,((1U & ((IData)(vlSelf->QueueGetsFlushedTester__DOT___q_io_deq_ready_T) 
                                      >> 0xaU))));
        tracep->chgBit(oldp+4,(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full));
        tracep->chgCData(oldp+5,(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ram
                                 [0U]),4);
        tracep->chgBit(oldp+6,((1U & ((IData)(vlSelf->QueueGetsFlushedTester__DOT___flush_T) 
                                      >> 0xdU))));
        tracep->chgBit(oldp+7,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_0));
        tracep->chgBit(oldp+8,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_1));
        tracep->chgBit(oldp+9,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_2));
        tracep->chgBit(oldp+10,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_3));
        tracep->chgBit(oldp+11,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_4));
        tracep->chgBit(oldp+12,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_5));
        tracep->chgBit(oldp+13,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_6));
        tracep->chgBit(oldp+14,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_7));
        tracep->chgBit(oldp+15,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_8));
        tracep->chgBit(oldp+16,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_9));
        tracep->chgBit(oldp+17,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_10));
        tracep->chgBit(oldp+18,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_11));
        tracep->chgBit(oldp+19,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_12));
        tracep->chgBit(oldp+20,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_13));
        tracep->chgBit(oldp+21,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_14));
        tracep->chgBit(oldp+22,(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_15));
        tracep->chgBit(oldp+23,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_0));
        tracep->chgBit(oldp+24,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_1));
        tracep->chgBit(oldp+25,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_2));
        tracep->chgBit(oldp+26,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_3));
        tracep->chgBit(oldp+27,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_4));
        tracep->chgBit(oldp+28,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_5));
        tracep->chgBit(oldp+29,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_6));
        tracep->chgBit(oldp+30,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_7));
        tracep->chgBit(oldp+31,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_8));
        tracep->chgBit(oldp+32,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_9));
        tracep->chgBit(oldp+33,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_10));
        tracep->chgBit(oldp+34,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_11));
        tracep->chgBit(oldp+35,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_12));
        tracep->chgBit(oldp+36,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_13));
        tracep->chgBit(oldp+37,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_14));
        tracep->chgBit(oldp+38,(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_15));
        tracep->chgCData(oldp+39,(vlSelf->QueueGetsFlushedTester__DOT__value),5);
        tracep->chgCData(oldp+40,(vlSelf->QueueGetsFlushedTester__DOT__outCnt),5);
        tracep->chgCData(oldp+41,(vlSelf->QueueGetsFlushedTester__DOT__currQCnt),3);
        tracep->chgBit(oldp+42,(vlSelf->QueueGetsFlushedTester__DOT__flushRegister));
        tracep->chgCData(oldp+43,((((IData)(vlSelf->QueueGetsFlushedTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
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
        tracep->chgBit(oldp+44,((0x14U == (IData)(vlSelf->QueueGetsFlushedTester__DOT__value))));
        tracep->chgCData(oldp+45,((((IData)(vlSelf->QueueGetsFlushedTester__DOT__flush_prng__DOT__state_7) 
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
        tracep->chgCData(oldp+46,(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__ram[0]),4);
        tracep->chgBit(oldp+47,(((~ (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full)) 
                                 & (0x14U > (IData)(vlSelf->QueueGetsFlushedTester__DOT__value)))));
        tracep->chgBit(oldp+48,(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__do_enq));
        tracep->chgBit(oldp+49,((((IData)(vlSelf->QueueGetsFlushedTester__DOT___q_io_deq_ready_T) 
                                  >> 0xaU) & (IData)(vlSelf->QueueGetsFlushedTester__DOT__q__DOT__maybe_full))));
    }
    tracep->chgBit(oldp+50,(vlSelf->clock));
    tracep->chgBit(oldp+51,(vlSelf->reset));
}

void VQueueGetsFlushedTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueGetsFlushedTester___024root__trace_cleanup\n"); );
    // Init
    VQueueGetsFlushedTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueueGetsFlushedTester___024root*>(voidSelf);
    VQueueGetsFlushedTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}