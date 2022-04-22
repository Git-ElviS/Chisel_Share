// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VParameterizedVendingMachineTester.h for the primary calling header

#ifndef VERILATED_VPARAMETERIZEDVENDINGMACHINETESTER___024ROOT_H_
#define VERILATED_VPARAMETERIZEDVENDINGMACHINETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VParameterizedVendingMachineTester__Syms;
VL_MODULE(VParameterizedVendingMachineTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*6:0*/ ParameterizedVendingMachineTester__DOT__idx;
    CData/*0:0*/ ParameterizedVendingMachineTester__DOT__wrap_wrap;
    CData/*6:0*/ ParameterizedVendingMachineTester__DOT___wrap_value_T_1;
    CData/*1:0*/ ParameterizedVendingMachineTester__DOT___GEN_102;
    CData/*0:0*/ ParameterizedVendingMachineTester__DOT___GEN_186;
    CData/*2:0*/ ParameterizedVendingMachineTester__DOT__dut__DOT__value;
    CData/*0:0*/ ParameterizedVendingMachineTester__DOT__dut__DOT__doDispense;
    CData/*2:0*/ ParameterizedVendingMachineTester__DOT__dut__DOT___value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VParameterizedVendingMachineTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VParameterizedVendingMachineTester___024root(const char* name);
    ~VParameterizedVendingMachineTester___024root();
    VL_UNCOPYABLE(VParameterizedVendingMachineTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VParameterizedVendingMachineTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
