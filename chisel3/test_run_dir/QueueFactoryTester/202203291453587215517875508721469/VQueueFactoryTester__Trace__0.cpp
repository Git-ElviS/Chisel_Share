// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueFactoryTester__Syms.h"


void VQueueFactoryTester___024root__trace_chg_sub_0(VQueueFactoryTester___024root* vlSelf, VerilatedVcd* tracep);

void VQueueFactoryTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester___024root__trace_chg_top_0\n"); );
    // Init
    VQueueFactoryTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueueFactoryTester___024root*>(voidSelf);
    VQueueFactoryTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VQueueFactoryTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VQueueFactoryTester___024root__trace_chg_sub_0(VQueueFactoryTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueFactoryTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_0));
        tracep->chgBit(oldp+1,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_1));
        tracep->chgBit(oldp+2,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_2));
        tracep->chgBit(oldp+3,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_3));
        tracep->chgBit(oldp+4,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_4));
        tracep->chgBit(oldp+5,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_5));
        tracep->chgBit(oldp+6,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_6));
        tracep->chgBit(oldp+7,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_7));
        tracep->chgBit(oldp+8,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_8));
        tracep->chgBit(oldp+9,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_9));
        tracep->chgBit(oldp+10,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_10));
        tracep->chgBit(oldp+11,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_11));
        tracep->chgBit(oldp+12,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_12));
        tracep->chgBit(oldp+13,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_13));
        tracep->chgBit(oldp+14,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_14));
        tracep->chgBit(oldp+15,(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_15));
        tracep->chgCData(oldp+16,(vlSelf->QueueFactoryTester__DOT__value),5);
        tracep->chgCData(oldp+17,(vlSelf->QueueFactoryTester__DOT__value_1),5);
        tracep->chgBit(oldp+18,((0x14U > (IData)(vlSelf->QueueFactoryTester__DOT__value))));
        tracep->chgCData(oldp+19,((((IData)(vlSelf->QueueFactoryTester__DOT__deq_ready_prng__DOT__state_7) 
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
        tracep->chgBit(oldp+20,(((0x13U != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                 & ((0x12U == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                    | ((0x11U == (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                       | ((0x10U != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
                                          & ((0xfU 
                                              != (IData)(vlSelf->QueueFactoryTester__DOT__value)) 
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
        tracep->chgBit(oldp+21,((0x14U == (IData)(vlSelf->QueueFactoryTester__DOT__value))));
        tracep->chgBit(oldp+22,((0x14U == (IData)(vlSelf->QueueFactoryTester__DOT__value_1))));
    }
    tracep->chgBit(oldp+23,(vlSelf->clock));
    tracep->chgBit(oldp+24,(vlSelf->reset));
}

void VQueueFactoryTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueFactoryTester___024root__trace_cleanup\n"); );
    // Init
    VQueueFactoryTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueueFactoryTester___024root*>(voidSelf);
    VQueueFactoryTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
