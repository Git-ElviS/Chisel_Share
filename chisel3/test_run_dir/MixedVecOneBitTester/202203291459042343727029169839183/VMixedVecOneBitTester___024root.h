// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMixedVecOneBitTester.h for the primary calling header

#ifndef VERILATED_VMIXEDVECONEBITTESTER___024ROOT_H_
#define VERILATED_VMIXEDVECONEBITTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMixedVecOneBitTester__Syms;
VL_MODULE(VMixedVecOneBitTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ MixedVecOneBitTester__DOT__flag;
    CData/*0:0*/ MixedVecOneBitTester__DOT___GEN_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VMixedVecOneBitTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMixedVecOneBitTester___024root(const char* name);
    ~VMixedVecOneBitTester___024root();
    VL_UNCOPYABLE(VMixedVecOneBitTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMixedVecOneBitTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
