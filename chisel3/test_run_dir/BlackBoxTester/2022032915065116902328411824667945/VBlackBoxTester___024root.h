// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBlackBoxTester.h for the primary calling header

#ifndef VERILATED_VBLACKBOXTESTER___024ROOT_H_
#define VERILATED_VBLACKBOXTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VBlackBoxTester__Syms;
VL_MODULE(VBlackBoxTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VBlackBoxTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBlackBoxTester___024root(const char* name);
    ~VBlackBoxTester___024root();
    VL_UNCOPYABLE(VBlackBoxTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VBlackBoxTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
