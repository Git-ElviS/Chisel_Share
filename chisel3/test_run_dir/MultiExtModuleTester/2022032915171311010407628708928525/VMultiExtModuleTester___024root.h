// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMultiExtModuleTester.h for the primary calling header

#ifndef VERILATED_VMULTIEXTMODULETESTER___024ROOT_H_
#define VERILATED_VMULTIEXTMODULETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMultiExtModuleTester__Syms;
VL_MODULE(VMultiExtModuleTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VMultiExtModuleTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMultiExtModuleTester___024root(const char* name);
    ~VMultiExtModuleTester___024root();
    VL_UNCOPYABLE(VMultiExtModuleTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMultiExtModuleTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
