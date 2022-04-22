// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSyncReadMemWriteCollisionTester.h for the primary calling header

#ifndef VERILATED_VSYNCREADMEMWRITECOLLISIONTESTER___024ROOT_H_
#define VERILATED_VSYNCREADMEMWRITECOLLISIONTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VSyncReadMemWriteCollisionTester__Syms;
VL_MODULE(VSyncReadMemWriteCollisionTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ SyncReadMemWriteCollisionTester__DOT__m0_rd0_en_pipe_0;
    CData/*0:0*/ SyncReadMemWriteCollisionTester__DOT__m0_rd0_addr_pipe_0;
    CData/*1:0*/ SyncReadMemWriteCollisionTester__DOT__m1_rd1_data_pipe_0;
    CData/*2:0*/ SyncReadMemWriteCollisionTester__DOT__cnt;
    CData/*0:0*/ SyncReadMemWriteCollisionTester__DOT__cnt_wrap_wrap;
    CData/*2:0*/ SyncReadMemWriteCollisionTester__DOT___cnt_wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*1:0*/, 2> SyncReadMemWriteCollisionTester__DOT__m0;
    VlUnpacked<CData/*1:0*/, 2> SyncReadMemWriteCollisionTester__DOT__m1;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VSyncReadMemWriteCollisionTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSyncReadMemWriteCollisionTester___024root(const char* name);
    ~VSyncReadMemWriteCollisionTester___024root();
    VL_UNCOPYABLE(VSyncReadMemWriteCollisionTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSyncReadMemWriteCollisionTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
