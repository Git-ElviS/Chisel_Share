// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIntervalRegisterTester.h for the primary calling header

#ifndef VERILATED_VINTERVALREGISTERTESTER___024ROOT_H_
#define VERILATED_VINTERVALREGISTERTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VIntervalRegisterTester__Syms;
VL_MODULE(VIntervalRegisterTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*3:0*/ IntervalRegisterTester__DOT__counter;
    CData/*3:0*/ IntervalRegisterTester__DOT___counter_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VIntervalRegisterTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VIntervalRegisterTester___024root(const char* name);
    ~VIntervalRegisterTester___024root();
    VL_UNCOPYABLE(VIntervalRegisterTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VIntervalRegisterTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
