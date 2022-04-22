// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIntervalChainedAddTester.h for the primary calling header

#ifndef VERILATED_VINTERVALCHAINEDADDTESTER___024ROOT_H_
#define VERILATED_VINTERVALCHAINEDADDTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VIntervalChainedAddTester__Syms;
VL_MODULE(VIntervalChainedAddTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VIntervalChainedAddTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VIntervalChainedAddTester___024root(const char* name);
    ~VIntervalChainedAddTester___024root();
    VL_UNCOPYABLE(VIntervalChainedAddTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VIntervalChainedAddTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
