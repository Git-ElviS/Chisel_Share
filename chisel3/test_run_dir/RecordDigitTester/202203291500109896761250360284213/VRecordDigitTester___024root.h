// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRecordDigitTester.h for the primary calling header

#ifndef VERILATED_VRECORDDIGITTESTER___024ROOT_H_
#define VERILATED_VRECORDDIGITTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VRecordDigitTester__Syms;
VL_MODULE(VRecordDigitTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VRecordDigitTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VRecordDigitTester___024root(const char* name);
    ~VRecordDigitTester___024root();
    VL_UNCOPYABLE(VRecordDigitTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VRecordDigitTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
