// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VLFSRResetTester.h for the primary calling header

#ifndef VERILATED_VLFSRRESETTESTER___024ROOT_H_
#define VERILATED_VLFSRRESETTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VLFSRResetTester__Syms;
VL_MODULE(VLFSRResetTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*2:0*/ LFSRResetTester__DOT__count;
    CData/*0:0*/ LFSRResetTester__DOT__wrap_wrap;
    CData/*2:0*/ LFSRResetTester__DOT___wrap_value_T_1;
    CData/*0:0*/ LFSRResetTester__DOT__lfsr__DOT__state_0;
    CData/*0:0*/ LFSRResetTester__DOT__lfsr__DOT___GEN_4;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VLFSRResetTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VLFSRResetTester___024root(const char* name);
    ~VLFSRResetTester___024root();
    VL_UNCOPYABLE(VLFSRResetTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VLFSRResetTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
