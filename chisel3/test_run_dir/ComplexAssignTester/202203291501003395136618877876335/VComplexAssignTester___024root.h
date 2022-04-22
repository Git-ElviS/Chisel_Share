// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VComplexAssignTester.h for the primary calling header

#ifndef VERILATED_VCOMPLEXASSIGNTESTER___024ROOT_H_
#define VERILATED_VCOMPLEXASSIGNTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VComplexAssignTester__Syms;
VL_MODULE(VComplexAssignTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ ComplexAssignTester__DOT__cnt;
    CData/*0:0*/ ComplexAssignTester__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VComplexAssignTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VComplexAssignTester___024root(const char* name);
    ~VComplexAssignTester___024root();
    VL_UNCOPYABLE(VComplexAssignTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VComplexAssignTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
