// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSIntLitExtractTester.h for the primary calling header

#ifndef VERILATED_VSINTLITEXTRACTTESTER___024ROOT_H_
#define VERILATED_VSINTLITEXTRACTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VSIntLitExtractTester__Syms;
VL_MODULE(VSIntLitExtractTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VSIntLitExtractTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSIntLitExtractTester___024root(const char* name);
    ~VSIntLitExtractTester___024root();
    VL_UNCOPYABLE(VSIntLitExtractTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSIntLitExtractTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
