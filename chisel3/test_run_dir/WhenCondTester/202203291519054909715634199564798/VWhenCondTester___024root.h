// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VWhenCondTester.h for the primary calling header

#ifndef VERILATED_VWHENCONDTESTER___024ROOT_H_
#define VERILATED_VWHENCONDTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VWhenCondTester__Syms;
VL_MODULE(VWhenCondTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*3:0*/ WhenCondTester__DOT__cycle;
    CData/*3:0*/ WhenCondTester__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VWhenCondTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VWhenCondTester___024root(const char* name);
    ~VWhenCondTester___024root();
    VL_UNCOPYABLE(VWhenCondTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VWhenCondTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
