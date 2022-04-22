// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFixedPointMuxTester.h for the primary calling header

#ifndef VERILATED_VFIXEDPOINTMUXTESTER___024ROOT_H_
#define VERILATED_VFIXEDPOINTMUXTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VFixedPointMuxTester__Syms;
VL_MODULE(VFixedPointMuxTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VFixedPointMuxTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VFixedPointMuxTester___024root(const char* name);
    ~VFixedPointMuxTester___024root();
    VL_UNCOPYABLE(VFixedPointMuxTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VFixedPointMuxTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
