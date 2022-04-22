// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUIntLitExtractTester.h for the primary calling header

#ifndef VERILATED_VUINTLITEXTRACTTESTER___024ROOT_H_
#define VERILATED_VUINTLITEXTRACTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VUIntLitExtractTester__Syms;
VL_MODULE(VUIntLitExtractTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VUIntLitExtractTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VUIntLitExtractTester___024root(const char* name);
    ~VUIntLitExtractTester___024root();
    VL_UNCOPYABLE(VUIntLitExtractTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VUIntLitExtractTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
