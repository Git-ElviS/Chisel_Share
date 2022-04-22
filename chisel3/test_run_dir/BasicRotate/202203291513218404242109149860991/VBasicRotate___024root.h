// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBasicRotate.h for the primary calling header

#ifndef VERILATED_VBASICROTATE___024ROOT_H_
#define VERILATED_VBASICROTATE___024ROOT_H_  // guard

#include "verilated.h"

class VBasicRotate__Syms;
VL_MODULE(VBasicRotate___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*3:0*/ BasicRotate__DOT__shiftAmount;
    CData/*3:0*/ BasicRotate__DOT__ctr;
    CData/*2:0*/ BasicRotate__DOT___rotL_T_15;
    CData/*2:0*/ BasicRotate__DOT___rotR_T_14;
    CData/*0:0*/ BasicRotate__DOT___T_5;
    CData/*3:0*/ BasicRotate__DOT___ctr_T_1;
    CData/*0:0*/ BasicRotate__DOT__shiftAmount_prng__DOT__state_0;
    CData/*0:0*/ BasicRotate__DOT__shiftAmount_prng__DOT__state_1;
    CData/*0:0*/ BasicRotate__DOT__shiftAmount_prng__DOT__state_2;
    CData/*0:0*/ BasicRotate__DOT__shiftAmount_prng__DOT__state_3;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VBasicRotate__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBasicRotate___024root(const char* name);
    ~VBasicRotate___024root();
    VL_UNCOPYABLE(VBasicRotate___024root);

    // INTERNAL METHODS
    void __Vconfigure(VBasicRotate__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
