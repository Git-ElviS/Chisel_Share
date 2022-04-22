// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VStopImmediatelyTester.h for the primary calling header

#ifndef VERILATED_VSTOPIMMEDIATELYTESTER___024ROOT_H_
#define VERILATED_VSTOPIMMEDIATELYTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VStopImmediatelyTester__Syms;
VL_MODULE(VStopImmediatelyTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*3:0*/ StopImmediatelyTester__DOT__cycle;
    CData/*3:0*/ StopImmediatelyTester__DOT___cycle_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VStopImmediatelyTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VStopImmediatelyTester___024root(const char* name);
    ~VStopImmediatelyTester___024root();
    VL_UNCOPYABLE(VStopImmediatelyTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VStopImmediatelyTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
