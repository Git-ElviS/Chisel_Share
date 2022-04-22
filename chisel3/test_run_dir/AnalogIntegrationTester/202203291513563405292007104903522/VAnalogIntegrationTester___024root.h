// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAnalogIntegrationTester.h for the primary calling header

#ifndef VERILATED_VANALOGINTEGRATIONTESTER___024ROOT_H_
#define VERILATED_VANALOGINTEGRATIONTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VAnalogIntegrationTester__Syms;
VL_MODULE(VAnalogIntegrationTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ AnalogIntegrationTester__DOT__cycle;
    CData/*1:0*/ AnalogIntegrationTester__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VAnalogIntegrationTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VAnalogIntegrationTester___024root(const char* name);
    ~VAnalogIntegrationTester___024root();
    VL_UNCOPYABLE(VAnalogIntegrationTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VAnalogIntegrationTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
