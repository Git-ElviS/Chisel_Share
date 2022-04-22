// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VShiftRegisterTester.h for the primary calling header

#ifndef VERILATED_VSHIFTREGISTERTESTER___024ROOT_H_
#define VERILATED_VSHIFTREGISTERTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VShiftRegisterTester__Syms;
VL_MODULE(VShiftRegisterTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ ShiftRegisterTester__DOT__cnt;
    CData/*1:0*/ ShiftRegisterTester__DOT___wrap_value_T_1;
    CData/*0:0*/ ShiftRegisterTester__DOT__shifter_0;
    CData/*0:0*/ ShiftRegisterTester__DOT__shifter_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VShiftRegisterTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VShiftRegisterTester___024root(const char* name);
    ~VShiftRegisterTester___024root();
    VL_UNCOPYABLE(VShiftRegisterTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VShiftRegisterTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
