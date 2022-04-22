// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFormattedAssertTester.h for the primary calling header

#ifndef VERILATED_VFORMATTEDASSERTTESTER___024ROOT_H_
#define VERILATED_VFORMATTEDASSERTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VFormattedAssertTester__Syms;
VL_MODULE(VFormattedAssertTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VFormattedAssertTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VFormattedAssertTester___024root(const char* name);
    ~VFormattedAssertTester___024root();
    VL_UNCOPYABLE(VFormattedAssertTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VFormattedAssertTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
