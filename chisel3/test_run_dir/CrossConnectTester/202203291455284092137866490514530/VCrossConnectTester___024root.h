// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCrossConnectTester.h for the primary calling header

#ifndef VERILATED_VCROSSCONNECTTESTER___024ROOT_H_
#define VERILATED_VCROSSCONNECTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VCrossConnectTester__Syms;
VL_MODULE(VCrossConnectTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VCrossConnectTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VCrossConnectTester___024root(const char* name);
    ~VCrossConnectTester___024root();
    VL_UNCOPYABLE(VCrossConnectTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VCrossConnectTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
