// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNextTester.h for the primary calling header

#ifndef VERILATED_VNEXTTESTER___024ROOT_H_
#define VERILATED_VNEXTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VNextTester__Syms;
VL_MODULE(VNextTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VNextTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNextTester___024root(const char* name);
    ~VNextTester___024root();
    VL_UNCOPYABLE(VNextTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VNextTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
