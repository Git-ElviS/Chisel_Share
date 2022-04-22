// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEmptyFlushEdgecaseTester__Syms.h"


void VEmptyFlushEdgecaseTester___024root__trace_chg_sub_0(VEmptyFlushEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep);

void VEmptyFlushEdgecaseTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmptyFlushEdgecaseTester___024root__trace_chg_top_0\n"); );
    // Init
    VEmptyFlushEdgecaseTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VEmptyFlushEdgecaseTester___024root*>(voidSelf);
    VEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VEmptyFlushEdgecaseTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VEmptyFlushEdgecaseTester___024root__trace_chg_sub_0(VEmptyFlushEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmptyFlushEdgecaseTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((1U & (~ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)))));
        tracep->chgBit(oldp+1,(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_enq_valid));
        tracep->chgBit(oldp+2,(((0x13U != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                & ((0x12U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                   | ((0x11U != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                      & ((0x10U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                         | ((0xfU != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                            & ((0xeU 
                                                != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                               & ((0xdU 
                                                   != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                                  & ((0xcU 
                                                      == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                                     | ((0xbU 
                                                         != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                                        & ((0xaU 
                                                            == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                                           | ((9U 
                                                               != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                                              & ((8U 
                                                                  == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                                                 | ((7U 
                                                                     == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                                                    | ((6U 
                                                                        != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                                                       & ((5U 
                                                                           != (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                                                          & ((4U 
                                                                              == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)) 
                                                                             | (3U 
                                                                                == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))))))))))))))))))));
        tracep->chgBit(oldp+3,((1U & ((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                                      >> 2U))));
        tracep->chgBit(oldp+4,(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full));
        tracep->chgBit(oldp+5,(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ram
                               [0U]));
        tracep->chgBit(oldp+6,(((0U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value_1)) 
                                & (0U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value)))));
        tracep->chgBit(oldp+7,(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0));
        tracep->chgBit(oldp+8,(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1));
        tracep->chgBit(oldp+9,(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2));
        tracep->chgBit(oldp+10,(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3));
        tracep->chgBit(oldp+11,(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4));
        tracep->chgBit(oldp+12,(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5));
        tracep->chgBit(oldp+13,(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6));
        tracep->chgBit(oldp+14,(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7));
        tracep->chgBit(oldp+15,(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8));
        tracep->chgBit(oldp+16,(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9));
        tracep->chgBit(oldp+17,(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10));
        tracep->chgBit(oldp+18,(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11));
        tracep->chgBit(oldp+19,(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12));
        tracep->chgBit(oldp+20,(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13));
        tracep->chgBit(oldp+21,(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14));
        tracep->chgBit(oldp+22,(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15));
        tracep->chgCData(oldp+23,(vlSelf->EmptyFlushEdgecaseTester__DOT__value),5);
        tracep->chgCData(oldp+24,(vlSelf->EmptyFlushEdgecaseTester__DOT__outCnt),5);
        tracep->chgBit(oldp+25,(vlSelf->EmptyFlushEdgecaseTester__DOT__flushRegister));
        tracep->chgCData(oldp+26,((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                    << 7U) | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                               << 6U) 
                                              | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))),8);
        tracep->chgBit(oldp+27,((0x14U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value))));
        tracep->chgCData(oldp+28,(vlSelf->EmptyFlushEdgecaseTester__DOT__value_1),5);
        tracep->chgBit(oldp+29,((0x14U == (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__value_1))));
        tracep->chgBit(oldp+30,(vlSelf->EmptyFlushEdgecaseTester__DOT__flush));
        tracep->chgBit(oldp+31,(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__ram[0]));
        tracep->chgBit(oldp+32,(((~ (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full)) 
                                 & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q_io_enq_valid))));
        tracep->chgBit(oldp+33,(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__do_enq));
        tracep->chgBit(oldp+34,((((IData)(vlSelf->EmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                                  >> 2U) & (IData)(vlSelf->EmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full))));
    }
    tracep->chgBit(oldp+35,(vlSelf->clock));
    tracep->chgBit(oldp+36,(vlSelf->reset));
}

void VEmptyFlushEdgecaseTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEmptyFlushEdgecaseTester___024root__trace_cleanup\n"); );
    // Init
    VEmptyFlushEdgecaseTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VEmptyFlushEdgecaseTester___024root*>(voidSelf);
    VEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
