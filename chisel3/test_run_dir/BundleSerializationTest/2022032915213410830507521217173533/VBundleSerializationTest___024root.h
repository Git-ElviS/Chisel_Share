// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBundleSerializationTest.h for the primary calling header

#ifndef VERILATED_VBUNDLESERIALIZATIONTEST___024ROOT_H_
#define VERILATED_VBUNDLESERIALIZATIONTEST___024ROOT_H_  // guard

#include "verilated.h"

class VBundleSerializationTest__Syms;
VL_MODULE(VBundleSerializationTest___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VBundleSerializationTest__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBundleSerializationTest___024root(const char* name);
    ~VBundleSerializationTest___024root();
    VL_UNCOPYABLE(VBundleSerializationTest___024root);

    // INTERNAL METHODS
    void __Vconfigure(VBundleSerializationTest__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
