// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRawModuleTester.h for the primary calling header

#ifndef VERILATED_VRAWMODULETESTER___024ROOT_H_
#define VERILATED_VRAWMODULETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VRawModuleTester__Syms;
VL_MODULE(VRawModuleTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VRawModuleTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VRawModuleTester___024root(const char* name);
    ~VRawModuleTester___024root();
    VL_UNCOPYABLE(VRawModuleTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VRawModuleTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
