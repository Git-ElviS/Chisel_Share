// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimpleOneHotTester.h for the primary calling header

#ifndef VERILATED_VSIMPLEONEHOTTESTER___024ROOT_H_
#define VERILATED_VSIMPLEONEHOTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VSimpleOneHotTester__Syms;
VL_MODULE(VSimpleOneHotTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VSimpleOneHotTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSimpleOneHotTester___024root(const char* name);
    ~VSimpleOneHotTester___024root();
    VL_UNCOPYABLE(VSimpleOneHotTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSimpleOneHotTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
