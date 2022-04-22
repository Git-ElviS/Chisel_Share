// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VLitTester.h for the primary calling header

#ifndef VERILATED_VLITTESTER___024ROOT_H_
#define VERILATED_VLITTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VLitTester__Syms;
VL_MODULE(VLitTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VLitTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VLitTester___024root(const char* name);
    ~VLitTester___024root();
    VL_UNCOPYABLE(VLitTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VLitTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
