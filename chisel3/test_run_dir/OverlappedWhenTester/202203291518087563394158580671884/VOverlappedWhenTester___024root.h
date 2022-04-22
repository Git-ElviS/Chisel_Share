// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VOverlappedWhenTester.h for the primary calling header

#ifndef VERILATED_VOVERLAPPEDWHENTESTER___024ROOT_H_
#define VERILATED_VOVERLAPPEDWHENTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VOverlappedWhenTester__Syms;
VL_MODULE(VOverlappedWhenTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ OverlappedWhenTester__DOT__value;
    CData/*1:0*/ OverlappedWhenTester__DOT___value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VOverlappedWhenTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VOverlappedWhenTester___024root(const char* name);
    ~VOverlappedWhenTester___024root();
    VL_UNCOPYABLE(VOverlappedWhenTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VOverlappedWhenTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
