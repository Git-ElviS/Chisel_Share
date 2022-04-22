// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRecordQueueTester__Syms.h"


VL_ATTR_COLD void VRecordQueueTester___024root__trace_init_sub__TOP__0(VRecordQueueTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRecordQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+24,"clock", false,-1);
    tracep->declBit(c+25,"reset", false,-1);
    tracep->pushNamePrefix("RecordQueueTester ");
    tracep->declBit(c+24,"clock", false,-1);
    tracep->declBit(c+25,"reset", false,-1);
    tracep->declBit(c+24,"queue_clock", false,-1);
    tracep->declBit(c+25,"queue_reset", false,-1);
    tracep->declBit(c+1,"queue_io_enq_ready", false,-1);
    tracep->declBit(c+2,"queue_io_enq_valid", false,-1);
    tracep->declBit(c+3,"queue_io_deq_valid", false,-1);
    tracep->declBus(c+4,"queue_io_deq_bits_bar", false,-1, 31,0);
    tracep->declBus(c+5,"queue_io_deq_bits_foo", false,-1, 31,0);
    tracep->declBus(c+6,"cycle", false,-1, 1,0);
    tracep->declBit(c+7,"wrap_wrap", false,-1);
    tracep->pushNamePrefix("queue ");
    tracep->declBit(c+24,"clock", false,-1);
    tracep->declBit(c+25,"reset", false,-1);
    tracep->declBit(c+1,"io_enq_ready", false,-1);
    tracep->declBit(c+2,"io_enq_valid", false,-1);
    tracep->declBit(c+3,"io_deq_valid", false,-1);
    tracep->declBus(c+4,"io_deq_bits_bar", false,-1, 31,0);
    tracep->declBus(c+5,"io_deq_bits_foo", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+8+i*1,"ram_bar", true,(i+0), 31,0);
    }
    tracep->declBit(c+26,"ram_bar_io_deq_bits_MPORT_en", false,-1);
    tracep->declBus(c+12,"ram_bar_io_deq_bits_MPORT_addr", false,-1, 1,0);
    tracep->declBus(c+4,"ram_bar_io_deq_bits_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+27,"ram_bar_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+13,"ram_bar_MPORT_addr", false,-1, 1,0);
    tracep->declBit(c+26,"ram_bar_MPORT_mask", false,-1);
    tracep->declBit(c+14,"ram_bar_MPORT_en", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+15+i*1,"ram_foo", true,(i+0), 31,0);
    }
    tracep->declBit(c+26,"ram_foo_io_deq_bits_MPORT_en", false,-1);
    tracep->declBus(c+12,"ram_foo_io_deq_bits_MPORT_addr", false,-1, 1,0);
    tracep->declBus(c+5,"ram_foo_io_deq_bits_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+28,"ram_foo_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+13,"ram_foo_MPORT_addr", false,-1, 1,0);
    tracep->declBit(c+26,"ram_foo_MPORT_mask", false,-1);
    tracep->declBit(c+14,"ram_foo_MPORT_en", false,-1);
    tracep->declBus(c+13,"enq_ptr_value", false,-1, 1,0);
    tracep->declBus(c+12,"deq_ptr_value", false,-1, 1,0);
    tracep->declBit(c+19,"maybe_full", false,-1);
    tracep->declBit(c+20,"ptr_match", false,-1);
    tracep->declBit(c+21,"empty", false,-1);
    tracep->declBit(c+22,"full", false,-1);
    tracep->declBit(c+23,"do_enq", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VRecordQueueTester___024root__trace_init_top(VRecordQueueTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRecordQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester___024root__trace_init_top\n"); );
    // Body
    VRecordQueueTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRecordQueueTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VRecordQueueTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VRecordQueueTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRecordQueueTester___024root__trace_register(VRecordQueueTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRecordQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VRecordQueueTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VRecordQueueTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VRecordQueueTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRecordQueueTester___024root__trace_full_sub_0(VRecordQueueTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRecordQueueTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester___024root__trace_full_top_0\n"); );
    // Init
    VRecordQueueTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRecordQueueTester___024root*>(voidSelf);
    VRecordQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRecordQueueTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VRecordQueueTester___024root__trace_full_sub_0(VRecordQueueTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRecordQueueTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRecordQueueTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,((1U & (~ (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__full)))));
    tracep->fullBit(oldp+2,((0U == (IData)(vlSelf->RecordQueueTester__DOT__cycle))));
    tracep->fullBit(oldp+3,((1U & (~ (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__empty)))));
    tracep->fullIData(oldp+4,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_bar
                              [vlSelf->RecordQueueTester__DOT__queue__DOT__deq_ptr_value]),32);
    tracep->fullIData(oldp+5,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_foo
                              [vlSelf->RecordQueueTester__DOT__queue__DOT__deq_ptr_value]),32);
    tracep->fullCData(oldp+6,(vlSelf->RecordQueueTester__DOT__cycle),2);
    tracep->fullBit(oldp+7,((3U == (IData)(vlSelf->RecordQueueTester__DOT__cycle))));
    tracep->fullIData(oldp+8,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_bar[0]),32);
    tracep->fullIData(oldp+9,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_bar[1]),32);
    tracep->fullIData(oldp+10,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_bar[2]),32);
    tracep->fullIData(oldp+11,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_bar[3]),32);
    tracep->fullCData(oldp+12,(vlSelf->RecordQueueTester__DOT__queue__DOT__deq_ptr_value),2);
    tracep->fullCData(oldp+13,(vlSelf->RecordQueueTester__DOT__queue__DOT__enq_ptr_value),2);
    tracep->fullBit(oldp+14,(((~ (IData)(vlSelf->RecordQueueTester__DOT__queue__DOT__full)) 
                              & (0U == (IData)(vlSelf->RecordQueueTester__DOT__cycle)))));
    tracep->fullIData(oldp+15,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_foo[0]),32);
    tracep->fullIData(oldp+16,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_foo[1]),32);
    tracep->fullIData(oldp+17,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_foo[2]),32);
    tracep->fullIData(oldp+18,(vlSelf->RecordQueueTester__DOT__queue__DOT__ram_foo[3]),32);
    tracep->fullBit(oldp+19,(vlSelf->RecordQueueTester__DOT__queue__DOT__maybe_full));
    tracep->fullBit(oldp+20,(vlSelf->RecordQueueTester__DOT__queue__DOT__ptr_match));
    tracep->fullBit(oldp+21,(vlSelf->RecordQueueTester__DOT__queue__DOT__empty));
    tracep->fullBit(oldp+22,(vlSelf->RecordQueueTester__DOT__queue__DOT__full));
    tracep->fullBit(oldp+23,(vlSelf->RecordQueueTester__DOT__queue__DOT__do_enq));
    tracep->fullBit(oldp+24,(vlSelf->clock));
    tracep->fullBit(oldp+25,(vlSelf->reset));
    tracep->fullBit(oldp+26,(1U));
    tracep->fullIData(oldp+27,(0x162eU),32);
    tracep->fullIData(oldp+28,(0x4d2U),32);
}
