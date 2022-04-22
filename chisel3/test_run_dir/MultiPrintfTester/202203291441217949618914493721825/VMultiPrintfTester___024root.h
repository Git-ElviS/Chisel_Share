// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMultiPrintfTester.h for the primary calling header

#ifndef VERILATED_VMULTIPRINTFTESTER___024ROOT_H_
#define VERILATED_VMULTIPRINTFTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMultiPrintfTester__Syms;
VL_MODULE(VMultiPrintfTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VMultiPrintfTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMultiPrintfTester___024root(const char* name);
    ~VMultiPrintfTester___024root();
    VL_UNCOPYABLE(VMultiPrintfTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMultiPrintfTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
