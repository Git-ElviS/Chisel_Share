// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFillTester.h for the primary calling header

#ifndef VERILATED_VFILLTESTER___024ROOT_H_
#define VERILATED_VFILLTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VFillTester__Syms;
VL_MODULE(VFillTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VFillTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VFillTester___024root(const char* name);
    ~VFillTester___024root();
    VL_UNCOPYABLE(VFillTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VFillTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
