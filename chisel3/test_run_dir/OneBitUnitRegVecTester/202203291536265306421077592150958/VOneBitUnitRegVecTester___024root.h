// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VOneBitUnitRegVecTester.h for the primary calling header

#ifndef VERILATED_VONEBITUNITREGVECTESTER___024ROOT_H_
#define VERILATED_VONEBITUNITREGVECTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VOneBitUnitRegVecTester__Syms;
VL_MODULE(VOneBitUnitRegVecTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VOneBitUnitRegVecTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VOneBitUnitRegVecTester___024root(const char* name);
    ~VOneBitUnitRegVecTester___024root();
    VL_UNCOPYABLE(VOneBitUnitRegVecTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VOneBitUnitRegVecTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
