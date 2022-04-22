// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VClockAsUIntTester.h for the primary calling header

#ifndef VERILATED_VCLOCKASUINTTESTER___024ROOT_H_
#define VERILATED_VCLOCKASUINTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VClockAsUIntTester__Syms;
VL_MODULE(VClockAsUIntTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VClockAsUIntTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VClockAsUIntTester___024root(const char* name);
    ~VClockAsUIntTester___024root();
    VL_UNCOPYABLE(VClockAsUIntTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VClockAsUIntTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
