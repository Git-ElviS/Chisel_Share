// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTblTester.h for the primary calling header

#ifndef VERILATED_VTBLTESTER___024ROOT_H_
#define VERILATED_VTBLTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VTblTester__Syms;
VL_MODULE(VTblTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*3:0*/ TblTester__DOT__dut_io_wi;
    CData/*3:0*/ TblTester__DOT__dut_io_ri;
    CData/*3:0*/ TblTester__DOT__dut_io_d;
    CData/*2:0*/ TblTester__DOT__cnt;
    CData/*2:0*/ TblTester__DOT___wrap_value_T_1;
    CData/*3:0*/ TblTester__DOT___GEN_8;
    CData/*3:0*/ TblTester__DOT___GEN_16;
    CData/*3:0*/ TblTester__DOT___GEN_24;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*3:0*/, 16> TblTester__DOT__dut__DOT__m;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VTblTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VTblTester___024root(const char* name);
    ~VTblTester___024root();
    VL_UNCOPYABLE(VTblTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VTblTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
