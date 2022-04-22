// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VASCIIPrintableTester.h for the primary calling header

#ifndef VERILATED_VASCIIPRINTABLETESTER___024ROOT_H_
#define VERILATED_VASCIIPRINTABLETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VASCIIPrintableTester__Syms;
VL_MODULE(VASCIIPrintableTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VASCIIPrintableTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VASCIIPrintableTester___024root(const char* name);
    ~VASCIIPrintableTester___024root();
    VL_UNCOPYABLE(VASCIIPrintableTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VASCIIPrintableTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
