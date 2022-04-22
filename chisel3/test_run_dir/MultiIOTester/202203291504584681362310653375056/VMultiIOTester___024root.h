// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMultiIOTester.h for the primary calling header

#ifndef VERILATED_VMULTIIOTESTER___024ROOT_H_
#define VERILATED_VMULTIIOTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMultiIOTester__Syms;
VL_MODULE(VMultiIOTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VMultiIOTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMultiIOTester___024root(const char* name);
    ~VMultiIOTester___024root();
    VL_UNCOPYABLE(VMultiIOTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMultiIOTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
