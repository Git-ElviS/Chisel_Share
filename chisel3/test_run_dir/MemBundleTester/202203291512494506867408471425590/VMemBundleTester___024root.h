// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMemBundleTester.h for the primary calling header

#ifndef VERILATED_VMEMBUNDLETESTER___024ROOT_H_
#define VERILATED_VMEMBUNDLETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMemBundleTester__Syms;
VL_MODULE(VMemBundleTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ MemBundleTester__DOT__cnt;
    CData/*0:0*/ MemBundleTester__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*1:0*/, 2> MemBundleTester__DOT__mem_foo;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VMemBundleTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMemBundleTester___024root(const char* name);
    ~VMemBundleTester___024root();
    VL_UNCOPYABLE(VMemBundleTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMemBundleTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
