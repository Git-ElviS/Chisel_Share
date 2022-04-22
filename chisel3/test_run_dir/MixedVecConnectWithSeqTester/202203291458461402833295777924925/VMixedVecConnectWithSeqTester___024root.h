// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMixedVecConnectWithSeqTester.h for the primary calling header

#ifndef VERILATED_VMIXEDVECCONNECTWITHSEQTESTER___024ROOT_H_
#define VERILATED_VMIXEDVECCONNECTWITHSEQTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMixedVecConnectWithSeqTester__Syms;
VL_MODULE(VMixedVecConnectWithSeqTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VMixedVecConnectWithSeqTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMixedVecConnectWithSeqTester___024root(const char* name);
    ~VMixedVecConnectWithSeqTester___024root();
    VL_UNCOPYABLE(VMixedVecConnectWithSeqTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMixedVecConnectWithSeqTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
