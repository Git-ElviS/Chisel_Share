// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VWidthTester.h for the primary calling header

#ifndef VERILATED_VWIDTHTESTER___024ROOT_H_
#define VERILATED_VWIDTHTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VWidthTester__Syms;
VL_MODULE(VWidthTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VWidthTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VWidthTester___024root(const char* name);
    ~VWidthTester___024root();
    VL_UNCOPYABLE(VWidthTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VWidthTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
