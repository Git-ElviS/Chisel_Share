// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTabulateTester2D.h for the primary calling header

#ifndef VERILATED_VTABULATETESTER2D___024ROOT_H_
#define VERILATED_VTABULATETESTER2D___024ROOT_H_  // guard

#include "verilated.h"

class VTabulateTester2D__Syms;
VL_MODULE(VTabulateTester2D___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VTabulateTester2D__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VTabulateTester2D___024root(const char* name);
    ~VTabulateTester2D___024root();
    VL_UNCOPYABLE(VTabulateTester2D___024root);

    // INTERNAL METHODS
    void __Vconfigure(VTabulateTester2D__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
