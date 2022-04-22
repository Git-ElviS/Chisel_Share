// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTabulateTester.h for the primary calling header

#ifndef VERILATED_VTABULATETESTER___024ROOT_H_
#define VERILATED_VTABULATETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VTabulateTester__Syms;
VL_MODULE(VTabulateTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VTabulateTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VTabulateTester___024root(const char* name);
    ~VTabulateTester___024root();
    VL_UNCOPYABLE(VTabulateTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VTabulateTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
