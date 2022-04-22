// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueReasonableReadyValid__Syms.h"


void VQueueReasonableReadyValid___024root__trace_chg_sub_0(VQueueReasonableReadyValid___024root* vlSelf, VerilatedVcd* tracep);

void VQueueReasonableReadyValid___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid___024root__trace_chg_top_0\n"); );
    // Init
    VQueueReasonableReadyValid___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueueReasonableReadyValid___024root*>(voidSelf);
    VQueueReasonableReadyValid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VQueueReasonableReadyValid___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VQueueReasonableReadyValid___024root__trace_chg_sub_0(VQueueReasonableReadyValid___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueReasonableReadyValid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((1U & (~ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__full)))));
        tracep->chgBit(oldp+1,((0x14U > (IData)(vlSelf->QueueReasonableReadyValid__DOT__value))));
        tracep->chgBit(oldp+2,((1U & ((IData)(vlSelf->QueueReasonableReadyValid__DOT___q_io_deq_ready_T) 
                                      >> 1U))));
        tracep->chgBit(oldp+3,((1U & (~ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__empty)))));
        tracep->chgCData(oldp+4,(((((IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__maybe_full) 
                                    & (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__ptr_match))
                                    ? 2U : 0U) | (1U 
                                                  & ((IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value) 
                                                     - (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value))))),2);
        tracep->chgBit(oldp+5,(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0));
        tracep->chgBit(oldp+6,(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_1));
        tracep->chgBit(oldp+7,(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_2));
        tracep->chgBit(oldp+8,(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_3));
        tracep->chgBit(oldp+9,(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_4));
        tracep->chgBit(oldp+10,(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_5));
        tracep->chgBit(oldp+11,(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_6));
        tracep->chgBit(oldp+12,(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_7));
        tracep->chgBit(oldp+13,(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_8));
        tracep->chgBit(oldp+14,(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_9));
        tracep->chgBit(oldp+15,(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_10));
        tracep->chgBit(oldp+16,(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_11));
        tracep->chgBit(oldp+17,(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_12));
        tracep->chgBit(oldp+18,(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_13));
        tracep->chgBit(oldp+19,(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_14));
        tracep->chgBit(oldp+20,(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_15));
        tracep->chgCData(oldp+21,(vlSelf->QueueReasonableReadyValid__DOT__value),5);
        tracep->chgCData(oldp+22,(vlSelf->QueueReasonableReadyValid__DOT__value_1),5);
        tracep->chgCData(oldp+23,((((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                    << 7U) | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                               << 6U) 
                                              | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->QueueReasonableReadyValid__DOT__q_io_deq_ready_prng__DOT__state_0))))))))),8);
        tracep->chgBit(oldp+24,((0x14U == (IData)(vlSelf->QueueReasonableReadyValid__DOT__value))));
        tracep->chgBit(oldp+25,((0x14U == (IData)(vlSelf->QueueReasonableReadyValid__DOT__value_1))));
        tracep->chgBit(oldp+26,(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value));
        tracep->chgBit(oldp+27,(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value));
        tracep->chgBit(oldp+28,(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__maybe_full));
        tracep->chgBit(oldp+29,(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__ptr_match));
        tracep->chgBit(oldp+30,(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__empty));
        tracep->chgBit(oldp+31,(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__full));
        tracep->chgBit(oldp+32,(((~ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__full)) 
                                 & (0x14U > (IData)(vlSelf->QueueReasonableReadyValid__DOT__value)))));
        tracep->chgBit(oldp+33,((1U & (((IData)(vlSelf->QueueReasonableReadyValid__DOT___q_io_deq_ready_T) 
                                        >> 1U) & (~ (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__empty))))));
        tracep->chgBit(oldp+34,((1U & ((IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__enq_ptr_value) 
                                       - (IData)(vlSelf->QueueReasonableReadyValid__DOT__q__DOT__deq_ptr_value)))));
    }
    tracep->chgBit(oldp+35,(vlSelf->clock));
    tracep->chgBit(oldp+36,(vlSelf->reset));
}

void VQueueReasonableReadyValid___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueReasonableReadyValid___024root__trace_cleanup\n"); );
    // Init
    VQueueReasonableReadyValid___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueueReasonableReadyValid___024root*>(voidSelf);
    VQueueReasonableReadyValid__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
