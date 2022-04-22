// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAsTypeOfBundleTester.h for the primary calling header

#ifndef VERILATED_VASTYPEOFBUNDLETESTER___024ROOT_H_
#define VERILATED_VASTYPEOFBUNDLETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VAsTypeOfBundleTester__Syms;
VL_MODULE(VAsTypeOfBundleTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VAsTypeOfBundleTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VAsTypeOfBundleTester___024root(const char* name);
    ~VAsTypeOfBundleTester___024root();
    VL_UNCOPYABLE(VAsTypeOfBundleTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VAsTypeOfBundleTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
