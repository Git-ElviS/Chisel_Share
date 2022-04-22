// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMixedVecAssignTester.h for the primary calling header

#ifndef VERILATED_VMIXEDVECASSIGNTESTER___024ROOT_H_
#define VERILATED_VMIXEDVECASSIGNTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMixedVecAssignTester__Syms;
VL_MODULE(VMixedVecAssignTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VMixedVecAssignTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMixedVecAssignTester___024root(const char* name);
    ~VMixedVecAssignTester___024root();
    VL_UNCOPYABLE(VMixedVecAssignTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMixedVecAssignTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
