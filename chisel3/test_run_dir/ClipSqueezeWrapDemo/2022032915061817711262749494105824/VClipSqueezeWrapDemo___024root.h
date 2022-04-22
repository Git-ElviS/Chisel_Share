// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VClipSqueezeWrapDemo.h for the primary calling header

#ifndef VERILATED_VCLIPSQUEEZEWRAPDEMO___024ROOT_H_
#define VERILATED_VCLIPSQUEEZEWRAPDEMO___024ROOT_H_  // guard

#include "verilated.h"

class VClipSqueezeWrapDemo__Syms;
VL_MODULE(VClipSqueezeWrapDemo___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*4:0*/ ClipSqueezeWrapDemo__DOT__counter;
    CData/*4:0*/ ClipSqueezeWrapDemo__DOT___counter_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VClipSqueezeWrapDemo__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VClipSqueezeWrapDemo___024root(const char* name);
    ~VClipSqueezeWrapDemo___024root();
    VL_UNCOPYABLE(VClipSqueezeWrapDemo___024root);

    // INTERNAL METHODS
    void __Vconfigure(VClipSqueezeWrapDemo__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
