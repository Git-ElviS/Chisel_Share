// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFixedPointOneHotTester.h for the primary calling header

#ifndef VERILATED_VFIXEDPOINTONEHOTTESTER___024ROOT_H_
#define VERILATED_VFIXEDPOINTONEHOTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VFixedPointOneHotTester__Syms;
VL_MODULE(VFixedPointOneHotTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VFixedPointOneHotTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VFixedPointOneHotTester___024root(const char* name);
    ~VFixedPointOneHotTester___024root();
    VL_UNCOPYABLE(VFixedPointOneHotTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VFixedPointOneHotTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
