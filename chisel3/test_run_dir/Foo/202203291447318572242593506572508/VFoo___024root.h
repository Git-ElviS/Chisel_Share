// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFoo.h for the primary calling header

#ifndef VERILATED_VFOO___024ROOT_H_
#define VERILATED_VFOO___024ROOT_H_  // guard

#include "verilated.h"

class VFoo__Syms;
VL_MODULE(VFoo___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ Foo__DOT__done_value;
    CData/*1:0*/ Foo__DOT___done_wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VFoo__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VFoo___024root(const char* name);
    ~VFoo___024root();
    VL_UNCOPYABLE(VFoo___024root);

    // INTERNAL METHODS
    void __Vconfigure(VFoo__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
