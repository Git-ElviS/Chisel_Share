// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDetectTwoOnesTester.h for the primary calling header

#ifndef VERILATED_VDETECTTWOONESTESTER___024ROOT_H_
#define VERILATED_VDETECTTWOONESTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VDetectTwoOnesTester__Syms;
VL_MODULE(VDetectTwoOnesTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ DetectTwoOnesTester__DOT__dut_io_in;
    CData/*3:0*/ DetectTwoOnesTester__DOT__cycle;
    CData/*0:0*/ DetectTwoOnesTester__DOT__wrap_wrap;
    CData/*3:0*/ DetectTwoOnesTester__DOT___wrap_value_T_1;
    CData/*1:0*/ DetectTwoOnesTester__DOT__dut__DOT__state;
    CData/*1:0*/ DetectTwoOnesTester__DOT__dut__DOT___GEN_2;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VDetectTwoOnesTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VDetectTwoOnesTester___024root(const char* name);
    ~VDetectTwoOnesTester___024root();
    VL_UNCOPYABLE(VDetectTwoOnesTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VDetectTwoOnesTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
