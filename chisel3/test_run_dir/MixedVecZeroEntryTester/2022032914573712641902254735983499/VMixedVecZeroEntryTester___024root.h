// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMixedVecZeroEntryTester.h for the primary calling header

#ifndef VERILATED_VMIXEDVECZEROENTRYTESTER___024ROOT_H_
#define VERILATED_VMIXEDVECZEROENTRYTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMixedVecZeroEntryTester__Syms;
VL_MODULE(VMixedVecZeroEntryTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VMixedVecZeroEntryTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMixedVecZeroEntryTester___024root(const char* name);
    ~VMixedVecZeroEntryTester___024root();
    VL_UNCOPYABLE(VMixedVecZeroEntryTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMixedVecZeroEntryTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
