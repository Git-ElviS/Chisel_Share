// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VEnumOpsTester.h for the primary calling header

#ifndef VERILATED_VENUMOPSTESTER___024ROOT_H_
#define VERILATED_VENUMOPSTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VEnumOpsTester__Syms;
VL_MODULE(VEnumOpsTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VEnumOpsTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VEnumOpsTester___024root(const char* name);
    ~VEnumOpsTester___024root();
    VL_UNCOPYABLE(VEnumOpsTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VEnumOpsTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
