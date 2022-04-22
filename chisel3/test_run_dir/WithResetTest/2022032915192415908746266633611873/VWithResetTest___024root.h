// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VWithResetTest.h for the primary calling header

#ifndef VERILATED_VWITHRESETTEST___024ROOT_H_
#define VERILATED_VWITHRESETTEST___024ROOT_H_  // guard

#include "verilated.h"

class VWithResetTest__Syms;
VL_MODULE(VWithResetTest___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*3:0*/ WithResetTest__DOT__cycle;
    CData/*7:0*/ WithResetTest__DOT__reg_;
    CData/*7:0*/ WithResetTest__DOT___reg_T_3;
    CData/*0:0*/ WithResetTest__DOT__wrap_wrap;
    CData/*3:0*/ WithResetTest__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VWithResetTest__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VWithResetTest___024root(const char* name);
    ~VWithResetTest___024root();
    VL_UNCOPYABLE(VWithResetTest___024root);

    // INTERNAL METHODS
    void __Vconfigure(VWithResetTest__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
