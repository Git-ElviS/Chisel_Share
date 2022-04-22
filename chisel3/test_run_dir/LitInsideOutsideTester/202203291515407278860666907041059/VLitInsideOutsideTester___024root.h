// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VLitInsideOutsideTester.h for the primary calling header

#ifndef VERILATED_VLITINSIDEOUTSIDETESTER___024ROOT_H_
#define VERILATED_VLITINSIDEOUTSIDETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VLitInsideOutsideTester__Syms;
VL_MODULE(VLitInsideOutsideTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VLitInsideOutsideTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VLitInsideOutsideTester___024root(const char* name);
    ~VLitInsideOutsideTester___024root();
    VL_UNCOPYABLE(VLitInsideOutsideTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VLitInsideOutsideTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
