// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMultiClockSubModuleTest.h for the primary calling header

#ifndef VERILATED_VMULTICLOCKSUBMODULETEST___024ROOT_H_
#define VERILATED_VMULTICLOCKSUBMODULETEST___024ROOT_H_  // guard

#include "verilated.h"

class VMultiClockSubModuleTest__Syms;
VL_MODULE(VMultiClockSubModuleTest___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    CData/*0:0*/ MultiClockSubModuleTest__DOT__cDiv;
    VL_IN8(reset,0,0);
    CData/*3:0*/ MultiClockSubModuleTest__DOT__cycle;
    CData/*0:0*/ MultiClockSubModuleTest__DOT__wrap_wrap;
    CData/*3:0*/ MultiClockSubModuleTest__DOT___wrap_value_T_1;
    CData/*3:0*/ MultiClockSubModuleTest__DOT__inst__DOT__cycle;
    CData/*0:0*/ MultiClockSubModuleTest__DOT__inst__DOT__cycle_wrap_wrap;
    CData/*3:0*/ MultiClockSubModuleTest__DOT__inst__DOT___cycle_wrap_value_T_1;
    CData/*0:0*/ __VinpClk__TOP__MultiClockSubModuleTest__DOT__cDiv;
    CData/*0:0*/ __Vclklast__TOP__clock;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__MultiClockSubModuleTest__DOT__cDiv;
    CData/*0:0*/ __Vchglast__TOP__MultiClockSubModuleTest__DOT__cDiv;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VMultiClockSubModuleTest__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMultiClockSubModuleTest___024root(const char* name);
    ~VMultiClockSubModuleTest___024root();
    VL_UNCOPYABLE(VMultiClockSubModuleTest___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMultiClockSubModuleTest__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
