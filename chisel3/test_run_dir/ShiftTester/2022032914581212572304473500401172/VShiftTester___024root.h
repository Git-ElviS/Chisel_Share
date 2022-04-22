// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VShiftTester.h for the primary calling header

#ifndef VERILATED_VSHIFTTESTER___024ROOT_H_
#define VERILATED_VSHIFTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VShiftTester__Syms;
VL_MODULE(VShiftTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VShiftTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VShiftTester___024root(const char* name);
    ~VShiftTester___024root();
    VL_UNCOPYABLE(VShiftTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VShiftTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
