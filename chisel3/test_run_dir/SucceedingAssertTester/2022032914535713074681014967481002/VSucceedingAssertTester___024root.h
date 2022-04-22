// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSucceedingAssertTester.h for the primary calling header

#ifndef VERILATED_VSUCCEEDINGASSERTTESTER___024ROOT_H_
#define VERILATED_VSUCCEEDINGASSERTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VSucceedingAssertTester__Syms;
VL_MODULE(VSucceedingAssertTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ SucceedingAssertTester__DOT__done_value;
    CData/*1:0*/ SucceedingAssertTester__DOT___done_wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VSucceedingAssertTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSucceedingAssertTester___024root(const char* name);
    ~VSucceedingAssertTester___024root();
    VL_UNCOPYABLE(VSucceedingAssertTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSucceedingAssertTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
