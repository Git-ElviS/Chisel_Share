// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VStrongEnumFSMTester.h for the primary calling header

#ifndef VERILATED_VSTRONGENUMFSMTESTER___024ROOT_H_
#define VERILATED_VSTRONGENUMFSMTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VStrongEnumFSMTester__Syms;
VL_MODULE(VStrongEnumFSMTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ StrongEnumFSMTester__DOT__dut_io_in;
    CData/*3:0*/ StrongEnumFSMTester__DOT__value;
    CData/*0:0*/ StrongEnumFSMTester__DOT__wrap;
    CData/*3:0*/ StrongEnumFSMTester__DOT___value_T_1;
    CData/*1:0*/ StrongEnumFSMTester__DOT__dut__DOT__state;
    CData/*1:0*/ StrongEnumFSMTester__DOT__dut__DOT___GEN_2;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VStrongEnumFSMTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VStrongEnumFSMTester___024root(const char* name);
    ~VStrongEnumFSMTester___024root();
    VL_UNCOPYABLE(VStrongEnumFSMTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VStrongEnumFSMTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
