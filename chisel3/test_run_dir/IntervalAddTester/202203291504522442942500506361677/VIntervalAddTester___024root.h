// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIntervalAddTester.h for the primary calling header

#ifndef VERILATED_VINTERVALADDTESTER___024ROOT_H_
#define VERILATED_VINTERVALADDTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VIntervalAddTester__Syms;
VL_MODULE(VIntervalAddTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VIntervalAddTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VIntervalAddTester___024root(const char* name);
    ~VIntervalAddTester___024root();
    VL_UNCOPYABLE(VIntervalAddTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VIntervalAddTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
