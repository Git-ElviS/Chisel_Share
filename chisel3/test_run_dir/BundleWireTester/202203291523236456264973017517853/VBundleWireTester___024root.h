// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBundleWireTester.h for the primary calling header

#ifndef VERILATED_VBUNDLEWIRETESTER___024ROOT_H_
#define VERILATED_VBUNDLEWIRETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VBundleWireTester__Syms;
VL_MODULE(VBundleWireTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VBundleWireTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBundleWireTester___024root(const char* name);
    ~VBundleWireTester___024root();
    VL_UNCOPYABLE(VBundleWireTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VBundleWireTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
