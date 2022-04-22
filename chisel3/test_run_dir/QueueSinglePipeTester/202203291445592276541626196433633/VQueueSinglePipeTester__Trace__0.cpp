// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueSinglePipeTester__Syms.h"


void VQueueSinglePipeTester___024root__trace_chg_sub_0(VQueueSinglePipeTester___024root* vlSelf, VerilatedVcd* tracep);

void VQueueSinglePipeTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueSinglePipeTester___024root__trace_chg_top_0\n"); );
    // Init
    VQueueSinglePipeTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueueSinglePipeTester___024root*>(voidSelf);
    VQueueSinglePipeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VQueueSinglePipeTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VQueueSinglePipeTester___024root__trace_chg_sub_0(VQueueSinglePipeTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueSinglePipeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueSinglePipeTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->QueueSinglePipeTester__DOT__q_io_enq_ready));
        tracep->chgBit(oldp+1,((0x14U > (IData)(vlSelf->QueueSinglePipeTester__DOT__value))));
        tracep->chgBit(oldp+2,((1U & ((IData)(vlSelf->QueueSinglePipeTester__DOT___q_io_deq_ready_T) 
                                      >> 6U))));
        tracep->chgBit(oldp+3,(vlSelf->QueueSinglePipeTester__DOT__q__DOT__maybe_full));
        tracep->chgBit(oldp+4,(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0));
        tracep->chgBit(oldp+5,(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1));
        tracep->chgBit(oldp+6,(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2));
        tracep->chgBit(oldp+7,(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3));
        tracep->chgBit(oldp+8,(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4));
        tracep->chgBit(oldp+9,(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5));
        tracep->chgBit(oldp+10,(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6));
        tracep->chgBit(oldp+11,(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7));
        tracep->chgBit(oldp+12,(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_8));
        tracep->chgBit(oldp+13,(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_9));
        tracep->chgBit(oldp+14,(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10));
        tracep->chgBit(oldp+15,(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_11));
        tracep->chgBit(oldp+16,(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12));
        tracep->chgBit(oldp+17,(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13));
        tracep->chgBit(oldp+18,(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_14));
        tracep->chgBit(oldp+19,(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_15));
        tracep->chgCData(oldp+20,(vlSelf->QueueSinglePipeTester__DOT__value),5);
        tracep->chgCData(oldp+21,(vlSelf->QueueSinglePipeTester__DOT__value_1),5);
        tracep->chgCData(oldp+22,((((IData)(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                    << 7U) | (((IData)(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                               << 6U) 
                                              | (((IData)(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->QueueSinglePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))),8);
        tracep->chgBit(oldp+23,((0x14U == (IData)(vlSelf->QueueSinglePipeTester__DOT__value))));
        tracep->chgBit(oldp+24,((0x14U == (IData)(vlSelf->QueueSinglePipeTester__DOT__value_1))));
        tracep->chgBit(oldp+25,((1U & (~ (IData)(vlSelf->QueueSinglePipeTester__DOT__q__DOT__maybe_full)))));
        tracep->chgBit(oldp+26,(vlSelf->QueueSinglePipeTester__DOT__q__DOT__do_enq));
        tracep->chgBit(oldp+27,((((IData)(vlSelf->QueueSinglePipeTester__DOT___q_io_deq_ready_T) 
                                  >> 6U) & (IData)(vlSelf->QueueSinglePipeTester__DOT__q__DOT__maybe_full))));
    }
    tracep->chgBit(oldp+28,(vlSelf->clock));
    tracep->chgBit(oldp+29,(vlSelf->reset));
}

void VQueueSinglePipeTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueSinglePipeTester___024root__trace_cleanup\n"); );
    // Init
    VQueueSinglePipeTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueueSinglePipeTester___024root*>(voidSelf);
    VQueueSinglePipeTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
