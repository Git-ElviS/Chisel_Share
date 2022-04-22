// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRangeTester.h for the primary calling header

#ifndef VERILATED_VRANGETESTER___024ROOT_H_
#define VERILATED_VRANGETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VRangeTester__Syms;
VL_MODULE(VRangeTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*3:0*/ RangeTester__DOT__cnt;
    CData/*0:0*/ RangeTester__DOT__wrap_wrap;
    CData/*3:0*/ RangeTester__DOT___wrap_value_T_1;
    CData/*0:0*/ RangeTester__DOT__checkWrap;
    CData/*0:0*/ RangeTester__DOT___GEN_5;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VRangeTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VRangeTester___024root(const char* name);
    ~VRangeTester___024root();
    VL_UNCOPYABLE(VRangeTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VRangeTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
