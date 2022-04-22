// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VUInt2VecOfBool.h for the primary calling header

#ifndef VERILATED_VUINT2VECOFBOOL___024ROOT_H_
#define VERILATED_VUINT2VECOFBOOL___024ROOT_H_  // guard

#include "verilated.h"

class VUInt2VecOfBool__Syms;
VL_MODULE(VUInt2VecOfBool___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ UInt2VecOfBool__DOT__cycle;
    CData/*0:0*/ UInt2VecOfBool__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VUInt2VecOfBool__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VUInt2VecOfBool___024root(const char* name);
    ~VUInt2VecOfBool___024root();
    VL_UNCOPYABLE(VUInt2VecOfBool___024root);

    // INTERNAL METHODS
    void __Vconfigure(VUInt2VecOfBool__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
