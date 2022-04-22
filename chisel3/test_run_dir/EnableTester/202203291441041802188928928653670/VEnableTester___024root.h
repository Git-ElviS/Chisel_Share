// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VEnableTester.h for the primary calling header

#ifndef VERILATED_VENABLETESTER___024ROOT_H_
#define VERILATED_VENABLETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VEnableTester__Syms;
VL_MODULE(VEnableTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*4:0*/ EnableTester__DOT__cntEnVal;
    CData/*4:0*/ EnableTester__DOT___cntEnVal_wrap_value_T_1;
    CData/*5:0*/ EnableTester__DOT__done_value;
    CData/*0:0*/ EnableTester__DOT__done_wrap_wrap;
    CData/*5:0*/ EnableTester__DOT___done_wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    IData/*28:0*/ EnableTester__DOT__ens;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VEnableTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VEnableTester___024root(const char* name);
    ~VEnableTester___024root();
    VL_UNCOPYABLE(VEnableTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VEnableTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
