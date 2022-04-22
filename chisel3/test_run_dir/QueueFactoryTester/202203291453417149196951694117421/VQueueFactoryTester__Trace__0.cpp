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
        tracep->chgBit(oldp+0,((1U & (~ (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__full)))));
        tracep->chgBit(oldp+1,((0x14U > (IData)(vlSelf->QueueFactoryTester__DOT__value))));
        tracep->chgCData(oldp+2,(((0x13U == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                   ? 0xcU : ((0x12U 
                                              == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                              ? 5U : 
                                             ((0x11U 
                                               == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                               ? 6U
                                               : ((0x10U 
                                                   == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                   ? 0xaU
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                    ? 0xdU
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                     ? 0U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                      ? 0xbU
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                       ? 0U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                        ? 8U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                         ? 2U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                          ? 9U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                           ? 0xdU
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                            ? 0xfU
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                             ? 0xdU
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                              ? 0xcU
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                               ? 6U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                                ? 5U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                                 ? 7U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->QueueFactoryTester__DOT__value))
                                                                  ? 1U
                                                                  : 0xaU)))))))))))))))))))),4);
        tracep->chgBit(oldp+3,((1U & ((IData)(vlSelf->QueueFactoryTester__DOT___deq_io_deq_ready_T) 
                                      >> 0xbU))));
        tracep->chgBit(oldp+4,((1U & (~ (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__empty)))));
        tracep->chgCData(oldp+5,(((2U >= (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__ram_io_deq_bits_MPORT_addr_pipe_0))
                                   ? vlSelf->QueueFactoryTester__DOT__deq__DOT__ram
                                  [vlSelf->QueueFactoryTester__DOT__deq__DOT__ram_io_deq_bits_MPORT_addr_pipe_0]
                                   : 0U)),4);
        tracep->chgBit(oldp+6,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0));
        tracep->chgBit(oldp+7,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_1));
        tracep->chgBit(oldp+8,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_2));
        tracep->chgBit(oldp+9,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_3));
        tracep->chgBit(oldp+10,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_4));
        tracep->chgBit(oldp+11,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_5));
        tracep->chgBit(oldp+12,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_6));
        tracep->chgBit(oldp+13,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_7));
        tracep->chgBit(oldp+14,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_8));
        tracep->chgBit(oldp+15,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_9));
        tracep->chgBit(oldp+16,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_10));
        tracep->chgBit(oldp+17,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_11));
        tracep->chgBit(oldp+18,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_12));
        tracep->chgBit(oldp+19,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_13));
        tracep->chgBit(oldp+20,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_14));
        tracep->chgBit(oldp+21,(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_15));
        tracep->chgCData(oldp+22,(vlSelf->QueueFactoryTester__DOT__value),5);
        tracep->chgCData(oldp+23,(vlSelf->QueueFactoryTester__DOT__value_1),5);
        tracep->chgCData(oldp+24,((((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_7) 
                                    << 7U) | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_6) 
                                               << 6U) 
                                              | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_5) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_4) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_3) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_1) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->QueueFactoryTester__DOT__deq_io_deq_ready_prng__DOT__state_0))))))))),8);
        tracep->chgBit(oldp+25,((0x14U == (IData)(vlSelf->QueueFactoryTester__DOT__value))));
        tracep->chgBit(oldp+26,((0x14U == (IData)(vlSelf->QueueFactoryTester__DOT__value_1))));
        tracep->chgCData(oldp+27,(vlSelf->QueueFactoryTester__DOT__deq__DOT__ram[0]),4);
        tracep->chgCData(oldp+28,(vlSelf->QueueFactoryTester__DOT__deq__DOT__ram[1]),4);
        tracep->chgCData(oldp+29,(vlSelf->QueueFactoryTester__DOT__deq__DOT__ram[2]),4);
        tracep->chgBit(oldp+30,(vlSelf->QueueFactoryTester__DOT__deq__DOT__ram_io_deq_bits_MPORT_en_pipe_0));
        tracep->chgCData(oldp+31,(vlSelf->QueueFactoryTester__DOT__deq__DOT__ram_io_deq_bits_MPORT_addr_pipe_0),2);
        tracep->chgCData(oldp+32,(vlSelf->QueueFactoryTester__DOT__deq__DOT__value),2);
        tracep->chgBit(oldp+33,(((~ (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__full)) 
                                 & (0x14U > (IData)(vlSelf->QueueFactoryTester__DOT__value)))));
        tracep->chgCData(oldp+34,(vlSelf->QueueFactoryTester__DOT__deq__DOT__value_1),2);
        tracep->chgBit(oldp+35,(vlSelf->QueueFactoryTester__DOT__deq__DOT__maybe_full));
        tracep->chgBit(oldp+36,(vlSelf->QueueFactoryTester__DOT__deq__DOT__ptr_match));
        tracep->chgBit(oldp+37,(vlSelf->QueueFactoryTester__DOT__deq__DOT__empty));
        tracep->chgBit(oldp+38,(vlSelf->QueueFactoryTester__DOT__deq__DOT__full));
        tracep->chgBit(oldp+39,(vlSelf->QueueFactoryTester__DOT__deq__DOT__do_enq));
        tracep->chgBit(oldp+40,(vlSelf->QueueFactoryTester__DOT__deq__DOT__do_deq));
        tracep->chgBit(oldp+41,((2U == (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__value))));
        tracep->chgBit(oldp+42,((2U == (IData)(vlSelf->QueueFactoryTester__DOT__deq__DOT__value_1))));
    }
    tracep->chgBit(oldp+43,(vlSelf->clock));
    tracep->chgBit(oldp+44,(vlSelf->reset));
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
