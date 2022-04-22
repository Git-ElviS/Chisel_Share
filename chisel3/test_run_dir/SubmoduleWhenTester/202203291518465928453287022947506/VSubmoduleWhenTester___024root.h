// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSubmoduleWhenTester.h for the primary calling header

#ifndef VERILATED_VSUBMODULEWHENTESTER___024ROOT_H_
#define VERILATED_VSUBMODULEWHENTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VSubmoduleWhenTester__Syms;
VL_MODULE(VSubmoduleWhenTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ SubmoduleWhenTester__DOT__cycle;
    CData/*0:0*/ SubmoduleWhenTester__DOT__wrap_wrap;
    CData/*1:0*/ SubmoduleWhenTester__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VSubmoduleWhenTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSubmoduleWhenTester___024root(const char* name);
    ~VSubmoduleWhenTester___024root();
    VL_UNCOPYABLE(VSubmoduleWhenTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSubmoduleWhenTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
