// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VComposedMultiIOTester.h for the primary calling header

#ifndef VERILATED_VCOMPOSEDMULTIIOTESTER___024ROOT_H_
#define VERILATED_VCOMPOSEDMULTIIOTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VComposedMultiIOTester__Syms;
VL_MODULE(VComposedMultiIOTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VComposedMultiIOTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VComposedMultiIOTester___024root(const char* name);
    ~VComposedMultiIOTester___024root();
    VL_UNCOPYABLE(VComposedMultiIOTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VComposedMultiIOTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
