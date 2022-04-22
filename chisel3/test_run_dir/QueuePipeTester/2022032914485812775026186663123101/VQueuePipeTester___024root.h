// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VQueuePipeTester.h for the primary calling header

#ifndef VERILATED_VQUEUEPIPETESTER___024ROOT_H_
#define VERILATED_VQUEUEPIPETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VQueuePipeTester__Syms;
VL_MODULE(VQueuePipeTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ QueuePipeTester__DOT__q_io_enq_ready;
    CData/*4:0*/ QueuePipeTester__DOT__value;
    CData/*4:0*/ QueuePipeTester__DOT__value_1;
    CData/*0:0*/ QueuePipeTester__DOT___T_7;
    CData/*0:0*/ QueuePipeTester__DOT__wrap;
    CData/*4:0*/ QueuePipeTester__DOT___value_T_1;
    CData/*0:0*/ QueuePipeTester__DOT__wrap_1;
    CData/*4:0*/ QueuePipeTester__DOT___value_T_3;
    CData/*1:0*/ QueuePipeTester__DOT__q__DOT__enq_ptr_value;
    CData/*1:0*/ QueuePipeTester__DOT__q__DOT__deq_ptr_value;
    CData/*0:0*/ QueuePipeTester__DOT__q__DOT__maybe_full;
    CData/*0:0*/ QueuePipeTester__DOT__q__DOT__ptr_match;
    CData/*0:0*/ QueuePipeTester__DOT__q__DOT__empty;
    CData/*0:0*/ QueuePipeTester__DOT__q__DOT__do_enq;
    CData/*0:0*/ QueuePipeTester__DOT__q__DOT__do_deq;
    CData/*1:0*/ QueuePipeTester__DOT__q__DOT___value_T_1;
    CData/*1:0*/ QueuePipeTester__DOT__q__DOT___value_T_3;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_0;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_1;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_2;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_3;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_4;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_5;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_6;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_7;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_8;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_9;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_10;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_11;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_12;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_13;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_14;
    CData/*0:0*/ QueuePipeTester__DOT__q_io_deq_ready_prng__DOT__state_15;
    CData/*0:0*/ __Vclklast__TOP__clock;
    SData/*15:0*/ QueuePipeTester__DOT___q_io_deq_ready_T;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VQueuePipeTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VQueuePipeTester___024root(const char* name);
    ~VQueuePipeTester___024root();
    VL_UNCOPYABLE(VQueuePipeTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VQueuePipeTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
