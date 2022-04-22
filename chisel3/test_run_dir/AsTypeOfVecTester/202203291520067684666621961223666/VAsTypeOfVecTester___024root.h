// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAsTypeOfVecTester.h for the primary calling header

#ifndef VERILATED_VASTYPEOFVECTESTER___024ROOT_H_
#define VERILATED_VASTYPEOFVECTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VAsTypeOfVecTester__Syms;
VL_MODULE(VAsTypeOfVecTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VAsTypeOfVecTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VAsTypeOfVecTester___024root(const char* name);
    ~VAsTypeOfVecTester___024root();
    VL_UNCOPYABLE(VAsTypeOfVecTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VAsTypeOfVecTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
