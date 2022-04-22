// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VShiftResetTester.h for the primary calling header

#ifndef VERILATED_VSHIFTRESETTESTER___024ROOT_H_
#define VERILATED_VSHIFTRESETTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VShiftResetTester__Syms;
VL_MODULE(VShiftResetTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ ShiftResetTester__DOT__cntVal;
    CData/*0:0*/ ShiftResetTester__DOT___wrap_value_T_1;
    CData/*4:0*/ ShiftResetTester__DOT__sr_r;
    CData/*4:0*/ ShiftResetTester__DOT__sr_r_1;
    CData/*4:0*/ ShiftResetTester__DOT__sr;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VShiftResetTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VShiftResetTester___024root(const char* name);
    ~VShiftResetTester___024root();
    VL_UNCOPYABLE(VShiftResetTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VShiftResetTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
