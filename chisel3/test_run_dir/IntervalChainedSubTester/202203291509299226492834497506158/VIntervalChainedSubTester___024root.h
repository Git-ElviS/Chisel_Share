// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIntervalChainedSubTester.h for the primary calling header

#ifndef VERILATED_VINTERVALCHAINEDSUBTESTER___024ROOT_H_
#define VERILATED_VINTERVALCHAINEDSUBTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VIntervalChainedSubTester__Syms;
VL_MODULE(VIntervalChainedSubTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VIntervalChainedSubTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VIntervalChainedSubTester___024root(const char* name);
    ~VIntervalChainedSubTester___024root();
    VL_UNCOPYABLE(VIntervalChainedSubTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VIntervalChainedSubTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
