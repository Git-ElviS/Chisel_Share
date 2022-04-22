// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRecordIOTester.h for the primary calling header

#ifndef VERILATED_VRECORDIOTESTER___024ROOT_H_
#define VERILATED_VRECORDIOTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VRecordIOTester__Syms;
VL_MODULE(VRecordIOTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VRecordIOTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VRecordIOTester___024root(const char* name);
    ~VRecordIOTester___024root();
    VL_UNCOPYABLE(VRecordIOTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VRecordIOTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
