// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VExtModuleTester.h for the primary calling header

#ifndef VERILATED_VEXTMODULETESTER___024ROOT_H_
#define VERILATED_VEXTMODULETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VExtModuleTester__Syms;
VL_MODULE(VExtModuleTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VExtModuleTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VExtModuleTester___024root(const char* name);
    ~VExtModuleTester___024root();
    VL_UNCOPYABLE(VExtModuleTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VExtModuleTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
