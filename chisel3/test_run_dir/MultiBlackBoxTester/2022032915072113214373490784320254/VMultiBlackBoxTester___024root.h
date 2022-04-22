// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMultiBlackBoxTester.h for the primary calling header

#ifndef VERILATED_VMULTIBLACKBOXTESTER___024ROOT_H_
#define VERILATED_VMULTIBLACKBOXTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMultiBlackBoxTester__Syms;
VL_MODULE(VMultiBlackBoxTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VMultiBlackBoxTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMultiBlackBoxTester___024root(const char* name);
    ~VMultiBlackBoxTester___024root();
    VL_UNCOPYABLE(VMultiBlackBoxTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMultiBlackBoxTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
