// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VGCDTester.h for the primary calling header

#ifndef VERILATED_VGCDTESTER___024ROOT_H_
#define VERILATED_VGCDTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VGCDTester__Syms;
VL_MODULE(VGCDTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ GCDTester__DOT__first;
    CData/*0:0*/ GCDTester__DOT___GEN_0;
    CData/*0:0*/ __Vclklast__TOP__clock;
    IData/*31:0*/ GCDTester__DOT__dut__DOT__x;
    IData/*31:0*/ GCDTester__DOT__dut__DOT__y;
    IData/*31:0*/ GCDTester__DOT__dut__DOT___x_T_1;
    IData/*31:0*/ GCDTester__DOT__dut__DOT___y_T_1;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VGCDTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VGCDTester___024root(const char* name);
    ~VGCDTester___024root();
    VL_UNCOPYABLE(VGCDTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VGCDTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
