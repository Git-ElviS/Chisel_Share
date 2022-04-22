// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIsOneOfTester.h for the primary calling header

#ifndef VERILATED_VISONEOFTESTER___024ROOT_H_
#define VERILATED_VISONEOFTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VIsOneOfTester__Syms;
VL_MODULE(VIsOneOfTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VIsOneOfTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VIsOneOfTester___024root(const char* name);
    ~VIsOneOfTester___024root();
    VL_UNCOPYABLE(VIsOneOfTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VIsOneOfTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
