// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVecLiteralSpec_Anon.h for the primary calling header

#ifndef VERILATED_VVECLITERALSPEC_ANON___024ROOT_H_
#define VERILATED_VVECLITERALSPEC_ANON___024ROOT_H_  // guard

#include "verilated.h"

class VVecLiteralSpec_Anon__Syms;
VL_MODULE(VVecLiteralSpec_Anon___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VVecLiteralSpec_Anon__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VVecLiteralSpec_Anon___024root(const char* name);
    ~VVecLiteralSpec_Anon___024root();
    VL_UNCOPYABLE(VVecLiteralSpec_Anon___024root);

    // INTERNAL METHODS
    void __Vconfigure(VVecLiteralSpec_Anon__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
