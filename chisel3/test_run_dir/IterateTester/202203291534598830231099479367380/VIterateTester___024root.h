// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIterateTester.h for the primary calling header

#ifndef VERILATED_VITERATETESTER___024ROOT_H_
#define VERILATED_VITERATETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VIterateTester__Syms;
VL_MODULE(VIterateTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VIterateTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VIterateTester___024root(const char* name);
    ~VIterateTester___024root();
    VL_UNCOPYABLE(VIterateTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VIterateTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
