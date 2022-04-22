// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VQueueCloneTester.h for the primary calling header

#ifndef VERILATED_VQUEUECLONETESTER___024ROOT_H_
#define VERILATED_VQUEUECLONETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VQueueCloneTester__Syms;
VL_MODULE(VQueueCloneTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ QueueCloneTester__DOT___start_T;
    CData/*0:0*/ QueueCloneTester__DOT__start;
    CData/*0:0*/ QueueCloneTester__DOT__accept;
    CData/*0:0*/ QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__enq_ptr_value;
    CData/*0:0*/ QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__deq_ptr_value;
    CData/*0:0*/ QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__maybe_full;
    CData/*0:0*/ QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__ptr_match;
    CData/*0:0*/ QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__empty;
    CData/*0:0*/ QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__full;
    CData/*0:0*/ QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__do_enq;
    CData/*0:0*/ QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__do_deq;
    CData/*0:0*/ QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__enq_ptr_value;
    CData/*0:0*/ QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__deq_ptr_value;
    CData/*0:0*/ QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__maybe_full;
    CData/*0:0*/ QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__ptr_match;
    CData/*0:0*/ QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__empty;
    CData/*0:0*/ QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__full;
    CData/*0:0*/ QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__do_enq;
    CData/*0:0*/ QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__do_deq;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<IData/*31:0*/, 2> QueueCloneTester__DOT__dut__DOT__q1__DOT__impl__DOT__ram;
    VlUnpacked<IData/*31:0*/, 2> QueueCloneTester__DOT__dut__DOT__q2_io__DOT__impl__DOT__ram;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VQueueCloneTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VQueueCloneTester___024root(const char* name);
    ~VQueueCloneTester___024root();
    VL_UNCOPYABLE(VQueueCloneTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VQueueCloneTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
