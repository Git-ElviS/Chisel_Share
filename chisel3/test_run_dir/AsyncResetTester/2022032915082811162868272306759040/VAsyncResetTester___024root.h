// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAsyncResetTester.h for the primary calling header

#ifndef VERILATED_VASYNCRESETTESTER___024ROOT_H_
#define VERILATED_VASYNCRESETTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VAsyncResetTester__Syms;
VL_MODULE(VAsyncResetTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    CData/*0:0*/ AsyncResetTester__DOT__slowClk;
    CData/*0:0*/ AsyncResetTester__DOT__asyncResetNext;
    VL_IN8(reset,0,0);
    CData/*1:0*/ AsyncResetTester__DOT__cDiv_value;
    CData/*1:0*/ AsyncResetTester__DOT___cDiv_wrap_value_T_1;
    CData/*3:0*/ AsyncResetTester__DOT__count;
    CData/*3:0*/ AsyncResetTester__DOT___wrap_value_T_1;
    CData/*7:0*/ AsyncResetTester__DOT__reg_;
    CData/*0:0*/ __VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext;
    CData/*0:0*/ __Vclklast__TOP__clock;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__AsyncResetTester__DOT__asyncResetNext;
    CData/*0:0*/ __Vclklast__TOP__AsyncResetTester__DOT__slowClk;
    CData/*0:0*/ __Vchglast__TOP__AsyncResetTester__DOT__asyncResetNext;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VAsyncResetTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VAsyncResetTester___024root(const char* name);
    ~VAsyncResetTester___024root();
    VL_UNCOPYABLE(VAsyncResetTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VAsyncResetTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
