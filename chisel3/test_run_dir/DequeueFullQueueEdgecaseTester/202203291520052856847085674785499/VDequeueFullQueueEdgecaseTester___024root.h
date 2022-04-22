// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDequeueFullQueueEdgecaseTester.h for the primary calling header

#ifndef VERILATED_VDEQUEUEFULLQUEUEEDGECASETESTER___024ROOT_H_
#define VERILATED_VDEQUEUEFULLQUEUEEDGECASETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VDequeueFullQueueEdgecaseTester__Syms;
VL_MODULE(VDequeueFullQueueEdgecaseTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*4:0*/ DequeueFullQueueEdgecaseTester__DOT__value;
    CData/*4:0*/ DequeueFullQueueEdgecaseTester__DOT__outCnt;
    CData/*2:0*/ DequeueFullQueueEdgecaseTester__DOT__currQCnt;
    CData/*0:0*/ DequeueFullQueueEdgecaseTester__DOT__flushRegister;
    CData/*0:0*/ DequeueFullQueueEdgecaseTester__DOT___T;
    CData/*0:0*/ DequeueFullQueueEdgecaseTester__DOT__wrap;
    CData/*4:0*/ DequeueFullQueueEdgecaseTester__DOT___value_T_1;
    CData/*2:0*/ DequeueFullQueueEdgecaseTester__DOT___currQCnt_T_1;
    CData/*0:0*/ DequeueFullQueueEdgecaseTester__DOT__flush;
    CData/*4:0*/ DequeueFullQueueEdgecaseTester__DOT___outCnt_T_1;
    CData/*1:0*/ DequeueFullQueueEdgecaseTester__DOT__q__DOT__enq_ptr_value;
    CData/*1:0*/ DequeueFullQueueEdgecaseTester__DOT__q__DOT__deq_ptr_value;
    CData/*0:0*/ DequeueFullQueueEdgecaseTester__DOT__q__DOT__maybe_full;
    CData/*0:0*/ DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_match;
    CData/*0:0*/ DequeueFullQueueEdgecaseTester__DOT__q__DOT__full;
    CData/*0:0*/ DequeueFullQueueEdgecaseTester__DOT__q__DOT__do_enq;
    CData/*0:0*/ DequeueFullQueueEdgecaseTester__DOT__q__DOT__do_deq;
    CData/*0:0*/ DequeueFullQueueEdgecaseTester__DOT__q__DOT__wrap;
    CData/*1:0*/ DequeueFullQueueEdgecaseTester__DOT__q__DOT___value_T_1;
    CData/*0:0*/ DequeueFullQueueEdgecaseTester__DOT__q__DOT__wrap_1;
    CData/*1:0*/ DequeueFullQueueEdgecaseTester__DOT__q__DOT___value_T_3;
    CData/*1:0*/ DequeueFullQueueEdgecaseTester__DOT__q__DOT__ptr_diff;
    CData/*2:0*/ DequeueFullQueueEdgecaseTester__DOT__q__DOT____Vlvbound_he64e4fbc__0;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*2:0*/, 3> DequeueFullQueueEdgecaseTester__DOT__q__DOT__ram;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VDequeueFullQueueEdgecaseTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VDequeueFullQueueEdgecaseTester___024root(const char* name);
    ~VDequeueFullQueueEdgecaseTester___024root();
    VL_UNCOPYABLE(VDequeueFullQueueEdgecaseTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VDequeueFullQueueEdgecaseTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
