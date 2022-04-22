// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimpleVendingMachineTester.h for the primary calling header

#ifndef VERILATED_VSIMPLEVENDINGMACHINETESTER___024ROOT_H_
#define VERILATED_VSIMPLEVENDINGMACHINETESTER___024ROOT_H_  // guard

#include "verilated.h"

class VSimpleVendingMachineTester__Syms;
VL_MODULE(VSimpleVendingMachineTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*3:0*/ SimpleVendingMachineTester__DOT__cycle;
    CData/*0:0*/ SimpleVendingMachineTester__DOT__wrap_wrap;
    CData/*3:0*/ SimpleVendingMachineTester__DOT___wrap_value_T_1;
    CData/*2:0*/ SimpleVendingMachineTester__DOT__dut__DOT__value;
    CData/*0:0*/ SimpleVendingMachineTester__DOT__dut__DOT__doDispense;
    CData/*2:0*/ SimpleVendingMachineTester__DOT__dut__DOT___value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VSimpleVendingMachineTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSimpleVendingMachineTester___024root(const char* name);
    ~VSimpleVendingMachineTester___024root();
    VL_UNCOPYABLE(VSimpleVendingMachineTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSimpleVendingMachineTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
