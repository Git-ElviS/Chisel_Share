// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRecordQueueTester.h for the primary calling header

#ifndef VERILATED_VRECORDQUEUETESTER___024ROOT_H_
#define VERILATED_VRECORDQUEUETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VRecordQueueTester__Syms;
VL_MODULE(VRecordQueueTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ RecordQueueTester__DOT__cycle;
    CData/*1:0*/ RecordQueueTester__DOT___wrap_value_T_1;
    CData/*1:0*/ RecordQueueTester__DOT__queue__DOT__enq_ptr_value;
    CData/*1:0*/ RecordQueueTester__DOT__queue__DOT__deq_ptr_value;
    CData/*0:0*/ RecordQueueTester__DOT__queue__DOT__maybe_full;
    CData/*0:0*/ RecordQueueTester__DOT__queue__DOT__ptr_match;
    CData/*0:0*/ RecordQueueTester__DOT__queue__DOT__empty;
    CData/*0:0*/ RecordQueueTester__DOT__queue__DOT__full;
    CData/*0:0*/ RecordQueueTester__DOT__queue__DOT__do_enq;
    CData/*1:0*/ RecordQueueTester__DOT__queue__DOT___value_T_1;
    CData/*1:0*/ RecordQueueTester__DOT__queue__DOT___value_T_3;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<IData/*31:0*/, 4> RecordQueueTester__DOT__queue__DOT__ram_bar;
    VlUnpacked<IData/*31:0*/, 4> RecordQueueTester__DOT__queue__DOT__ram_foo;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VRecordQueueTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VRecordQueueTester___024root(const char* name);
    ~VRecordQueueTester___024root();
    VL_UNCOPYABLE(VRecordQueueTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VRecordQueueTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
