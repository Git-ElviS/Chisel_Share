// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMixedVecConnectWithVecTester.h for the primary calling header

#ifndef VERILATED_VMIXEDVECCONNECTWITHVECTESTER___024ROOT_H_
#define VERILATED_VMIXEDVECCONNECTWITHVECTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMixedVecConnectWithVecTester__Syms;
VL_MODULE(VMixedVecConnectWithVecTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VMixedVecConnectWithVecTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMixedVecConnectWithVecTester___024root(const char* name);
    ~VMixedVecConnectWithVecTester___024root();
    VL_UNCOPYABLE(VMixedVecConnectWithVecTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMixedVecConnectWithVecTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard