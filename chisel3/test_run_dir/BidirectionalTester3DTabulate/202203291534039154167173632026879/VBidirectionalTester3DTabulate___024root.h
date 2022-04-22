// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBidirectionalTester3DTabulate.h for the primary calling header

#ifndef VERILATED_VBIDIRECTIONALTESTER3DTABULATE___024ROOT_H_
#define VERILATED_VBIDIRECTIONALTESTER3DTABULATE___024ROOT_H_  // guard

#include "verilated.h"

class VBidirectionalTester3DTabulate__Syms;
VL_MODULE(VBidirectionalTester3DTabulate___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VBidirectionalTester3DTabulate__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBidirectionalTester3DTabulate___024root(const char* name);
    ~VBidirectionalTester3DTabulate___024root();
    VL_UNCOPYABLE(VBidirectionalTester3DTabulate___024root);

    // INTERNAL METHODS
    void __Vconfigure(VBidirectionalTester3DTabulate__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
