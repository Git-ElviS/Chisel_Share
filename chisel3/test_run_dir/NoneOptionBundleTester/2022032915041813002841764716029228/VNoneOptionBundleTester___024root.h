// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNoneOptionBundleTester.h for the primary calling header

#ifndef VERILATED_VNONEOPTIONBUNDLETESTER___024ROOT_H_
#define VERILATED_VNONEOPTIONBUNDLETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VNoneOptionBundleTester__Syms;
VL_MODULE(VNoneOptionBundleTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VNoneOptionBundleTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNoneOptionBundleTester___024root(const char* name);
    ~VNoneOptionBundleTester___024root();
    VL_UNCOPYABLE(VNoneOptionBundleTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VNoneOptionBundleTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
