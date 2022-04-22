// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFailingAssertTester.h for the primary calling header

#ifndef VERILATED_VFAILINGASSERTTESTER___024ROOT_H_
#define VERILATED_VFAILINGASSERTTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VFailingAssertTester__Syms;
VL_MODULE(VFailingAssertTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ FailingAssertTester__DOT__done_value;
    CData/*1:0*/ FailingAssertTester__DOT___done_wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VFailingAssertTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VFailingAssertTester___024root(const char* name);
    ~VFailingAssertTester___024root();
    VL_UNCOPYABLE(VFailingAssertTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VFailingAssertTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
