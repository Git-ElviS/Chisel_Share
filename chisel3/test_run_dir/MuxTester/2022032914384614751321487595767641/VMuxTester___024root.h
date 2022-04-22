// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMuxTester.h for the primary calling header

#ifndef VERILATED_VMUXTESTER___024ROOT_H_
#define VERILATED_VMUXTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMuxTester__Syms;
VL_MODULE(VMuxTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VMuxTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMuxTester___024root(const char* name);
    ~VMuxTester___024root();
    VL_UNCOPYABLE(VMuxTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMuxTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
