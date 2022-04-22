// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFinishTester.h for the primary calling header

#ifndef VERILATED_VFINISHTESTER___024ROOT_H_
#define VERILATED_VFINISHTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VFinishTester__Syms;
VL_MODULE(VFinishTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VFinishTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VFinishTester___024root(const char* name);
    ~VFinishTester___024root();
    VL_UNCOPYABLE(VFinishTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VFinishTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
