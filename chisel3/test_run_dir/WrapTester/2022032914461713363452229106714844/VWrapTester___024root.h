// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VWrapTester.h for the primary calling header

#ifndef VERILATED_VWRAPTESTER___024ROOT_H_
#define VERILATED_VWRAPTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VWrapTester__Syms;
VL_MODULE(VWrapTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ WrapTester__DOT__cnt;
    CData/*0:0*/ WrapTester__DOT__wrap_wrap;
    CData/*1:0*/ WrapTester__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VWrapTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VWrapTester___024root(const char* name);
    ~VWrapTester___024root();
    VL_UNCOPYABLE(VWrapTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VWrapTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
