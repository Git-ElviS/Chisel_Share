// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMemVecTester.h for the primary calling header

#ifndef VERILATED_VMEMVECTESTER___024ROOT_H_
#define VERILATED_VMEMVECTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VMemVecTester__Syms;
VL_MODULE(VMemVecTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ MemVecTester__DOT__cnt;
    CData/*0:0*/ MemVecTester__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*7:0*/, 2> MemVecTester__DOT__mem_0;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VMemVecTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMemVecTester___024root(const char* name);
    ~VMemVecTester___024root();
    VL_UNCOPYABLE(VMemVecTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMemVecTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
