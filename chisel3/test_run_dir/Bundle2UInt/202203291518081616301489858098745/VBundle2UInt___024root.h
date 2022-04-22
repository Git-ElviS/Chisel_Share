// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBundle2UInt.h for the primary calling header

#ifndef VERILATED_VBUNDLE2UINT___024ROOT_H_
#define VERILATED_VBUNDLE2UINT___024ROOT_H_  // guard

#include "verilated.h"

class VBundle2UInt__Syms;
VL_MODULE(VBundle2UInt___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ Bundle2UInt__DOT__cycle;
    CData/*0:0*/ Bundle2UInt__DOT___wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VBundle2UInt__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBundle2UInt___024root(const char* name);
    ~VBundle2UInt___024root();
    VL_UNCOPYABLE(VBundle2UInt___024root);

    // INTERNAL METHODS
    void __Vconfigure(VBundle2UInt__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
