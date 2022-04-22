// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMultiClockMemTest.h for the primary calling header

#ifndef VERILATED_VMULTICLOCKMEMTEST___024ROOT_H_
#define VERILATED_VMULTICLOCKMEMTEST___024ROOT_H_  // guard

#include "verilated.h"

class VMultiClockMemTest__Syms;
VL_MODULE(VMultiClockMemTest___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    CData/*0:0*/ MultiClockMemTest__DOT__cDiv;
    VL_IN8(reset,0,0);
    CData/*4:0*/ MultiClockMemTest__DOT__cycle;
    CData/*0:0*/ MultiClockMemTest__DOT__wrap_wrap;
    CData/*4:0*/ MultiClockMemTest__DOT___wrap_value_T_1;
    CData/*2:0*/ MultiClockMemTest__DOT__waddr;
    CData/*2:0*/ MultiClockMemTest__DOT___waddr_T_1;
    CData/*2:0*/ __Vdlyvdim0__MultiClockMemTest__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__MultiClockMemTest__DOT__mem__v0;
    CData/*2:0*/ __Vdlyvdim0__MultiClockMemTest__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__MultiClockMemTest__DOT__mem__v1;
    CData/*0:0*/ __VinpClk__TOP__MultiClockMemTest__DOT__cDiv;
    CData/*0:0*/ __Vclklast__TOP__clock;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__MultiClockMemTest__DOT__cDiv;
    CData/*0:0*/ __Vchglast__TOP__MultiClockMemTest__DOT__cDiv;
    VlUnpacked<IData/*31:0*/, 8> MultiClockMemTest__DOT__mem;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VMultiClockMemTest__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMultiClockMemTest___024root(const char* name);
    ~VMultiClockMemTest___024root();
    VL_UNCOPYABLE(VMultiClockMemTest___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMultiClockMemTest__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
