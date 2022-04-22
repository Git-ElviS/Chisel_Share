// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VLFSRMaxPeriod.h for the primary calling header

#ifndef VERILATED_VLFSRMAXPERIOD___024ROOT_H_
#define VERILATED_VLFSRMAXPERIOD___024ROOT_H_  // guard

#include "verilated.h"

class VLFSRMaxPeriod__Syms;
VL_MODULE(VLFSRMaxPeriod___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*6:0*/ LFSRMaxPeriod__DOT__rv_lo;
    CData/*0:0*/ LFSRMaxPeriod__DOT__started;
    CData/*0:0*/ LFSRMaxPeriod__DOT__wrap_wrap_wrap;
    CData/*0:0*/ LFSRMaxPeriod__DOT__rv_prng__DOT__state_0;
    CData/*0:0*/ LFSRMaxPeriod__DOT__rv_prng__DOT__state_1;
    CData/*0:0*/ LFSRMaxPeriod__DOT__rv_prng__DOT__state_2;
    CData/*0:0*/ LFSRMaxPeriod__DOT__rv_prng__DOT__state_3;
    CData/*0:0*/ LFSRMaxPeriod__DOT__rv_prng__DOT__state_4;
    CData/*0:0*/ LFSRMaxPeriod__DOT__rv_prng__DOT__state_5;
    CData/*0:0*/ LFSRMaxPeriod__DOT__rv_prng__DOT__state_6;
    CData/*0:0*/ LFSRMaxPeriod__DOT__rv_prng__DOT__state_7;
    CData/*0:0*/ LFSRMaxPeriod__DOT__rv_prng__DOT__state_8;
    CData/*0:0*/ LFSRMaxPeriod__DOT__rv_prng__DOT__state_9;
    CData/*0:0*/ LFSRMaxPeriod__DOT__rv_prng__DOT__state_10;
    CData/*0:0*/ LFSRMaxPeriod__DOT__rv_prng__DOT__state_11;
    CData/*0:0*/ LFSRMaxPeriod__DOT__rv_prng__DOT__state_12;
    CData/*0:0*/ LFSRMaxPeriod__DOT__rv_prng__DOT__state_13;
    CData/*0:0*/ LFSRMaxPeriod__DOT__rv_prng__DOT__state_14;
    CData/*0:0*/ __Vclklast__TOP__clock;
    SData/*14:0*/ LFSRMaxPeriod__DOT__rv;
    SData/*14:0*/ LFSRMaxPeriod__DOT__seed;
    SData/*14:0*/ LFSRMaxPeriod__DOT__wrap_value;
    SData/*14:0*/ LFSRMaxPeriod__DOT___wrap_wrap_value_T_1;
    SData/*14:0*/ LFSRMaxPeriod__DOT__last;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VLFSRMaxPeriod__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VLFSRMaxPeriod___024root(const char* name);
    ~VLFSRMaxPeriod___024root();
    VL_UNCOPYABLE(VLFSRMaxPeriod___024root);

    // INTERNAL METHODS
    void __Vconfigure(VLFSRMaxPeriod__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
