// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAsyncResetAggregateTester.h for the primary calling header

#ifndef VERILATED_VASYNCRESETAGGREGATETESTER___024ROOT_H_
#define VERILATED_VASYNCRESETAGGREGATETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VAsyncResetAggregateTester__Syms;
VL_MODULE(VAsyncResetAggregateTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    CData/*0:0*/ AsyncResetAggregateTester__DOT__slowClk;
    CData/*0:0*/ AsyncResetAggregateTester__DOT__asyncResetNext;
    VL_IN8(reset,0,0);
    CData/*1:0*/ AsyncResetAggregateTester__DOT__cDiv_value;
    CData/*1:0*/ AsyncResetAggregateTester__DOT___cDiv_wrap_value_T_1;
    CData/*3:0*/ AsyncResetAggregateTester__DOT__count;
    CData/*3:0*/ AsyncResetAggregateTester__DOT___wrap_value_T_1;
    CData/*7:0*/ AsyncResetAggregateTester__DOT__reg_0_x;
    CData/*7:0*/ AsyncResetAggregateTester__DOT__reg_0_y;
    CData/*7:0*/ AsyncResetAggregateTester__DOT__reg_1_x;
    CData/*7:0*/ AsyncResetAggregateTester__DOT__reg_1_y;
    CData/*0:0*/ AsyncResetAggregateTester__DOT___T_19;
    CData/*0:0*/ __VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext;
    CData/*0:0*/ __Vclklast__TOP__clock;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__AsyncResetAggregateTester__DOT__asyncResetNext;
    CData/*0:0*/ __Vclklast__TOP__AsyncResetAggregateTester__DOT__slowClk;
    CData/*0:0*/ __Vchglast__TOP__AsyncResetAggregateTester__DOT__asyncResetNext;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VAsyncResetAggregateTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VAsyncResetAggregateTester___024root(const char* name);
    ~VAsyncResetAggregateTester___024root();
    VL_UNCOPYABLE(VAsyncResetAggregateTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VAsyncResetAggregateTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
