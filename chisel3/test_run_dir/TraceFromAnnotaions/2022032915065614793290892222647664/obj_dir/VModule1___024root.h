// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VModule1.h for the primary calling header

#ifndef VERILATED_VMODULE1___024ROOT_H_
#define VERILATED_VMODULE1___024ROOT_H_  // guard

#include "verilated.h"

class VModule1__Syms;
VL_MODULE(VModule1___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(i_a_a,7,0);
    VL_IN8(i_a_b,0,0);
    VL_IN8(i_b_0_0,0,0);
    VL_IN8(i_b_0_1,0,0);
    VL_IN8(i_b_0_2,0,0);
    VL_IN8(i_b_0_3,0,0);
    VL_IN8(i_b_1_0,0,0);
    VL_IN8(i_b_1_1,0,0);
    VL_IN8(i_b_1_2,0,0);
    VL_IN8(i_b_1_3,0,0);
    VL_IN8(i_b_2_0,0,0);
    VL_IN8(i_b_2_1,0,0);
    VL_IN8(i_b_2_2,0,0);
    VL_IN8(i_b_2_3,0,0);
    VL_IN8(i_b_3_0,0,0);
    VL_IN8(i_b_3_1,0,0);
    VL_IN8(i_b_3_2,0,0);
    VL_IN8(i_b_3_3,0,0);
    CData/*0:0*/ Module1__DOT__m0__DOT__o_a_b;
    CData/*0:0*/ Module1__DOT__m0__DOT__r_a_b;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VModule1__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VModule1___024root(const char* name);
    ~VModule1___024root();
    VL_UNCOPYABLE(VModule1___024root);

    // INTERNAL METHODS
    void __Vconfigure(VModule1__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
