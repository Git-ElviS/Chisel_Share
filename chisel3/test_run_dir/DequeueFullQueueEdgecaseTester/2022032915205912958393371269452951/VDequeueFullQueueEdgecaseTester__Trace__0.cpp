// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDequeueFullQueueEdgecaseTester__Syms.h"


void VDequeueFullQueueEdgecaseTester___024root__trace_chg_sub_0(VDequeueFullQueueEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep);

void VDequeueFullQueueEdgecaseTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDequeueFullQueueEdgecaseTester___024root__trace_chg_top_0\n"); );
    // Init
    VDequeueFullQueueEdgecaseTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDequeueFullQueueEdgecaseTester___024root*>(voidSelf);
    VDequeueFullQueueEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VDequeueFullQueueEdgecaseTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VDequeueFullQueueEdgecaseTester___024root__trace_chg_sub_0(VDequeueFullQueueEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDequeueFullQueueEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDequeueFullQueueEdgecaseTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((1U & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__full)))));
        tracep->chgBit(oldp+1,((1U & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister)))));
        tracep->chgBit(oldp+2,(((0x13U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                                | ((0x12U != (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                                   & ((0x11U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                                      | ((0x10U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                                         | ((0xfU != (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                                            & ((0xeU 
                                                != (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                                               & ((0xdU 
                                                   != (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                                                  & ((0xcU 
                                                      == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                                                     | ((0xbU 
                                                         != (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                                                        & ((0xaU 
                                                            != (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                                                           & ((9U 
                                                               == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                                                              | ((8U 
                                                                  == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                                                                 | ((7U 
                                                                     != (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                                                                    & ((6U 
                                                                        == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                                                                       | ((5U 
                                                                           != (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                                                                          & ((4U 
                                                                              != (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                                                                             & ((3U 
                                                                                == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)) 
                                                                                | (2U 
                                                                                != (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value)))))))))))))))))))));
        tracep->chgBit(oldp+3,((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt))));
        tracep->chgBit(oldp+4,((1U & (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                                         & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full)))))));
        tracep->chgBit(oldp+5,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram
                               [vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value]));
        tracep->chgCData(oldp+6,(((((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full) 
                                    & (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match))
                                    ? 4U : 0U) | (3U 
                                                  & ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
                                                     - (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value))))),3);
        tracep->chgCData(oldp+7,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value),5);
        tracep->chgCData(oldp+8,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt),5);
        tracep->chgCData(oldp+9,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt),3);
        tracep->chgBit(oldp+10,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister));
        tracep->chgBit(oldp+11,((0x14U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))));
        tracep->chgBit(oldp+12,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram[0]));
        tracep->chgBit(oldp+13,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram[1]));
        tracep->chgBit(oldp+14,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram[2]));
        tracep->chgBit(oldp+15,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram[3]));
        tracep->chgCData(oldp+16,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value),2);
        tracep->chgCData(oldp+17,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value),2);
        tracep->chgBit(oldp+18,((1U & ((~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__full)) 
                                       & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister))))));
        tracep->chgBit(oldp+19,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full));
        tracep->chgBit(oldp+20,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match));
        tracep->chgBit(oldp+21,(((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                                 & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full)))));
        tracep->chgBit(oldp+22,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__full));
        tracep->chgBit(oldp+23,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__do_enq));
        tracep->chgBit(oldp+24,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__do_deq));
        tracep->chgCData(oldp+25,((3U & ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value) 
                                         - (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value)))),2);
    }
    tracep->chgBit(oldp+26,(vlSelf->clock));
    tracep->chgBit(oldp+27,(vlSelf->reset));
}

void VDequeueFullQueueEdgecaseTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDequeueFullQueueEdgecaseTester___024root__trace_cleanup\n"); );
    // Init
    VDequeueFullQueueEdgecaseTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDequeueFullQueueEdgecaseTester___024root*>(voidSelf);
    VDequeueFullQueueEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
