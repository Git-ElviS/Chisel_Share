// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTopTester.h for the primary calling header

#ifndef VERILATED_VTOPTESTER___024ROOT_H_
#define VERILATED_VTOPTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VTopTester__Syms;
VL_MODULE(VTopTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ TopTester__DOT__done_value;
    CData/*0:0*/ TopTester__DOT___done_wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VTopTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VTopTester___024root(const char* name);
    ~VTopTester___024root();
    VL_UNCOPYABLE(VTopTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VTopTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
