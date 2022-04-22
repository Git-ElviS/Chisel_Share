// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBoringUtilsSpec_Anon.h for the primary calling header

#ifndef VERILATED_VBORINGUTILSSPEC_ANON___024ROOT_H_
#define VERILATED_VBORINGUTILSSPEC_ANON___024ROOT_H_  // guard

#include "verilated.h"

class VBoringUtilsSpec_Anon__Syms;
VL_MODULE(VBoringUtilsSpec_Anon___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ BoringUtilsSpec_Anon__DOT__done_value;
    CData/*0:0*/ BoringUtilsSpec_Anon__DOT___done_wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VBoringUtilsSpec_Anon__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBoringUtilsSpec_Anon___024root(const char* name);
    ~VBoringUtilsSpec_Anon___024root();
    VL_UNCOPYABLE(VBoringUtilsSpec_Anon___024root);

    // INTERNAL METHODS
    void __Vconfigure(VBoringUtilsSpec_Anon__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
