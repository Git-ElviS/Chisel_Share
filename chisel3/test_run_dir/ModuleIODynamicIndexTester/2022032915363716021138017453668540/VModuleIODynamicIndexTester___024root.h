// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VModuleIODynamicIndexTester.h for the primary calling header

#ifndef VERILATED_VMODULEIODYNAMICINDEXTESTER___024ROOT_H_
#define VERILATED_VMODULEIODYNAMICINDEXTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VModuleIODynamicIndexTester__Syms;
VL_MODULE(VModuleIODynamicIndexTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ ModuleIODynamicIndexTester__DOT__cycle;
    CData/*1:0*/ ModuleIODynamicIndexTester__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    IData/*31:0*/ ModuleIODynamicIndexTester__DOT___GEN_12;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VModuleIODynamicIndexTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VModuleIODynamicIndexTester___024root(const char* name);
    ~VModuleIODynamicIndexTester___024root();
    VL_UNCOPYABLE(VModuleIODynamicIndexTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VModuleIODynamicIndexTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
