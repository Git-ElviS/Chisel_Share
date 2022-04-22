// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VLastAssignTester.h for the primary calling header

#ifndef VERILATED_VLASTASSIGNTESTER___024ROOT_H_
#define VERILATED_VLASTASSIGNTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VLastAssignTester__Syms;
VL_MODULE(VLastAssignTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ LastAssignTester__DOT__cnt;
    CData/*0:0*/ LastAssignTester__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VLastAssignTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VLastAssignTester___024root(const char* name);
    ~VLastAssignTester___024root();
    VL_UNCOPYABLE(VLastAssignTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VLastAssignTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
