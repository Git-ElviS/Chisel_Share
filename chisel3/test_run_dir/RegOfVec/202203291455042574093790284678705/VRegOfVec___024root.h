// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegOfVec.h for the primary calling header

#ifndef VERILATED_VREGOFVEC___024ROOT_H_
#define VERILATED_VREGOFVEC___024ROOT_H_  // guard

#include "verilated.h"

class VRegOfVec__Syms;
VL_MODULE(VRegOfVec___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ RegOfVec__DOT__cycle;
    CData/*0:0*/ RegOfVec__DOT__wrap_wrap;
    CData/*1:0*/ RegOfVec__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VRegOfVec__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VRegOfVec___024root(const char* name);
    ~VRegOfVec___024root();
    VL_UNCOPYABLE(VRegOfVec___024root);

    // INTERNAL METHODS
    void __Vconfigure(VRegOfVec__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
