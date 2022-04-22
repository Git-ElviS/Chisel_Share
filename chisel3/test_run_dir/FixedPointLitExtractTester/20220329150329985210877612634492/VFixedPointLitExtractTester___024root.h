// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFixedPointLitExtractTester.h for the primary calling header

#ifndef VERILATED_VFIXEDPOINTLITEXTRACTTESTER___024ROOT_H_
#define VERILATED_VFIXEDPOINTLITEXTRACTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VFixedPointLitExtractTester__Syms;
VL_MODULE(VFixedPointLitExtractTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VFixedPointLitExtractTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VFixedPointLitExtractTester___024root(const char* name);
    ~VFixedPointLitExtractTester___024root();
    VL_UNCOPYABLE(VFixedPointLitExtractTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VFixedPointLitExtractTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
