// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMixedVecRegTester.h for the primary calling header

#ifndef VERILATED_VMIXEDVECREGTESTER___024ROOT_H_
#define VERILATED_VMIXEDVECREGTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMixedVecRegTester__Syms;
VL_MODULE(VMixedVecRegTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ MixedVecRegTester__DOT__doneReg;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VMixedVecRegTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMixedVecRegTester___024root(const char* name);
    ~VMixedVecRegTester___024root();
    VL_UNCOPYABLE(VMixedVecRegTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMixedVecRegTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
