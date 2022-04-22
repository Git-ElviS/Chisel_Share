// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIntervalTester.h for the primary calling header

#ifndef VERILATED_VINTERVALTESTER___024ROOT_H_
#define VERILATED_VINTERVALTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VIntervalTester__Syms;
VL_MODULE(VIntervalTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*3:0*/ IntervalTester__DOT__cycle;
    CData/*0:0*/ IntervalTester__DOT__wrap_wrap;
    CData/*3:0*/ IntervalTester__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VIntervalTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VIntervalTester___024root(const char* name);
    ~VIntervalTester___024root();
    VL_UNCOPYABLE(VIntervalTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VIntervalTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
