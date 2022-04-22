// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAsTypeOfTruncationTester.h for the primary calling header

#ifndef VERILATED_VASTYPEOFTRUNCATIONTESTER___024ROOT_H_
#define VERILATED_VASTYPEOFTRUNCATIONTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VAsTypeOfTruncationTester__Syms;
VL_MODULE(VAsTypeOfTruncationTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VAsTypeOfTruncationTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VAsTypeOfTruncationTester___024root(const char* name);
    ~VAsTypeOfTruncationTester___024root();
    VL_UNCOPYABLE(VAsTypeOfTruncationTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VAsTypeOfTruncationTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
