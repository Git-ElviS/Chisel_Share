// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQueueCloneTester__Syms.h"


VL_ATTR_COLD void VQueueCloneTester___024root__trace_init_sub__TOP__0(VQueueCloneTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueCloneTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+31,"clock", false,-1);
    tracep->declBit(c+32,"reset", false,-1);
    tracep->pushNamePrefix("QueueCloneTester ");
    tracep->declBit(c+31,"clock", false,-1);
    tracep->declBit(c+32,"reset", false,-1);
    tracep->declBit(c+31,"dut_clock", false,-1);
    tracep->declBit(c+32,"dut_reset", false,-1);
    tracep->declBit(c+1,"dut_io_enq_ready", false,-1);
    tracep->declBit(c+2,"dut_io_enq_valid", false,-1);
    tracep->declBit(c+3,"dut_io_deq_ready", false,-1);
    tracep->declBit(c+4,"dut_io_deq_valid", false,-1);
    tracep->declBus(c+5,"dut_io_deq_bits", false,-1, 31,0);
    tracep->declBit(c+2,"start", false,-1);
    tracep->declBit(c+3,"accept", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+31,"clock", false,-1);
    tracep->declBit(c+32,"reset", false,-1);
    tracep->declBit(c+1,"io_enq_ready", false,-1);
    tracep->declBit(c+2,"io_enq_valid", false,-1);
    tracep->declBit(c+3,"io_deq_ready", false,-1);
    tracep->declBit(c+4,"io_deq_valid", false,-1);
    tracep->declBus(c+5,"io_deq_bits", false,-1, 31,0);
    tracep->declBit(c+31,"q1_clk", false,-1);
    tracep->declBit(c+32,"q1_rst", false,-1);
    tracep->declBit(c+1,"q1_enq_ready", false,-1);
    tracep->declBit(c+2,"q1_enq_valid", false,-1);
    tracep->declBus(c+33,"q1_enq_bits", false,-1, 31,0);
    tracep->declBit(c+6,"q1_deq_ready", false,-1);
    tracep->declBit(c+7,"q1_deq_valid", false,-1);
    tracep->declBus(c+8,"q1_deq_bits", false,-1, 31,0);
    tracep->declBit(c+31,"q2_io_clk", false,-1);
    tracep->declBit(c+32,"q2_io_rst", false,-1);
    tracep->declBit(c+6,"q2_io_enq_ready", false,-1);
    tracep->declBit(c+7,"q2_io_enq_valid", false,-1);
    tracep->declBus(c+8,"q2_io_enq_bits", false,-1, 31,0);
    tracep->declBit(c+3,"q2_io_deq_ready", false,-1);
    tracep->declBit(c+4,"q2_io_deq_valid", false,-1);
    tracep->declBus(c+5,"q2_io_deq_bits", false,-1, 31,0);
    tracep->pushNamePrefix("q1 ");
    tracep->declBit(c+31,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBit(c+1,"enq_ready", false,-1);
    tracep->declBit(c+2,"enq_valid", false,-1);
    tracep->declBus(c+33,"enq_bits", false,-1, 31,0);
    tracep->declBit(c+6,"deq_ready", false,-1);
    tracep->declBit(c+7,"deq_valid", false,-1);
    tracep->declBus(c+8,"deq_bits", false,-1, 31,0);
    tracep->declBit(c+31,"impl_clock", false,-1);
    tracep->declBit(c+32,"impl_reset", false,-1);
    tracep->declBit(c+1,"impl_io_enq_ready", false,-1);
    tracep->declBit(c+2,"impl_io_enq_valid", false,-1);
    tracep->declBus(c+33,"impl_io_enq_bits", false,-1, 31,0);
    tracep->declBit(c+6,"impl_io_deq_ready", false,-1);
    tracep->declBit(c+7,"impl_io_deq_valid", false,-1);
    tracep->declBus(c+8,"impl_io_deq_bits", false,-1, 31,0);
    tracep->pushNamePrefix("impl ");
    tracep->declBit(c+31,"clock", false,-1);
    tracep->declBit(c+32,"reset", false,-1);
    tracep->declBit(c+1,"io_enq_ready", false,-1);
    tracep->declBit(c+2,"io_enq_valid", false,-1);
    tracep->declBus(c+33,"io_enq_bits", false,-1, 31,0);
    tracep->declBit(c+6,"io_deq_ready", false,-1);
    tracep->declBit(c+7,"io_deq_valid", false,-1);
    tracep->declBus(c+8,"io_deq_bits", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+9+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBit(c+34,"ram_io_deq_bits_MPORT_en", false,-1);
    tracep->declBit(c+11,"ram_io_deq_bits_MPORT_addr", false,-1);
    tracep->declBus(c+8,"ram_io_deq_bits_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+33,"ram_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+12,"ram_MPORT_addr", false,-1);
    tracep->declBit(c+34,"ram_MPORT_mask", false,-1);
    tracep->declBit(c+13,"ram_MPORT_en", false,-1);
    tracep->declBit(c+12,"enq_ptr_value", false,-1);
    tracep->declBit(c+11,"deq_ptr_value", false,-1);
    tracep->declBit(c+14,"maybe_full", false,-1);
    tracep->declBit(c+15,"ptr_match", false,-1);
    tracep->declBit(c+16,"empty", false,-1);
    tracep->declBit(c+17,"full", false,-1);
    tracep->declBit(c+18,"do_enq", false,-1);
    tracep->declBit(c+19,"do_deq", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("q2_io ");
    tracep->declBit(c+31,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBit(c+6,"enq_ready", false,-1);
    tracep->declBit(c+7,"enq_valid", false,-1);
    tracep->declBus(c+8,"enq_bits", false,-1, 31,0);
    tracep->declBit(c+3,"deq_ready", false,-1);
    tracep->declBit(c+4,"deq_valid", false,-1);
    tracep->declBus(c+5,"deq_bits", false,-1, 31,0);
    tracep->declBit(c+31,"impl_clock", false,-1);
    tracep->declBit(c+32,"impl_reset", false,-1);
    tracep->declBit(c+6,"impl_io_enq_ready", false,-1);
    tracep->declBit(c+7,"impl_io_enq_valid", false,-1);
    tracep->declBus(c+8,"impl_io_enq_bits", false,-1, 31,0);
    tracep->declBit(c+3,"impl_io_deq_ready", false,-1);
    tracep->declBit(c+4,"impl_io_deq_valid", false,-1);
    tracep->declBus(c+5,"impl_io_deq_bits", false,-1, 31,0);
    tracep->pushNamePrefix("impl ");
    tracep->declBit(c+31,"clock", false,-1);
    tracep->declBit(c+32,"reset", false,-1);
    tracep->declBit(c+6,"io_enq_ready", false,-1);
    tracep->declBit(c+7,"io_enq_valid", false,-1);
    tracep->declBus(c+8,"io_enq_bits", false,-1, 31,0);
    tracep->declBit(c+3,"io_deq_ready", false,-1);
    tracep->declBit(c+4,"io_deq_valid", false,-1);
    tracep->declBus(c+5,"io_deq_bits", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+20+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBit(c+34,"ram_io_deq_bits_MPORT_en", false,-1);
    tracep->declBit(c+22,"ram_io_deq_bits_MPORT_addr", false,-1);
    tracep->declBus(c+5,"ram_io_deq_bits_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+8,"ram_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+23,"ram_MPORT_addr", false,-1);
    tracep->declBit(c+34,"ram_MPORT_mask", false,-1);
    tracep->declBit(c+24,"ram_MPORT_en", false,-1);
    tracep->declBit(c+23,"enq_ptr_value", false,-1);
    tracep->declBit(c+22,"deq_ptr_value", false,-1);
    tracep->declBit(c+25,"maybe_full", false,-1);
    tracep->declBit(c+26,"ptr_match", false,-1);
    tracep->declBit(c+27,"empty", false,-1);
    tracep->declBit(c+28,"full", false,-1);
    tracep->declBit(c+29,"do_enq", false,-1);
    tracep->declBit(c+30,"do_deq", false,-1);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void VQueueCloneTester___024root__trace_init_top(VQueueCloneTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueCloneTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester___024root__trace_init_top\n"); );
    // Body
    VQueueCloneTester___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VQueueCloneTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VQueueCloneTester___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VQueueCloneTester___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VQueueCloneTester___024root__trace_register(VQueueCloneTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueCloneTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VQueueCloneTester___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VQueueCloneTester___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VQueueCloneTester___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VQueueCloneTester___024root__trace_full_sub_0(VQueueCloneTester___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VQueueCloneTester___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester___024root__trace_full_top_0\n"); );
    // Init
    VQueueCloneTester___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQueueCloneTester___024root*>(voidSelf);
    VQueueCloneTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VQueueCloneTester___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VQueueCloneTester___024root__trace_full_sub_0(VQueueCloneTester___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VQueueCloneTester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQueueCloneTester___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,((1U & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__full)))));
    tracep->fullBit(oldp+2,(vlSelf->QueueCloneTester__DOT__start));
    tracep->fullBit(oldp+3,(vlSelf->QueueCloneTester__DOT__accept));
    tracep->fullBit(oldp+4,((1U & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__empty)))));
    tracep->fullIData(oldp+5,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__ram
                              [vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__deq_ptr_value]),32);
    tracep->fullBit(oldp+6,((1U & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__full)))));
    tracep->fullBit(oldp+7,((1U & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__empty)))));
    tracep->fullIData(oldp+8,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__ram
                              [vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__deq_ptr_value]),32);
    tracep->fullIData(oldp+9,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__ram[0]),32);
    tracep->fullIData(oldp+10,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__ram[1]),32);
    tracep->fullBit(oldp+11,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__deq_ptr_value));
    tracep->fullBit(oldp+12,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__enq_ptr_value));
    tracep->fullBit(oldp+13,(((~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__full)) 
                              & (IData)(vlSelf->QueueCloneTester__DOT__start))));
    tracep->fullBit(oldp+14,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__maybe_full));
    tracep->fullBit(oldp+15,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__ptr_match));
    tracep->fullBit(oldp+16,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__empty));
    tracep->fullBit(oldp+17,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__full));
    tracep->fullBit(oldp+18,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__do_enq));
    tracep->fullBit(oldp+19,(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__do_deq));
    tracep->fullIData(oldp+20,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__ram[0]),32);
    tracep->fullIData(oldp+21,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__ram[1]),32);
    tracep->fullBit(oldp+22,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__deq_ptr_value));
    tracep->fullBit(oldp+23,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__enq_ptr_value));
    tracep->fullBit(oldp+24,((1U & ((~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__full)) 
                                    & (~ (IData)(vlSelf->QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__empty))))));
    tracep->fullBit(oldp+25,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__maybe_full));
    tracep->fullBit(oldp+26,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__ptr_match));
    tracep->fullBit(oldp+27,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__empty));
    tracep->fullBit(oldp+28,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__full));
    tracep->fullBit(oldp+29,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__do_enq));
    tracep->fullBit(oldp+30,(vlSelf->QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__do_deq));
    tracep->fullBit(oldp+31,(vlSelf->clock));
    tracep->fullBit(oldp+32,(vlSelf->reset));
    tracep->fullIData(oldp+33,(0x63U),32);
    tracep->fullBit(oldp+34,(1U));
}
