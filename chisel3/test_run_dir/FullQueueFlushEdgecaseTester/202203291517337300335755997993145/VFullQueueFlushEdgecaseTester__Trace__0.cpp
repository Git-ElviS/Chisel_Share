// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFullQueueFlushEdgecaseTester__Syms.h"


void VFullQueueFlushEdgecaseTester___024root__trace_chg_sub_0(VFullQueueFlushEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep);

void VFullQueueFlushEdgecaseTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullQueueFlushEdgecaseTester___024root__trace_chg_top_0\n"); );
    // Init
    VFullQueueFlushEdgecaseTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFullQueueFlushEdgecaseTester___024root*>(voidSelf);
    VFullQueueFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VFullQueueFlushEdgecaseTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VFullQueueFlushEdgecaseTester___024root__trace_chg_sub_0(VFullQueueFlushEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFullQueueFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullQueueFlushEdgecaseTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((1U & (~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__maybe_full)))));
        tracep->chgBit(oldp+1,((0x14U > (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))));
        tracep->chgCData(oldp+2,(((0x13U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                   ? 1U : ((0x12U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                            ? 3U : 
                                           ((0x11U 
                                             == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                             ? 2U : 
                                            ((0x10U 
                                              == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                              ? 2U : 
                                             ((0xfU 
                                               == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                               ? 2U
                                               : ((0xeU 
                                                   == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                   ? 3U
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                    ? 3U
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                     ? 2U
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                      ? 2U
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                       ? 1U
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                        ? 0U
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                         ? 3U
                                                         : 
                                                        ((7U 
                                                          == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                          ? 2U
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                           ? 3U
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                            ? 0U
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                             ? 2U
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                              ? 1U
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                               ? 3U
                                                               : 
                                                              ((1U 
                                                                == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))
                                                                ? 3U
                                                                : 1U)))))))))))))))))))),2);
        tracep->chgBit(oldp+3,((1U & ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                                      >> 1U))));
        tracep->chgBit(oldp+4,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__maybe_full));
        tracep->chgCData(oldp+5,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ram
                                 [0U]),2);
        tracep->chgBit(oldp+6,((1U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt))));
        tracep->chgBit(oldp+7,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0));
        tracep->chgBit(oldp+8,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1));
        tracep->chgBit(oldp+9,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2));
        tracep->chgBit(oldp+10,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3));
        tracep->chgBit(oldp+11,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4));
        tracep->chgBit(oldp+12,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5));
        tracep->chgBit(oldp+13,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6));
        tracep->chgBit(oldp+14,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7));
        tracep->chgBit(oldp+15,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8));
        tracep->chgBit(oldp+16,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9));
        tracep->chgBit(oldp+17,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10));
        tracep->chgBit(oldp+18,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11));
        tracep->chgBit(oldp+19,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12));
        tracep->chgBit(oldp+20,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13));
        tracep->chgBit(oldp+21,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14));
        tracep->chgBit(oldp+22,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15));
        tracep->chgCData(oldp+23,(vlSelf->FullQueueFlushEdgecaseTester__DOT__value),5);
        tracep->chgCData(oldp+24,(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt),5);
        tracep->chgCData(oldp+25,(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt),3);
        tracep->chgBit(oldp+26,(vlSelf->FullQueueFlushEdgecaseTester__DOT__flushRegister));
        tracep->chgCData(oldp+27,((((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                    << 7U) | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                               << 6U) 
                                              | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))),8);
        tracep->chgBit(oldp+28,((0x14U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))));
        tracep->chgCData(oldp+29,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ram[0]),2);
        tracep->chgBit(oldp+30,(((~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__maybe_full)) 
                                 & (0x14U > (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)))));
        tracep->chgBit(oldp+31,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__do_enq));
        tracep->chgBit(oldp+32,((((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                                  >> 1U) & (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__maybe_full))));
    }
    tracep->chgBit(oldp+33,(vlSelf->clock));
    tracep->chgBit(oldp+34,(vlSelf->reset));
}

void VFullQueueFlushEdgecaseTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFullQueueFlushEdgecaseTester___024root__trace_cleanup\n"); );
    // Init
    VFullQueueFlushEdgecaseTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFullQueueFlushEdgecaseTester___024root*>(voidSelf);
    VFullQueueFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
