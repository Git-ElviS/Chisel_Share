// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VEnqueueEmptyFlushEdgecaseTester__Syms.h"


void VEnqueueEmptyFlushEdgecaseTester___024root__trace_chg_sub_0(VEnqueueEmptyFlushEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep);

void VEnqueueEmptyFlushEdgecaseTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnqueueEmptyFlushEdgecaseTester___024root__trace_chg_top_0\n"); );
    // Init
    VEnqueueEmptyFlushEdgecaseTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VEnqueueEmptyFlushEdgecaseTester___024root*>(voidSelf);
    VEnqueueEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VEnqueueEmptyFlushEdgecaseTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VEnqueueEmptyFlushEdgecaseTester___024root__trace_chg_sub_0(VEnqueueEmptyFlushEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VEnqueueEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnqueueEmptyFlushEdgecaseTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((1U & (~ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__full)))));
        tracep->chgBit(oldp+1,((0x14U > (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))));
        tracep->chgCData(oldp+2,(((0x13U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                   ? 0xdU : ((0x12U 
                                              == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                              ? 0xaU
                                              : ((0x11U 
                                                  == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                  ? 8U
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                   ? 1U
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                    ? 1U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                     ? 2U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                      ? 0xdU
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                       ? 0U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                        ? 0xeU
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                         ? 8U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                           ? 8U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                            ? 0xbU
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                             ? 2U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                              ? 7U
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                               ? 0xdU
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                                ? 9U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                                 ? 0xeU
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))
                                                                  ? 2U
                                                                  : 0xbU)))))))))))))))))))),4);
        tracep->chgBit(oldp+3,((1U & ((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT___q_io_deq_ready_T) 
                                      >> 5U))));
        tracep->chgBit(oldp+4,((1U & (~ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__empty)))));
        tracep->chgCData(oldp+5,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram
                                 [vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value]),4);
        tracep->chgCData(oldp+6,(((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full) 
                                    & (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ptr_match))
                                    ? 2U : 0U) | (1U 
                                                  & ((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
                                                     - (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value))))),2);
        tracep->chgBit(oldp+7,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_flush));
        tracep->chgBit(oldp+8,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0));
        tracep->chgBit(oldp+9,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1));
        tracep->chgBit(oldp+10,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2));
        tracep->chgBit(oldp+11,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3));
        tracep->chgBit(oldp+12,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4));
        tracep->chgBit(oldp+13,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5));
        tracep->chgBit(oldp+14,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6));
        tracep->chgBit(oldp+15,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7));
        tracep->chgBit(oldp+16,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8));
        tracep->chgBit(oldp+17,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9));
        tracep->chgBit(oldp+18,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10));
        tracep->chgBit(oldp+19,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11));
        tracep->chgBit(oldp+20,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12));
        tracep->chgBit(oldp+21,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13));
        tracep->chgBit(oldp+22,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14));
        tracep->chgBit(oldp+23,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15));
        tracep->chgCData(oldp+24,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value),5);
        tracep->chgBit(oldp+25,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__flushRegister));
        tracep->chgCData(oldp+26,((((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7) 
                                    << 7U) | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6) 
                                               << 6U) 
                                              | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0))))))))),8);
        tracep->chgBit(oldp+27,((0x14U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value))));
        tracep->chgCData(oldp+28,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1),5);
        tracep->chgCData(oldp+29,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2),5);
        tracep->chgBit(oldp+30,(((0U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1)) 
                                 & (0U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value)))));
        tracep->chgBit(oldp+31,((0x14U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_1))));
        tracep->chgBit(oldp+32,((0x14U == (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value_2))));
        tracep->chgCData(oldp+33,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram[0]),4);
        tracep->chgCData(oldp+34,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ram[1]),4);
        tracep->chgBit(oldp+35,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value));
        tracep->chgBit(oldp+36,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value));
        tracep->chgBit(oldp+37,(((~ (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__full)) 
                                 & (0x14U > (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__value)))));
        tracep->chgBit(oldp+38,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__maybe_full));
        tracep->chgBit(oldp+39,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__ptr_match));
        tracep->chgBit(oldp+40,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__empty));
        tracep->chgBit(oldp+41,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__full));
        tracep->chgBit(oldp+42,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__do_enq));
        tracep->chgBit(oldp+43,(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__do_deq));
        tracep->chgBit(oldp+44,((1U & ((IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
                                       - (IData)(vlSelf->EnqueueEmptyFlushEdgecaseTester__DOT__q__DOT__deq_ptr_value)))));
    }
    tracep->chgBit(oldp+45,(vlSelf->clock));
    tracep->chgBit(oldp+46,(vlSelf->reset));
}

void VEnqueueEmptyFlushEdgecaseTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEnqueueEmptyFlushEdgecaseTester___024root__trace_cleanup\n"); );
    // Init
    VEnqueueEmptyFlushEdgecaseTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VEnqueueEmptyFlushEdgecaseTester___024root*>(voidSelf);
    VEnqueueEmptyFlushEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
