// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBlackBoxWithClockTester.h for the primary calling header

#ifndef VERILATED_VBLACKBOXWITHCLOCKTESTER___024ROOT_H_
#define VERILATED_VBLACKBOXWITHCLOCKTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VBlackBoxWithClockTester__Syms;
VL_MODULE(VBlackBoxWithClockTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ BlackBoxWithClockTester__DOT__model;
    CData/*3:0*/ BlackBoxWithClockTester__DOT__cycles;
    CData/*0:0*/ BlackBoxWithClockTester__DOT__wrap_wrap;
    CData/*3:0*/ BlackBoxWithClockTester__DOT___wrap_value_T_1;
    CData/*0:0*/ BlackBoxWithClockTester__DOT__blackBox__DOT__register;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VBlackBoxWithClockTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBlackBoxWithClockTester___024root(const char* name);
    ~VBlackBoxWithClockTester___024root();
    VL_UNCOPYABLE(VBlackBoxWithClockTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VBlackBoxWithClockTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
