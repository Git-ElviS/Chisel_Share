// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VWhenTester.h for the primary calling header

#ifndef VERILATED_VWHENTESTER___024ROOT_H_
#define VERILATED_VWHENTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VWhenTester__Syms;
VL_MODULE(VWhenTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ WhenTester__DOT__value;
    CData/*1:0*/ WhenTester__DOT___value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VWhenTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VWhenTester___024root(const char* name);
    ~VWhenTester___024root();
    VL_UNCOPYABLE(VWhenTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VWhenTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
