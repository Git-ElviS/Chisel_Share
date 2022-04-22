// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIntervalClipTester.h for the primary calling header

#ifndef VERILATED_VINTERVALCLIPTESTER___024ROOT_H_
#define VERILATED_VINTERVALCLIPTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VIntervalClipTester__Syms;
VL_MODULE(VIntervalClipTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VIntervalClipTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VIntervalClipTester___024root(const char* name);
    ~VIntervalClipTester___024root();
    VL_UNCOPYABLE(VIntervalClipTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VIntervalClipTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
