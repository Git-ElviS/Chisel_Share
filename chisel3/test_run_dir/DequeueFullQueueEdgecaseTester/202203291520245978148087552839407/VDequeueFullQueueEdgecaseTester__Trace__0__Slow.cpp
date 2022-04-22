// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDequeueFullQueueEdgecaseTester__Syms.h"


VL_ATTR_COLD void VDequeueFullQueueEdgecaseTester___024root__trace_init_sub__TOP__0(VDequeueFullQueueEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDequeueFullQueueEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDequeueFullQueueEdgecaseTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+30,"clock", false,-1);
    tracep->declBit(c+31,"reset", false,-1);
    tracep->pushNamePrefix("DequeueFullQueueEdgecaseTester ");
    tracep->declBit(c+30,"clock", false,-1);
    tracep->declBit(c+31,"reset", false,-1);
    tracep->declBit(c+30,"q_clock", false,-1);
    tracep->declBit(c+31,"q_reset", false,-1);
    tracep->declBit(c+1,"q_io_enq_ready", false,-1);
    tracep->declBit(c+2,"q_io_enq_valid", false,-1);
    tracep->declBus(c+3,"q_io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+4,"q_io_deq_ready", false,-1);
    tracep->declBit(c+5,"q_io_deq_valid", false,-1);
    tracep->declBus(c+6,"q_io_deq_bits", false,-1, 1,0);
    tracep->declBus(c+7,"q_io_count", false,-1, 2,0);
    tracep->declBit(c+4,"q_io_flush", false,-1);
    tracep->declBus(c+8,"value", false,-1, 4,0);
    tracep->declBus(c+9,"outCnt", false,-1, 4,0);
    tracep->declBus(c+10,"currQCnt", false,-1, 2,0);
    tracep->declBit(c+11,"flushRegister", false,-1);
    tracep->declBit(c+12,"wrap", false,-1);
    tracep->declBit(c+4,"flush", false,-1);
    tracep->pushNamePrefix("q ");
    tracep->declBit(c+30,"clock", false,-1);
    tracep->declBit(c+31,"reset", false,-1);
    tracep->declBit(c+1,"io_enq_ready", false,-1);
    tracep->declBit(c+2,"io_enq_valid", false,-1);
    tracep->declBus(c+3,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+4,"io_deq_ready", false,-1);
    tracep->declBit(c+5,"io_deq_valid", false,-1);
    tracep->declBus(c+6,"io_deq_bits", false,-1, 1,0);
    tracep->declBus(c+7,"io_count", false,-1, 2,0);
    tracep->declBit(c+4,"io_flush", false,-1);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+13+i*1,"ram", true,(i+0), 1,0);
    }
    tracep->declBit(c+32,"ram_io_deq_bits_MPORT_en", false,-1);
    tracep->declBus(c+18,"ram_io_deq_bits_MPORT_addr", false,-1, 2,0);
    tracep->declBus(c+6,"ram_io_deq_bits_MPORT_data", false,-1, 1,0);
    tracep->declBus(c+3,"ram_MPORT_data", false,-1, 1,0);
    tracep->declBus(c+19,"ram_MPORT_addr", false,-1, 2,0);
    tracep->declBit(c+32,"ram_MPORT_mask", false,-1);
    tracep->declBit(c+20,"ram_MPORT_en", false,-1);
    tracep->declBus(c+19,"enq_ptr_value", false,-1, 2,0);
    tracep->declBus(c+18,"deq_ptr_value", false,-1, 2,0);
    tracep->declBit(c+21,"maybe_full", false,-1);
    tracep->declBit(c+22,"ptr_match", false,-1);
    tracep->declBit(c+23,"empty", false,-1);
    tracep->declBit(c+24,"full", false,-1);
    tracep->declBit(c+25,"do_enq", false,-1);
    tracep->declBit(c+26,"do_deq", false,-1);
    tracep->declBit(c+27,"wrap", false,-1);
    tracep->declBit(c+28,"wrap_1", false,-1);
    tracep->declBus(c+29,"ptr_diff", false,-1, 2,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VDequeueFullQueueEdgecaseTester___024root__trace_init_top(VDequeueFullQueueEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDequeueFullQueueEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDequeueFullQueueEdgecaseTester___024root__trace_init_top\n"); );
    // Body
    VDequeueFullQueueEdgecaseTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VDequeueFullQueueEdgecaseTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VDequeueFullQueueEdgecaseTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VDequeueFullQueueEdgecaseTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VDequeueFullQueueEdgecaseTester___024root__trace_register(VDequeueFullQueueEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDequeueFullQueueEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDequeueFullQueueEdgecaseTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VDequeueFullQueueEdgecaseTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VDequeueFullQueueEdgecaseTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VDequeueFullQueueEdgecaseTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VDequeueFullQueueEdgecaseTester___024root__trace_full_sub_0(VDequeueFullQueueEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VDequeueFullQueueEdgecaseTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDequeueFullQueueEdgecaseTester___024root__trace_full_top_0\n"); );
    // Init
    VDequeueFullQueueEdgecaseTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDequeueFullQueueEdgecaseTester___024root*>(voidSelf);
    VDequeueFullQueueEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VDequeueFullQueueEdgecaseTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VDequeueFullQueueEdgecaseTester___024root__trace_full_sub_0(VDequeueFullQueueEdgecaseTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDequeueFullQueueEdgecaseTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDequeueFullQueueEdgecaseTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,((1U & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__full)))));
    tracep->fullBit(oldp+2,((1U & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister)))));
    tracep->fullCData(oldp+3,(((0x13U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                ? 2U : ((0x12U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                         ? 2U : ((0x11U 
                                                  == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                  ? 3U
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                   ? 3U
                                                   : 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                    ? 3U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                     ? 2U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                      ? 1U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                       ? 2U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                        ? 0U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                         ? 2U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                          ? 0U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                           ? 0U
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                            ? 3U
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                             ? 2U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                              ? 1U
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                               ? 0U
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                                ? 3U
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                                 ? 0U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))
                                                                  ? 2U
                                                                  : 0U)))))))))))))))))))),2);
    tracep->fullBit(oldp+4,((2U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt))));
    tracep->fullBit(oldp+5,((1U & (~ ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                                      & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full)))))));
    tracep->fullCData(oldp+6,(((4U >= (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value))
                                ? vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram
                               [vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value]
                                : 0U)),2);
    tracep->fullCData(oldp+7,((7U & ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match)
                                      ? ((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full)
                                          ? 5U : 0U)
                                      : (((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value) 
                                          > (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value))
                                          ? ((IData)(5U) 
                                             + (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_diff))
                                          : (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_diff))))),3);
    tracep->fullCData(oldp+8,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value),5);
    tracep->fullCData(oldp+9,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__outCnt),5);
    tracep->fullCData(oldp+10,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__currQCnt),3);
    tracep->fullBit(oldp+11,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister));
    tracep->fullBit(oldp+12,((0x14U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__value))));
    tracep->fullCData(oldp+13,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram[0]),2);
    tracep->fullCData(oldp+14,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram[1]),2);
    tracep->fullCData(oldp+15,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram[2]),2);
    tracep->fullCData(oldp+16,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram[3]),2);
    tracep->fullCData(oldp+17,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram[4]),2);
    tracep->fullCData(oldp+18,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value),3);
    tracep->fullCData(oldp+19,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value),3);
    tracep->fullBit(oldp+20,((1U & ((~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__full)) 
                                    & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__flushRegister))))));
    tracep->fullBit(oldp+21,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full));
    tracep->fullBit(oldp+22,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match));
    tracep->fullBit(oldp+23,(((IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match) 
                              & (~ (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full)))));
    tracep->fullBit(oldp+24,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__full));
    tracep->fullBit(oldp+25,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__do_enq));
    tracep->fullBit(oldp+26,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__do_deq));
    tracep->fullBit(oldp+27,((4U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value))));
    tracep->fullBit(oldp+28,((4U == (IData)(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value))));
    tracep->fullCData(oldp+29,(vlSelf->DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_diff),3);
    tracep->fullBit(oldp+30,(vlSelf->clock));
    tracep->fullBit(oldp+31,(vlSelf->reset));
    tracep->fullBit(oldp+32,(1U));
}
