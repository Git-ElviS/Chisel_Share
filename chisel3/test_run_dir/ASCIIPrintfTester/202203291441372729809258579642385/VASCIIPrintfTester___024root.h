// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VASCIIPrintfTester.h for the primary calling header

#ifndef VERILATED_VASCIIPRINTFTESTER___024ROOT_H_
#define VERILATED_VASCIIPRINTFTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VASCIIPrintfTester__Syms;
VL_MODULE(VASCIIPrintfTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VASCIIPrintfTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VASCIIPrintfTester___024root(const char* name);
    ~VASCIIPrintfTester___024root();
    VL_UNCOPYABLE(VASCIIPrintfTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VASCIIPrintfTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
