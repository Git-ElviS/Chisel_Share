// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VZeroEntryVecTester.h for the primary calling header

#ifndef VERILATED_VZEROENTRYVECTESTER___024ROOT_H_
#define VERILATED_VZEROENTRYVECTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VZeroEntryVecTester__Syms;
VL_MODULE(VZeroEntryVecTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VZeroEntryVecTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VZeroEntryVecTester___024root(const char* name);
    ~VZeroEntryVecTester___024root();
    VL_UNCOPYABLE(VZeroEntryVecTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VZeroEntryVecTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
