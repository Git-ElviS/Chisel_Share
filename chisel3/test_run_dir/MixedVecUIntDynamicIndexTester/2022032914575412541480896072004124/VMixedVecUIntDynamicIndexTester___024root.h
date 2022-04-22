// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMixedVecUIntDynamicIndexTester.h for the primary calling header

#ifndef VERILATED_VMIXEDVECUINTDYNAMICINDEXTESTER___024ROOT_H_
#define VERILATED_VMIXEDVECUINTDYNAMICINDEXTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMixedVecUIntDynamicIndexTester__Syms;
VL_MODULE(VMixedVecUIntDynamicIndexTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ MixedVecUIntDynamicIndexTester__DOT__cycle;
    CData/*1:0*/ MixedVecUIntDynamicIndexTester__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VMixedVecUIntDynamicIndexTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMixedVecUIntDynamicIndexTester___024root(const char* name);
    ~VMixedVecUIntDynamicIndexTester___024root();
    VL_UNCOPYABLE(VMixedVecUIntDynamicIndexTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMixedVecUIntDynamicIndexTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
