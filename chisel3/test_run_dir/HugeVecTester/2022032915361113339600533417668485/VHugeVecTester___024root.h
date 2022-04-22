// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VHugeVecTester.h for the primary calling header

#ifndef VERILATED_VHUGEVECTESTER___024ROOT_H_
#define VERILATED_VHUGEVECTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VHugeVecTester__Syms;
VL_MODULE(VHugeVecTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VHugeVecTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VHugeVecTester___024root(const char* name);
    ~VHugeVecTester___024root();
    VL_UNCOPYABLE(VHugeVecTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VHugeVecTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
