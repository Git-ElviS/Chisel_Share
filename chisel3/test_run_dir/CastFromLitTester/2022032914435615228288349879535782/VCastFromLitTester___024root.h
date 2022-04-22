// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCastFromLitTester.h for the primary calling header

#ifndef VERILATED_VCASTFROMLITTESTER___024ROOT_H_
#define VERILATED_VCASTFROMLITTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VCastFromLitTester__Syms;
VL_MODULE(VCastFromLitTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VCastFromLitTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VCastFromLitTester___024root(const char* name);
    ~VCastFromLitTester___024root();
    VL_UNCOPYABLE(VCastFromLitTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VCastFromLitTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
