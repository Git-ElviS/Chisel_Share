// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFullQueueFlushEdgecaseTester.h for the primary calling header

#ifndef VERILATED_VFULLQUEUEFLUSHEDGECASETESTER___024ROOT_H_
#define VERILATED_VFULLQUEUEFLUSHEDGECASETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VFullQueueFlushEdgecaseTester__Syms;
VL_MODULE(VFullQueueFlushEdgecaseTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*4:0*/ FullQueueFlushEdgecaseTester__DOT__value;
    CData/*4:0*/ FullQueueFlushEdgecaseTester__DOT__outCnt;
    CData/*2:0*/ FullQueueFlushEdgecaseTester__DOT__currQCnt;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__flushRegister;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT___T;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__wrap;
    CData/*4:0*/ FullQueueFlushEdgecaseTester__DOT___value_T_1;
    CData/*2:0*/ FullQueueFlushEdgecaseTester__DOT___GEN_22;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT___T_1;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__flush;
    CData/*2:0*/ FullQueueFlushEdgecaseTester__DOT___GEN_42;
    CData/*4:0*/ FullQueueFlushEdgecaseTester__DOT___outCnt_T_1;
    CData/*2:0*/ FullQueueFlushEdgecaseTester__DOT___currQCnt_T_3;
    CData/*4:0*/ FullQueueFlushEdgecaseTester__DOT___outCnt_T_3;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT___GEN_49;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT___GEN_52;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q__DOT__maybe_full;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q__DOT__do_enq;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q__DOT__do_deq;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_1;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_2;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_3;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_4;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_5;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_6;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_7;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_8;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_9;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_10;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_11;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_12;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_13;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_14;
    CData/*0:0*/ FullQueueFlushEdgecaseTester__DOT__q_io_deq_ready_prng__DOT__state_15;
    CData/*0:0*/ __Vclklast__TOP__clock;
    SData/*15:0*/ FullQueueFlushEdgecaseTester__DOT___q_io_deq_ready_T;
    VlUnpacked<CData/*2:0*/, 1> FullQueueFlushEdgecaseTester__DOT__q__DOT__ram;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VFullQueueFlushEdgecaseTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VFullQueueFlushEdgecaseTester___024root(const char* name);
    ~VFullQueueFlushEdgecaseTester___024root();
    VL_UNCOPYABLE(VFullQueueFlushEdgecaseTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VFullQueueFlushEdgecaseTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
