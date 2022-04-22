// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFill3DTester.h for the primary calling header

#ifndef VERILATED_VFILL3DTESTER___024ROOT_H_
#define VERILATED_VFILL3DTESTER___024ROOT_H_  // guard

#include "verilated.h"

class VFill3DTester__Syms;
VL_MODULE(VFill3DTester___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VFill3DTester__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VFill3DTester___024root(const char* name);
    ~VFill3DTester___024root();
    VL_UNCOPYABLE(VFill3DTester___024root);

    // INTERNAL METHODS
    void __Vconfigure(VFill3DTester__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
