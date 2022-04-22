// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAdderTreeTester.h for the primary calling header

#ifndef VERILATED_VADDERTREETESTER___024ROOT_H_
#define VERILATED_VADDERTREETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VAdderTreeTester__Syms;
VL_MODULE(VAdderTreeTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VAdderTreeTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VAdderTreeTester___024root(const char* name);
    ~VAdderTreeTester___024root();
    VL_UNCOPYABLE(VAdderTreeTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VAdderTreeTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
