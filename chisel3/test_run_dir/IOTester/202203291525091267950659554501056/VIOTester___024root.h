// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIOTester.h for the primary calling header

#ifndef VERILATED_VIOTESTER___024ROOT_H_
#define VERILATED_VIOTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VIOTester__Syms;
VL_MODULE(VIOTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VIOTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VIOTester___024root(const char* name);
    ~VIOTester___024root();
    VL_UNCOPYABLE(VIOTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VIOTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
