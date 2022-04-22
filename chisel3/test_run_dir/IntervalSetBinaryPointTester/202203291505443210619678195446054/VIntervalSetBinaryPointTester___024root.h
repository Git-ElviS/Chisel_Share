// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIntervalSetBinaryPointTester.h for the primary calling header

#ifndef VERILATED_VINTERVALSETBINARYPOINTTESTER___024ROOT_H_
#define VERILATED_VINTERVALSETBINARYPOINTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VIntervalSetBinaryPointTester__Syms;
VL_MODULE(VIntervalSetBinaryPointTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VIntervalSetBinaryPointTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VIntervalSetBinaryPointTester___024root(const char* name);
    ~VIntervalSetBinaryPointTester___024root();
    VL_UNCOPYABLE(VIntervalSetBinaryPointTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VIntervalSetBinaryPointTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
