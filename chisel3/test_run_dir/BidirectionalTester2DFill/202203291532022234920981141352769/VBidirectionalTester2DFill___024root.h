// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBidirectionalTester2DFill.h for the primary calling header

#ifndef VERILATED_VBIDIRECTIONALTESTER2DFILL___024ROOT_H_
#define VERILATED_VBIDIRECTIONALTESTER2DFILL___024ROOT_H_  // guard

#include "verilated.h"

class VBidirectionalTester2DFill__Syms;
VL_MODULE(VBidirectionalTester2DFill___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VBidirectionalTester2DFill__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBidirectionalTester2DFill___024root(const char* name);
    ~VBidirectionalTester2DFill___024root();
    VL_UNCOPYABLE(VBidirectionalTester2DFill___024root);

    // INTERNAL METHODS
    void __Vconfigure(VBidirectionalTester2DFill__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
