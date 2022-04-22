// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VParameterizedOneHotTester.h for the primary calling header

#ifndef VERILATED_VPARAMETERIZEDONEHOTTESTER___024ROOT_H_
#define VERILATED_VPARAMETERIZEDONEHOTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VParameterizedOneHotTester__Syms;
VL_MODULE(VParameterizedOneHotTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VParameterizedOneHotTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VParameterizedOneHotTester___024root(const char* name);
    ~VParameterizedOneHotTester___024root();
    VL_UNCOPYABLE(VParameterizedOneHotTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VParameterizedOneHotTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
