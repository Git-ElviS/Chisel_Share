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
        tracep->chgBit(oldp+0,((1U & (~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__full)))));
        tracep->chgBit(oldp+1,((0x14U > (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))));
        tracep->chgBit(oldp+2,(((0x13U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)) 
                                | ((0x12U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)) 
                                   | ((0x11U != (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)) 
                                      & ((0x10U != (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)) 
                                         & ((0xfU != (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)) 
                                            & ((0xeU 
                                                != (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)) 
                                               & ((0xdU 
                                                   == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)) 
                                                  | ((0xcU 
                                                      == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)) 
                                                     | ((0xbU 
                                                         != (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)) 
                                                        & ((0xaU 
                                                            == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)) 
                                                           | ((9U 
                                                               != (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)) 
                                                              & ((8U 
                                                                  == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)) 
                                                                 | ((7U 
                                                                     != (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)) 
                                                                    & ((6U 
                                                                        != (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)) 
                                                                       & ((5U 
                                                                           == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)) 
                                                                          | (4U 
                                                                             == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)))))))))))))))))));
        tracep->chgBit(oldp+3,((1U & ((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                                      >> 4U))));
        tracep->chgBit(oldp+4,((1U & (~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__empty)))));
        tracep->chgBit(oldp+5,(((2U >= (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value)) 
                                & vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ram
                                [vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value])));
        tracep->chgCData(oldp+6,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_count),2);
        tracep->chgBit(oldp+7,((3U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt))));
        tracep->chgBit(oldp+8,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0));
        tracep->chgBit(oldp+9,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1));
        tracep->chgBit(oldp+10,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2));
        tracep->chgBit(oldp+11,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3));
        tracep->chgBit(oldp+12,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4));
        tracep->chgBit(oldp+13,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5));
        tracep->chgBit(oldp+14,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6));
        tracep->chgBit(oldp+15,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7));
        tracep->chgBit(oldp+16,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8));
        tracep->chgBit(oldp+17,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9));
        tracep->chgBit(oldp+18,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10));
        tracep->chgBit(oldp+19,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11));
        tracep->chgBit(oldp+20,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12));
        tracep->chgBit(oldp+21,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13));
        tracep->chgBit(oldp+22,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14));
        tracep->chgBit(oldp+23,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15));
        tracep->chgCData(oldp+24,(vlSelf->FullQueueFlushEdgecaseTester__DOT__value),5);
        tracep->chgCData(oldp+25,(vlSelf->FullQueueFlushEdgecaseTester__DOT__outCnt),5);
        tracep->chgCData(oldp+26,(vlSelf->FullQueueFlushEdgecaseTester__DOT__currQCnt),3);
        tracep->chgBit(oldp+27,(vlSelf->FullQueueFlushEdgecaseTester__DOT__flushRegister));
        tracep->chgCData(oldp+28,((((IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
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
        tracep->chgBit(oldp+29,((0x14U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value))));
        tracep->chgBit(oldp+30,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ram[0]));
        tracep->chgBit(oldp+31,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ram[1]));
        tracep->chgBit(oldp+32,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ram[2]));
        tracep->chgCData(oldp+33,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value),2);
        tracep->chgCData(oldp+34,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value),2);
        tracep->chgBit(oldp+35,(((~ (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__full)) 
                                 & (0x14U > (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__value)))));
        tracep->chgBit(oldp+36,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__maybe_full));
        tracep->chgBit(oldp+37,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ptr_match));
        tracep->chgBit(oldp+38,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__empty));
        tracep->chgBit(oldp+39,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__full));
        tracep->chgBit(oldp+40,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__do_enq));
        tracep->chgBit(oldp+41,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__do_deq));
        tracep->chgBit(oldp+42,((2U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value))));
        tracep->chgBit(oldp+43,((2U == (IData)(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value))));
        tracep->chgCData(oldp+44,(vlSelf->FullQueueFlushEdgecaseTester__DOT__q__DOT__ptr_diff),2);
    }
    tracep->chgBit(oldp+45,(vlSelf->clock));
    tracep->chgBit(oldp+46,(vlSelf->reset));
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
