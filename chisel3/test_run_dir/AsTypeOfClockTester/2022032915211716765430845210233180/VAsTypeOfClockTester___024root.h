// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAsTypeOfClockTester.h for the primary calling header

#ifndef VERILATED_VASTYPEOFCLOCKTESTER___024ROOT_H_
#define VERILATED_VASTYPEOFCLOCKTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VAsTypeOfClockTester__Syms;
VL_MODULE(VAsTypeOfClockTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VAsTypeOfClockTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VAsTypeOfClockTester___024root(const char* name);
    ~VAsTypeOfClockTester___024root();
    VL_UNCOPYABLE(VAsTypeOfClockTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VAsTypeOfClockTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
