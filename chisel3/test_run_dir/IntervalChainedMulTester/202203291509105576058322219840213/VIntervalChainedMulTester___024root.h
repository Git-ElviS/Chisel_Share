// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIntervalChainedMulTester.h for the primary calling header

#ifndef VERILATED_VINTERVALCHAINEDMULTESTER___024ROOT_H_
#define VERILATED_VINTERVALCHAINEDMULTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VIntervalChainedMulTester__Syms;
VL_MODULE(VIntervalChainedMulTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VIntervalChainedMulTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VIntervalChainedMulTester___024root(const char* name);
    ~VIntervalChainedMulTester___024root();
    VL_UNCOPYABLE(VIntervalChainedMulTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VIntervalChainedMulTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
