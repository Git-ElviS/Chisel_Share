// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VResetTester.h for the primary calling header

#ifndef VERILATED_VRESETTESTER___024ROOT_H_
#define VERILATED_VRESETTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VResetTester__Syms;
VL_MODULE(VResetTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ ResetTester__DOT__wasReset;
    CData/*2:0*/ ResetTester__DOT__value;
    CData/*2:0*/ ResetTester__DOT___value_wrap_value_T_1;
    CData/*0:0*/ ResetTester__DOT__triggerReset;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VResetTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VResetTester___024root(const char* name);
    ~VResetTester___024root();
    VL_UNCOPYABLE(VResetTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VResetTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
