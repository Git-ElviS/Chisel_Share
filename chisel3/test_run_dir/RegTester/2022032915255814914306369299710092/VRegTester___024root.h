// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegTester.h for the primary calling header

#ifndef VERILATED_VREGTESTER___024ROOT_H_
#define VERILATED_VREGTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VRegTester__Syms;
VL_MODULE(VRegTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ RegTester__DOT__doneReg;
    CData/*1:0*/ RegTester__DOT__dut__DOT__vecReg_2;
    CData/*1:0*/ RegTester__DOT__dut__DOT__vecReg_3;
    CData/*1:0*/ RegTester__DOT__dut__DOT__vecReg_4;
    CData/*1:0*/ RegTester__DOT__dut__DOT__vecReg_5;
    CData/*1:0*/ RegTester__DOT__dut__DOT__vecReg_6;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VRegTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VRegTester___024root(const char* name);
    ~VRegTester___024root();
    VL_UNCOPYABLE(VRegTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VRegTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
