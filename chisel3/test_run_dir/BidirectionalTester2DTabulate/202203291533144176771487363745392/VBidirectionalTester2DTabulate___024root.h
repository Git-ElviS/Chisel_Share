// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBidirectionalTester2DTabulate.h for the primary calling header

#ifndef VERILATED_VBIDIRECTIONALTESTER2DTABULATE___024ROOT_H_
#define VERILATED_VBIDIRECTIONALTESTER2DTABULATE___024ROOT_H_  // guard

#include "verilated.h"

class VBidirectionalTester2DTabulate__Syms;
VL_MODULE(VBidirectionalTester2DTabulate___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VBidirectionalTester2DTabulate__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBidirectionalTester2DTabulate___024root(const char* name);
    ~VBidirectionalTester2DTabulate___024root();
    VL_UNCOPYABLE(VBidirectionalTester2DTabulate___024root);

    // INTERNAL METHODS
    void __Vconfigure(VBidirectionalTester2DTabulate__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
