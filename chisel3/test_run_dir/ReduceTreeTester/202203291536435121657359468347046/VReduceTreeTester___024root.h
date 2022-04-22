// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VReduceTreeTester.h for the primary calling header

#ifndef VERILATED_VREDUCETREETESTER___024ROOT_H_
#define VERILATED_VREDUCETREETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VReduceTreeTester__Syms;
VL_MODULE(VReduceTreeTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VReduceTreeTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VReduceTreeTester___024root(const char* name);
    ~VReduceTreeTester___024root();
    VL_UNCOPYABLE(VReduceTreeTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VReduceTreeTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
