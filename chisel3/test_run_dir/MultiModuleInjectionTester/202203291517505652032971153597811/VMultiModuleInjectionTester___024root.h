// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMultiModuleInjectionTester.h for the primary calling header

#ifndef VERILATED_VMULTIMODULEINJECTIONTESTER___024ROOT_H_
#define VERILATED_VMULTIMODULEINJECTIONTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMultiModuleInjectionTester__Syms;
VL_MODULE(VMultiModuleInjectionTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VMultiModuleInjectionTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMultiModuleInjectionTester___024root(const char* name);
    ~VMultiModuleInjectionTester___024root();
    VL_UNCOPYABLE(VMultiModuleInjectionTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMultiModuleInjectionTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
