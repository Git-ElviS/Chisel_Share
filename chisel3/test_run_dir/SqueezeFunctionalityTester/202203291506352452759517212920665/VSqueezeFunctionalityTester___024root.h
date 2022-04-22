// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSqueezeFunctionalityTester.h for the primary calling header

#ifndef VERILATED_VSQUEEZEFUNCTIONALITYTESTER___024ROOT_H_
#define VERILATED_VSQUEEZEFUNCTIONALITYTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VSqueezeFunctionalityTester__Syms;
VL_MODULE(VSqueezeFunctionalityTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;
    SData/*9:0*/ SqueezeFunctionalityTester__DOT__counter;
    SData/*9:0*/ SqueezeFunctionalityTester__DOT___counter_T_1;

    // INTERNAL VARIABLES
    VSqueezeFunctionalityTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSqueezeFunctionalityTester___024root(const char* name);
    ~VSqueezeFunctionalityTester___024root();
    VL_UNCOPYABLE(VSqueezeFunctionalityTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSqueezeFunctionalityTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
