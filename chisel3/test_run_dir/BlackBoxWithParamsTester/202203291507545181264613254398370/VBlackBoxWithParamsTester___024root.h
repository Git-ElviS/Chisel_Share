// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBlackBoxWithParamsTester.h for the primary calling header

#ifndef VERILATED_VBLACKBOXWITHPARAMSTESTER___024ROOT_H_
#define VERILATED_VBLACKBOXWITHPARAMSTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VBlackBoxWithParamsTester__Syms;
VL_MODULE(VBlackBoxWithParamsTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ BlackBoxWithParamsTester__DOT__cycles;
    CData/*1:0*/ BlackBoxWithParamsTester__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VBlackBoxWithParamsTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBlackBoxWithParamsTester___024root(const char* name);
    ~VBlackBoxWithParamsTester___024root();
    VL_UNCOPYABLE(VBlackBoxWithParamsTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VBlackBoxWithParamsTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
