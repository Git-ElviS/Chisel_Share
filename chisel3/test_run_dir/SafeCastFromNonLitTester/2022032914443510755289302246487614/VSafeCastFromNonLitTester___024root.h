// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSafeCastFromNonLitTester.h for the primary calling header

#ifndef VERILATED_VSAFECASTFROMNONLITTESTER___024ROOT_H_
#define VERILATED_VSAFECASTFROMNONLITTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VSafeCastFromNonLitTester__Syms;
VL_MODULE(VSafeCastFromNonLitTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VSafeCastFromNonLitTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSafeCastFromNonLitTester___024root(const char* name);
    ~VSafeCastFromNonLitTester___024root();
    VL_UNCOPYABLE(VSafeCastFromNonLitTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSafeCastFromNonLitTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
