// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VThingsPassThroughTester__Syms.h"


void VThingsPassThroughTester___024root__trace_chg_sub_0(VThingsPassThroughTester___024root* vlSelf, VerilatedVcd* tracep);

void VThingsPassThroughTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester___024root__trace_chg_top_0\n"); );
    // Init
    VThingsPassThroughTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VThingsPassThroughTester___024root*>(voidSelf);
    VThingsPassThroughTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VThingsPassThroughTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VThingsPassThroughTester___024root__trace_chg_sub_0(VThingsPassThroughTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VThingsPassThroughTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((1U & (~ (IData)(vlSelf->ThingsPassThroughTester__DOT__q__DOT__maybe_full)))));
        tracep->chgBit(oldp+1,((0x14U > (IData)(vlSelf->ThingsPassThroughTester__DOT__value))));
        tracep->chgBit(oldp+2,(((0x13U == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                | ((0x12U == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                   | ((0x11U != (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                      & ((0x10U == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                         | ((0xfU == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                            | ((0xeU 
                                                == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                               | ((0xdU 
                                                   != (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                                  & ((0xcU 
                                                      == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                                     | ((0xbU 
                                                         == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                                        | ((0xaU 
                                                            == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                                           | ((9U 
                                                               == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                                              | ((8U 
                                                                  != (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                                                 & ((7U 
                                                                     == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                                                    | ((6U 
                                                                        != (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                                                       & ((5U 
                                                                           != (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                                                          & ((4U 
                                                                              == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                                                             | ((3U 
                                                                                == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)) 
                                                                                | (2U 
                                                                                == (IData)(vlSelf->ThingsPassThroughTester__DOT__value)))))))))))))))))))));
        tracep->chgBit(oldp+3,((1U & ((IData)(vlSelf->ThingsPassThroughTester__DOT___q_io_deq_ready_T) 
                                      >> 8U))));
        tracep->chgBit(oldp+4,(vlSelf->ThingsPassThroughTester__DOT__q__DOT__maybe_full));
        tracep->chgBit(oldp+5,(((0U >= (IData)(vlSelf->ThingsPassThroughTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0)) 
                                & vlSelf->ThingsPassThroughTester__DOT__q__DOT__ram
                                [vlSelf->ThingsPassThroughTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0])));
        tracep->chgBit(oldp+6,(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0));
        tracep->chgBit(oldp+7,(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_1));
        tracep->chgBit(oldp+8,(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_2));
        tracep->chgBit(oldp+9,(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_3));
        tracep->chgBit(oldp+10,(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_4));
        tracep->chgBit(oldp+11,(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_5));
        tracep->chgBit(oldp+12,(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_6));
        tracep->chgBit(oldp+13,(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_7));
        tracep->chgBit(oldp+14,(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_8));
        tracep->chgBit(oldp+15,(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_9));
        tracep->chgBit(oldp+16,(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_10));
        tracep->chgBit(oldp+17,(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_11));
        tracep->chgBit(oldp+18,(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_12));
        tracep->chgBit(oldp+19,(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_13));
        tracep->chgBit(oldp+20,(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_14));
        tracep->chgBit(oldp+21,(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_15));
        tracep->chgCData(oldp+22,(vlSelf->ThingsPassThroughTester__DOT__value),5);
        tracep->chgCData(oldp+23,(vlSelf->ThingsPassThroughTester__DOT__value_1),5);
        tracep->chgCData(oldp+24,((((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                    << 7U) | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                               << 6U) 
                                              | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->ThingsPassThroughTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))),8);
        tracep->chgBit(oldp+25,((0x14U == (IData)(vlSelf->ThingsPassThroughTester__DOT__value))));
        tracep->chgBit(oldp+26,((0x14U == (IData)(vlSelf->ThingsPassThroughTester__DOT__value_1))));
        tracep->chgBit(oldp+27,(vlSelf->ThingsPassThroughTester__DOT__q__DOT__ram[0]));
        tracep->chgBit(oldp+28,(vlSelf->ThingsPassThroughTester__DOT__q__DOT__ram_io_deq_bits_MPORT_en_pipe_0));
        tracep->chgBit(oldp+29,(vlSelf->ThingsPassThroughTester__DOT__q__DOT__ram_io_deq_bits_MPORT_addr_pipe_0));
        tracep->chgBit(oldp+30,(((~ (IData)(vlSelf->ThingsPassThroughTester__DOT__q__DOT__maybe_full)) 
                                 & (0x14U > (IData)(vlSelf->ThingsPassThroughTester__DOT__value)))));
        tracep->chgBit(oldp+31,(vlSelf->ThingsPassThroughTester__DOT__q__DOT__do_enq));
        tracep->chgBit(oldp+32,((((IData)(vlSelf->ThingsPassThroughTester__DOT___q_io_deq_ready_T) 
                                  >> 8U) & (IData)(vlSelf->ThingsPassThroughTester__DOT__q__DOT__maybe_full))));
    }
    tracep->chgBit(oldp+33,(vlSelf->clock));
    tracep->chgBit(oldp+34,(vlSelf->reset));
}

void VThingsPassThroughTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThingsPassThroughTester___024root__trace_cleanup\n"); );
    // Init
    VThingsPassThroughTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VThingsPassThroughTester___024root*>(voidSelf);
    VThingsPassThroughTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
