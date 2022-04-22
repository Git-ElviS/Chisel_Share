// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIntervalTester2.h for the primary calling header

#ifndef VERILATED_VINTERVALTESTER2___024ROOT_H_
#define VERILATED_VINTERVALTESTER2___024ROOT_H_  // guard

#include "verilated.h"

class VIntervalTester2__Syms;
VL_MODULE(VIntervalTester2___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*3:0*/ IntervalTester2__DOT__cycle;
    CData/*0:0*/ IntervalTester2__DOT__wrap_wrap;
    CData/*3:0*/ IntervalTester2__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VIntervalTester2__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VIntervalTester2___024root(const char* name);
    ~VIntervalTester2___024root();
    VL_UNCOPYABLE(VIntervalTester2___024root);

    // INTERNAL METHODS
    void __Vconfigure(VIntervalTester2__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
