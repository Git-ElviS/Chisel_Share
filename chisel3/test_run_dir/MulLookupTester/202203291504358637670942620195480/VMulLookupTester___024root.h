// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMulLookupTester.h for the primary calling header

#ifndef VERILATED_VMULLOOKUPTESTER___024ROOT_H_
#define VERILATED_VMULLOOKUPTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMulLookupTester__Syms;
VL_MODULE(VMulLookupTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VMulLookupTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMulLookupTester___024root(const char* name);
    ~VMulLookupTester___024root();
    VL_UNCOPYABLE(VMulLookupTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMulLookupTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
