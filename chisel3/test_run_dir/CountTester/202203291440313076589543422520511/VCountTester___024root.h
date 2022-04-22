// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCountTester.h for the primary calling header

#ifndef VERILATED_VCOUNTTESTER___024ROOT_H_
#define VERILATED_VCOUNTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VCountTester__Syms;
VL_MODULE(VCountTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ CountTester__DOT__value;
    CData/*0:0*/ CountTester__DOT__wrap;
    CData/*1:0*/ CountTester__DOT___value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VCountTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VCountTester___024root(const char* name);
    ~VCountTester___024root();
    VL_UNCOPYABLE(VCountTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VCountTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
