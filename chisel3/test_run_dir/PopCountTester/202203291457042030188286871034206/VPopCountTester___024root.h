// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPopCountTester.h for the primary calling header

#ifndef VERILATED_VPOPCOUNTTESTER___024ROOT_H_
#define VERILATED_VPOPCOUNTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VPopCountTester__Syms;
VL_MODULE(VPopCountTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ PopCountTester__DOT__x;
    CData/*1:0*/ PopCountTester__DOT___x_T_1;
    CData/*0:0*/ PopCountTester__DOT__REG;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VPopCountTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VPopCountTester___024root(const char* name);
    ~VPopCountTester___024root();
    VL_UNCOPYABLE(VPopCountTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VPopCountTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
