// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBundleLiteralSpec_Anon.h for the primary calling header

#ifndef VERILATED_VBUNDLELITERALSPEC_ANON___024ROOT_H_
#define VERILATED_VBUNDLELITERALSPEC_ANON___024ROOT_H_  // guard

#include "verilated.h"

class VBundleLiteralSpec_Anon__Syms;
VL_MODULE(VBundleLiteralSpec_Anon___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*7:0*/ BundleLiteralSpec_Anon__DOT__r_a;
    CData/*0:0*/ BundleLiteralSpec_Anon__DOT__r_b;
    CData/*0:0*/ BundleLiteralSpec_Anon__DOT__r_c;
    CData/*0:0*/ __Vclklast__TOP__clock;
    SData/*9:0*/ BundleLiteralSpec_Anon__DOT___r_T_1;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VBundleLiteralSpec_Anon__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBundleLiteralSpec_Anon___024root(const char* name);
    ~VBundleLiteralSpec_Anon___024root();
    VL_UNCOPYABLE(VBundleLiteralSpec_Anon___024root);

    // INTERNAL METHODS
    void __Vconfigure(VBundleLiteralSpec_Anon__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
