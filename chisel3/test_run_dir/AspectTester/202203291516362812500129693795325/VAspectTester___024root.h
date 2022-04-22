// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAspectTester.h for the primary calling header

#ifndef VERILATED_VASPECTTESTER___024ROOT_H_
#define VERILATED_VASPECTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VAspectTester__Syms;
VL_MODULE(VAspectTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*2:0*/ AspectTester__DOT__counter;
    CData/*2:0*/ AspectTester__DOT___counter_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VAspectTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VAspectTester___024root(const char* name);
    ~VAspectTester___024root();
    VL_UNCOPYABLE(VAspectTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VAspectTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
