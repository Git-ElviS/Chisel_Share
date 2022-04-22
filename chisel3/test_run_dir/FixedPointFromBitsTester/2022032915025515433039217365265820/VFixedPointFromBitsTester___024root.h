// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFixedPointFromBitsTester.h for the primary calling header

#ifndef VERILATED_VFIXEDPOINTFROMBITSTESTER___024ROOT_H_
#define VERILATED_VFIXEDPOINTFROMBITSTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VFixedPointFromBitsTester__Syms;
VL_MODULE(VFixedPointFromBitsTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VFixedPointFromBitsTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VFixedPointFromBitsTester___024root(const char* name);
    ~VFixedPointFromBitsTester___024root();
    VL_UNCOPYABLE(VFixedPointFromBitsTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VFixedPointFromBitsTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
