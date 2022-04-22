// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VValueTester.h for the primary calling header

#ifndef VERILATED_VVALUETESTER___024ROOT_H_
#define VERILATED_VVALUETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VValueTester__Syms;
VL_MODULE(VValueTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VValueTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VValueTester___024root(const char* name);
    ~VValueTester___024root();
    VL_UNCOPYABLE(VValueTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VValueTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
