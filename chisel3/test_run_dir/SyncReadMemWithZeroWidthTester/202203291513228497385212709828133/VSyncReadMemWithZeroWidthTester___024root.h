// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSyncReadMemWithZeroWidthTester.h for the primary calling header

#ifndef VERILATED_VSYNCREADMEMWITHZEROWIDTHTESTER___024ROOT_H_
#define VERILATED_VSYNCREADMEMWITHZEROWIDTHTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VSyncReadMemWithZeroWidthTester__Syms;
VL_MODULE(VSyncReadMemWithZeroWidthTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ SyncReadMemWithZeroWidthTester__DOT__cnt;
    CData/*0:0*/ SyncReadMemWithZeroWidthTester__DOT__cnt_wrap_wrap;
    CData/*1:0*/ SyncReadMemWithZeroWidthTester__DOT___cnt_wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VSyncReadMemWithZeroWidthTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSyncReadMemWithZeroWidthTester___024root(const char* name);
    ~VSyncReadMemWithZeroWidthTester___024root();
    VL_UNCOPYABLE(VSyncReadMemWithZeroWidthTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSyncReadMemWithZeroWidthTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
