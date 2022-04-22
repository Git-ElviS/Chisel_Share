// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPipelinedResetTester.h for the primary calling header

#ifndef VERILATED_VPIPELINEDRESETTESTER___024ROOT_H_
#define VERILATED_VPIPELINEDRESETTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VPipelinedResetTester__Syms;
VL_MODULE(VPipelinedResetTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ PipelinedResetTester__DOT__done_value;
    CData/*1:0*/ PipelinedResetTester__DOT___done_wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VPipelinedResetTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VPipelinedResetTester___024root(const char* name);
    ~VPipelinedResetTester___024root();
    VL_UNCOPYABLE(VPipelinedResetTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VPipelinedResetTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
