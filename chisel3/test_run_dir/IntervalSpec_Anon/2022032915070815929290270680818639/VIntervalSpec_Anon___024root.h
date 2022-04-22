// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VIntervalSpec_Anon.h for the primary calling header

#ifndef VERILATED_VINTERVALSPEC_ANON___024ROOT_H_
#define VERILATED_VINTERVALSPEC_ANON___024ROOT_H_  // guard

#include "verilated.h"

class VIntervalSpec_Anon__Syms;
VL_MODULE(VIntervalSpec_Anon___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VIntervalSpec_Anon__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VIntervalSpec_Anon___024root(const char* name);
    ~VIntervalSpec_Anon___024root();
    VL_UNCOPYABLE(VIntervalSpec_Anon___024root);

    // INTERNAL METHODS
    void __Vconfigure(VIntervalSpec_Anon__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
