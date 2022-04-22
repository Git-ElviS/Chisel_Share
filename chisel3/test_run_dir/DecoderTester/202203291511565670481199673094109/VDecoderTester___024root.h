// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDecoderTester.h for the primary calling header

#ifndef VERILATED_VDECODERTESTER___024ROOT_H_
#define VERILATED_VDECODERTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VDecoderTester__Syms;
VL_MODULE(VDecoderTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ DecoderTester__DOT__cnt;
    CData/*1:0*/ DecoderTester__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VDecoderTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VDecoderTester___024root(const char* name);
    ~VDecoderTester___024root();
    VL_UNCOPYABLE(VDecoderTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VDecoderTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
