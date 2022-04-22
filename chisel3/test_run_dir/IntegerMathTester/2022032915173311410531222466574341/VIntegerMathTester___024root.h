// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIntegerMathTester.h for the primary calling header

#ifndef VERILATED_VINTEGERMATHTESTER___024ROOT_H_
#define VERILATED_VINTEGERMATHTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VIntegerMathTester__Syms;
VL_MODULE(VIntegerMathTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VIntegerMathTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VIntegerMathTester___024root(const char* name);
    ~VIntegerMathTester___024root();
    VL_UNCOPYABLE(VIntegerMathTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VIntegerMathTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
