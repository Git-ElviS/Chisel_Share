// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMultiClockSpec_Anon.h for the primary calling header

#ifndef VERILATED_VMULTICLOCKSPEC_ANON___024ROOT_H_
#define VERILATED_VMULTICLOCKSPEC_ANON___024ROOT_H_  // guard

#include "verilated.h"

class VMultiClockSpec_Anon__Syms;
VL_MODULE(VMultiClockSpec_Anon___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ MultiClockSpec_Anon__DOT__done_value;
    CData/*1:0*/ MultiClockSpec_Anon__DOT___done_wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VMultiClockSpec_Anon__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMultiClockSpec_Anon___024root(const char* name);
    ~VMultiClockSpec_Anon___024root();
    VL_UNCOPYABLE(VMultiClockSpec_Anon___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMultiClockSpec_Anon__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
