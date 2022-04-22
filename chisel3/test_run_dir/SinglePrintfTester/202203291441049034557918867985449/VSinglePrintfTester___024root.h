// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSinglePrintfTester.h for the primary calling header

#ifndef VERILATED_VSINGLEPRINTFTESTER___024ROOT_H_
#define VERILATED_VSINGLEPRINTFTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VSinglePrintfTester__Syms;
VL_MODULE(VSinglePrintfTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VSinglePrintfTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSinglePrintfTester___024root(const char* name);
    ~VSinglePrintfTester___024root();
    VL_UNCOPYABLE(VSinglePrintfTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSinglePrintfTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
