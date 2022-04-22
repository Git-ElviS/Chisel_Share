// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBundleSpec_Anon.h for the primary calling header

#ifndef VERILATED_VBUNDLESPEC_ANON___024ROOT_H_
#define VERILATED_VBUNDLESPEC_ANON___024ROOT_H_  // guard

#include "verilated.h"

class VBundleSpec_Anon__Syms;
VL_MODULE(VBundleSpec_Anon___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VBundleSpec_Anon__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBundleSpec_Anon___024root(const char* name);
    ~VBundleSpec_Anon___024root();
    VL_UNCOPYABLE(VBundleSpec_Anon___024root);

    // INTERNAL METHODS
    void __Vconfigure(VBundleSpec_Anon__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
