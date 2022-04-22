// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIsLitTester.h for the primary calling header

#ifndef VERILATED_VISLITTESTER___024ROOT_H_
#define VERILATED_VISLITTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VIsLitTester__Syms;
VL_MODULE(VIsLitTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VIsLitTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VIsLitTester___024root(const char* name);
    ~VIsLitTester___024root();
    VL_UNCOPYABLE(VIsLitTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VIsLitTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
