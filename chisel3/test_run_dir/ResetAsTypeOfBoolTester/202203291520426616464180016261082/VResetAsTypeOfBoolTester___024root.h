// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VResetAsTypeOfBoolTester.h for the primary calling header

#ifndef VERILATED_VRESETASTYPEOFBOOLTESTER___024ROOT_H_
#define VERILATED_VRESETASTYPEOFBOOLTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VResetAsTypeOfBoolTester__Syms;
VL_MODULE(VResetAsTypeOfBoolTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VResetAsTypeOfBoolTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VResetAsTypeOfBoolTester___024root(const char* name);
    ~VResetAsTypeOfBoolTester___024root();
    VL_UNCOPYABLE(VResetAsTypeOfBoolTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VResetAsTypeOfBoolTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
