// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMixedVecIOTester.h for the primary calling header

#ifndef VERILATED_VMIXEDVECIOTESTER___024ROOT_H_
#define VERILATED_VMIXEDVECIOTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMixedVecIOTester__Syms;
VL_MODULE(VMixedVecIOTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VMixedVecIOTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMixedVecIOTester___024root(const char* name);
    ~VMixedVecIOTester___024root();
    VL_UNCOPYABLE(VMixedVecIOTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMixedVecIOTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
