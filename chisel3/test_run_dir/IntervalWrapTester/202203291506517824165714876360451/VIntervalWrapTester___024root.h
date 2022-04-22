// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIntervalWrapTester.h for the primary calling header

#ifndef VERILATED_VINTERVALWRAPTESTER___024ROOT_H_
#define VERILATED_VINTERVALWRAPTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VIntervalWrapTester__Syms;
VL_MODULE(VIntervalWrapTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VIntervalWrapTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VIntervalWrapTester___024root(const char* name);
    ~VIntervalWrapTester___024root();
    VL_UNCOPYABLE(VIntervalWrapTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VIntervalWrapTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
