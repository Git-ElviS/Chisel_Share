// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VImplicitModuleInRawModuleTester.h for the primary calling header

#ifndef VERILATED_VIMPLICITMODULEINRAWMODULETESTER___024ROOT_H_
#define VERILATED_VIMPLICITMODULEINRAWMODULETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VImplicitModuleInRawModuleTester__Syms;
VL_MODULE(VImplicitModuleInRawModuleTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VImplicitModuleInRawModuleTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VImplicitModuleInRawModuleTester___024root(const char* name);
    ~VImplicitModuleInRawModuleTester___024root();
    VL_UNCOPYABLE(VImplicitModuleInRawModuleTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VImplicitModuleInRawModuleTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
