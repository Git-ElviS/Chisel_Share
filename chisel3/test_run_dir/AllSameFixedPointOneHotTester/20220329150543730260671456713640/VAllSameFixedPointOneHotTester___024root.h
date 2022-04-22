// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAllSameFixedPointOneHotTester.h for the primary calling header

#ifndef VERILATED_VALLSAMEFIXEDPOINTONEHOTTESTER___024ROOT_H_
#define VERILATED_VALLSAMEFIXEDPOINTONEHOTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VAllSameFixedPointOneHotTester__Syms;
VL_MODULE(VAllSameFixedPointOneHotTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VAllSameFixedPointOneHotTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VAllSameFixedPointOneHotTester___024root(const char* name);
    ~VAllSameFixedPointOneHotTester___024root();
    VL_UNCOPYABLE(VAllSameFixedPointOneHotTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VAllSameFixedPointOneHotTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
