// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBundleToUnitTester.h for the primary calling header

#ifndef VERILATED_VBUNDLETOUNITTESTER___024ROOT_H_
#define VERILATED_VBUNDLETOUNITTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VBundleToUnitTester__Syms;
VL_MODULE(VBundleToUnitTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VBundleToUnitTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBundleToUnitTester___024root(const char* name);
    ~VBundleToUnitTester___024root();
    VL_UNCOPYABLE(VBundleToUnitTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VBundleToUnitTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
