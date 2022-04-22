// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VParameterizedModuleTester.h for the primary calling header

#ifndef VERILATED_VPARAMETERIZEDMODULETESTER___024ROOT_H_
#define VERILATED_VPARAMETERIZEDMODULETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VParameterizedModuleTester__Syms;
VL_MODULE(VParameterizedModuleTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VParameterizedModuleTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VParameterizedModuleTester___024root(const char* name);
    ~VParameterizedModuleTester___024root();
    VL_UNCOPYABLE(VParameterizedModuleTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VParameterizedModuleTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
