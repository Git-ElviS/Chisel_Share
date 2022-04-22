// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCastFromNonLitTester.h for the primary calling header

#ifndef VERILATED_VCASTFROMNONLITTESTER___024ROOT_H_
#define VERILATED_VCASTFROMNONLITTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VCastFromNonLitTester__Syms;
VL_MODULE(VCastFromNonLitTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VCastFromNonLitTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VCastFromNonLitTester___024root(const char* name);
    ~VCastFromNonLitTester___024root();
    VL_UNCOPYABLE(VCastFromNonLitTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VCastFromNonLitTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
