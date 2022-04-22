// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSyncReadMemBundleTester.h for the primary calling header

#ifndef VERILATED_VSYNCREADMEMBUNDLETESTER___024ROOT_H_
#define VERILATED_VSYNCREADMEMBUNDLETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VSyncReadMemBundleTester__Syms;
VL_MODULE(VSyncReadMemBundleTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ SyncReadMemBundleTester__DOT__mem_foo_rdata_en_pipe_0;
    CData/*0:0*/ SyncReadMemBundleTester__DOT__mem_foo_rdata_addr_pipe_0;
    CData/*2:0*/ SyncReadMemBundleTester__DOT__cnt;
    CData/*0:0*/ SyncReadMemBundleTester__DOT__cnt_wrap_wrap;
    CData/*2:0*/ SyncReadMemBundleTester__DOT___cnt_wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*1:0*/, 2> SyncReadMemBundleTester__DOT__mem_foo;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VSyncReadMemBundleTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSyncReadMemBundleTester___024root(const char* name);
    ~VSyncReadMemBundleTester___024root();
    VL_UNCOPYABLE(VSyncReadMemBundleTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSyncReadMemBundleTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
