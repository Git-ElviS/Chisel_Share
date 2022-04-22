// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRecordQueueTester__Syms.h"


void VRecordQueueTester___024root__trace_chg_sub_0(VRecordQueueTester___024root* vlSelf, VerilatedVcd* tracep);

void VRecordQueueTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester___024root__trace_chg_top_0\n"); );
    // Init
    VRecordQueueTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRecordQueueTester___024root*>(voidSelf);
    VRecordQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRecordQueueTester___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VRecordQueueTester___024root__trace_chg_sub_0(VRecordQueueTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRecordQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((1U & (~ (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__full)))));
        tracep->chgBit(oldp+1,((0U == (IData)(vlSelf->RecordQueueTester__DOT__cycle))));
        tracep->chgBit(oldp+2,((1U & (~ (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__empty)))));
        tracep->chgIData(oldp+3,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_bar
                                 [vlSelf->RecordQueueTester__DOT__queue__DOT__deq_ptr_value]),32);
        tracep->chgIData(oldp+4,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_foo
                                 [vlSelf->RecordQueueTester__DOT__queue__DOT__deq_ptr_value]),32);
        tracep->chgCData(oldp+5,(vlSelf->RecordQueueTester__DOT__cycle),2);
        tracep->chgBit(oldp+6,((3U == (IData)(vlSelf->RecordQueueTester__DOT__cycle))));
        tracep->chgIData(oldp+7,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_bar[0]),32);
        tracep->chgIData(oldp+8,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_bar[1]),32);
        tracep->chgIData(oldp+9,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_bar[2]),32);
        tracep->chgIData(oldp+10,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_bar[3]),32);
        tracep->chgCData(oldp+11,(vlSelf->RecordQueueTester__DOT__queue__DOT__deq_ptr_value),2);
        tracep->chgCData(oldp+12,(vlSelf->RecordQueueTester__DOT__queue__DOT__enq_ptr_value),2);
        tracep->chgBit(oldp+13,(((~ (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__full)) 
                                 & (0U == (IData)(vlSelf->RecordQueueTester__DOT__cycle)))));
        tracep->chgIData(oldp+14,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_foo[0]),32);
        tracep->chgIData(oldp+15,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_foo[1]),32);
        tracep->chgIData(oldp+16,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_foo[2]),32);
        tracep->chgIData(oldp+17,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_foo[3]),32);
        tracep->chgBit(oldp+18,(vlSelf->RecordQueueTester__DOT__queue__DOT__maybe_full));
        tracep->chgBit(oldp+19,(vlSelf->RecordQueueTester__DOT__queue__DOT__ptr_match));
        tracep->chgBit(oldp+20,(vlSelf->RecordQueueTester__DOT__queue__DOT__empty));
        tracep->chgBit(oldp+21,(vlSelf->RecordQueueTester__DOT__queue__DOT__full));
        tracep->chgBit(oldp+22,(vlSelf->RecordQueueTester__DOT__queue__DOT__do_enq));
    }
    tracep->chgBit(oldp+23,(vlSelf->clock));
    tracep->chgBit(oldp+24,(vlSelf->reset));
}

void VRecordQueueTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester___024root__trace_cleanup\n"); );
    // Init
    VRecordQueueTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRecordQueueTester___024root*>(voidSelf);
    VRecordQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
