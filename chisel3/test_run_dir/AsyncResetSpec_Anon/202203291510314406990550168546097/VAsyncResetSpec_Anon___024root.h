// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAsyncResetSpec_Anon.h for the primary calling header

#ifndef VERILATED_VASYNCRESETSPEC_ANON___024ROOT_H_
#define VERILATED_VASYNCRESETSPEC_ANON___024ROOT_H_  // guard

#include "verilated.h"

class VAsyncResetSpec_Anon__Syms;
VL_MODULE(VAsyncResetSpec_Anon___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*7:0*/ AsyncResetSpec_Anon__DOT__reg_0;
    CData/*7:0*/ AsyncResetSpec_Anon__DOT__reg_1;
    CData/*7:0*/ AsyncResetSpec_Anon__DOT__reg_2;
    CData/*7:0*/ AsyncResetSpec_Anon__DOT__reg_3;
    CData/*1:0*/ AsyncResetSpec_Anon__DOT__count;
    CData/*1:0*/ AsyncResetSpec_Anon__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    CData/*0:0*/ __Vclklast__TOP__reset;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VAsyncResetSpec_Anon__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VAsyncResetSpec_Anon___024root(const char* name);
    ~VAsyncResetSpec_Anon___024root();
    VL_UNCOPYABLE(VAsyncResetSpec_Anon___024root);

    // INTERNAL METHODS
    void __Vconfigure(VAsyncResetSpec_Anon__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
