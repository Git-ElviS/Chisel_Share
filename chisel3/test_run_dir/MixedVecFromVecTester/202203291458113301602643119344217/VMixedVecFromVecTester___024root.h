// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMixedVecFromVecTester.h for the primary calling header

#ifndef VERILATED_VMIXEDVECFROMVECTESTER___024ROOT_H_
#define VERILATED_VMIXEDVECFROMVECTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMixedVecFromVecTester__Syms;
VL_MODULE(VMixedVecFromVecTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VMixedVecFromVecTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMixedVecFromVecTester___024root(const char* name);
    ~VMixedVecFromVecTester___024root();
    VL_UNCOPYABLE(VMixedVecFromVecTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMixedVecFromVecTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
