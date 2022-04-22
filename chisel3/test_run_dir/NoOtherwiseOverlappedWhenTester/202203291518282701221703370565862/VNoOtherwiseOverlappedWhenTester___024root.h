// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNoOtherwiseOverlappedWhenTester.h for the primary calling header

#ifndef VERILATED_VNOOTHERWISEOVERLAPPEDWHENTESTER___024ROOT_H_
#define VERILATED_VNOOTHERWISEOVERLAPPEDWHENTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VNoOtherwiseOverlappedWhenTester__Syms;
VL_MODULE(VNoOtherwiseOverlappedWhenTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ NoOtherwiseOverlappedWhenTester__DOT__value;
    CData/*1:0*/ NoOtherwiseOverlappedWhenTester__DOT___value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VNoOtherwiseOverlappedWhenTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNoOtherwiseOverlappedWhenTester___024root(const char* name);
    ~VNoOtherwiseOverlappedWhenTester___024root();
    VL_UNCOPYABLE(VNoOtherwiseOverlappedWhenTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VNoOtherwiseOverlappedWhenTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
