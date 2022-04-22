// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VModuloAssertTester.h for the primary calling header

#ifndef VERILATED_VMODULOASSERTTESTER___024ROOT_H_
#define VERILATED_VMODULOASSERTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VModuloAssertTester__Syms;
VL_MODULE(VModuloAssertTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VModuloAssertTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VModuloAssertTester___024root(const char* name);
    ~VModuloAssertTester___024root();
    VL_UNCOPYABLE(VModuloAssertTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VModuloAssertTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
