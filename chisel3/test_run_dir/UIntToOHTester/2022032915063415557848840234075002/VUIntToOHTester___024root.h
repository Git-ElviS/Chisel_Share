// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUIntToOHTester.h for the primary calling header

#ifndef VERILATED_VUINTTOOHTESTER___024ROOT_H_
#define VERILATED_VUINTTOOHTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VUIntToOHTester__Syms;
VL_MODULE(VUIntToOHTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VUIntToOHTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VUIntToOHTester___024root(const char* name);
    ~VUIntToOHTester___024root();
    VL_UNCOPYABLE(VUIntToOHTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VUIntToOHTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
