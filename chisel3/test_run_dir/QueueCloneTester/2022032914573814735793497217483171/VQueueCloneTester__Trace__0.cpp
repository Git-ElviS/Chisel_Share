// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueCloneTester__Syms.h"


void VQueueCloneTester___024root__trace_chg_sub_0(VQueueCloneTester___024root* vlSelf, VerilatedVcd* tracep);

void VQueueCloneTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester___024root__trace_chg_top_0\n"); );
    // Init
    VQueueCloneTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueueCloneTester___024root*>(voidSelf);
    VQueueCloneTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VQueueCloneTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VQueueCloneTester___024root__trace_chg_sub_0(VQueueCloneTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueCloneTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((1U & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__full)))));
        tracep->chgBit(oldp+1,(vlSelf->QueueCloneTester__DOT__start));
        tracep->chgBit(oldp+2,(vlSelf->QueueCloneTester__DOT__accept));
        tracep->chgBit(oldp+3,((1U & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__empty)))));
        tracep->chgIData(oldp+4,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__ram
                                 [vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__deq_ptr_value]),32);
        tracep->chgBit(oldp+5,((1U & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__full)))));
        tracep->chgBit(oldp+6,((1U & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__empty)))));
        tracep->chgIData(oldp+7,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__ram
                                 [vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__deq_ptr_value]),32);
        tracep->chgIData(oldp+8,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__ram[0]),32);
        tracep->chgIData(oldp+9,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__ram[1]),32);
        tracep->chgBit(oldp+10,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__deq_ptr_value));
        tracep->chgBit(oldp+11,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__enq_ptr_value));
        tracep->chgBit(oldp+12,(((~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__full)) 
                                 & (IData)(vlSelf->QueueCloneTester__DOT__start))));
        tracep->chgBit(oldp+13,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__maybe_full));
        tracep->chgBit(oldp+14,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__ptr_match));
        tracep->chgBit(oldp+15,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__empty));
        tracep->chgBit(oldp+16,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__full));
        tracep->chgBit(oldp+17,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__do_enq));
        tracep->chgBit(oldp+18,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__do_deq));
        tracep->chgIData(oldp+19,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__ram[0]),32);
        tracep->chgIData(oldp+20,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__ram[1]),32);
        tracep->chgBit(oldp+21,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__deq_ptr_value));
        tracep->chgBit(oldp+22,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__enq_ptr_value));
        tracep->chgBit(oldp+23,((1U & ((~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__full)) 
                                       & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__empty))))));
        tracep->chgBit(oldp+24,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__maybe_full));
        tracep->chgBit(oldp+25,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__ptr_match));
        tracep->chgBit(oldp+26,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__empty));
        tracep->chgBit(oldp+27,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__full));
        tracep->chgBit(oldp+28,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__do_enq));
        tracep->chgBit(oldp+29,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__do_deq));
    }
    tracep->chgBit(oldp+30,(vlSelf->clock));
    tracep->chgBit(oldp+31,(vlSelf->reset));
}

void VQueueCloneTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester___024root__trace_cleanup\n"); );
    // Init
    VQueueCloneTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueueCloneTester___024root*>(voidSelf);
    VQueueCloneTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
