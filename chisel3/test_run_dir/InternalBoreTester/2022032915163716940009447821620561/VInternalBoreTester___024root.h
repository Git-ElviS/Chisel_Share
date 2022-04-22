// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VInternalBoreTester.h for the primary calling header

#ifndef VERILATED_VINTERNALBORETESTER___024ROOT_H_
#define VERILATED_VINTERNALBORETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VInternalBoreTester__Syms;
VL_MODULE(VInternalBoreTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ InternalBoreTester__DOT__done_value;
    CData/*0:0*/ InternalBoreTester__DOT___done_wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VInternalBoreTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VInternalBoreTester___024root(const char* name);
    ~VInternalBoreTester___024root();
    VL_UNCOPYABLE(VInternalBoreTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VInternalBoreTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
