// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VShiftsTester.h for the primary calling header

#ifndef VERILATED_VSHIFTSTESTER___024ROOT_H_
#define VERILATED_VSHIFTSTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VShiftsTester__Syms;
VL_MODULE(VShiftsTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ ShiftsTester__DOT__cntVal;
    CData/*0:0*/ ShiftsTester__DOT___wrap_value_T_1;
    CData/*4:0*/ ShiftsTester__DOT__srs_0;
    CData/*4:0*/ ShiftsTester__DOT__srs_1;
    CData/*0:0*/ ShiftsTester__DOT__REG;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VShiftsTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VShiftsTester___024root(const char* name);
    ~VShiftsTester___024root();
    VL_UNCOPYABLE(VShiftsTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VShiftsTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
