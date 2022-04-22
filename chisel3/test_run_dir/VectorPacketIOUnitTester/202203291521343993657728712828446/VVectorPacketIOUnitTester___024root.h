// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVectorPacketIOUnitTester.h for the primary calling header

#ifndef VERILATED_VVECTORPACKETIOUNITTESTER___024ROOT_H_
#define VERILATED_VVECTORPACKETIOUNITTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VVectorPacketIOUnitTester__Syms;
VL_MODULE(VVectorPacketIOUnitTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VVectorPacketIOUnitTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VVectorPacketIOUnitTester___024root(const char* name);
    ~VVectorPacketIOUnitTester___024root();
    VL_UNCOPYABLE(VVectorPacketIOUnitTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VVectorPacketIOUnitTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
