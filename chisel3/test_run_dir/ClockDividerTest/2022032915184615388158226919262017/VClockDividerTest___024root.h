// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VClockDividerTest.h for the primary calling header

#ifndef VERILATED_VCLOCKDIVIDERTEST___024ROOT_H_
#define VERILATED_VCLOCKDIVIDERTEST___024ROOT_H_  // guard

#include "verilated.h"

class VClockDividerTest__Syms;
VL_MODULE(VClockDividerTest___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    CData/*0:0*/ ClockDividerTest__DOT__cDiv;
    VL_IN8(reset,0,0);
    CData/*7:0*/ ClockDividerTest__DOT__reg1;
    CData/*7:0*/ ClockDividerTest__DOT___reg1_T_1;
    CData/*7:0*/ ClockDividerTest__DOT__reg2;
    CData/*7:0*/ ClockDividerTest__DOT___reg2_T_1;
    CData/*0:0*/ __VinpClk__TOP__ClockDividerTest__DOT__cDiv;
    CData/*0:0*/ __Vclklast__TOP__clock;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__ClockDividerTest__DOT__cDiv;
    CData/*0:0*/ __Vchglast__TOP__ClockDividerTest__DOT__cDiv;

    // INTERNAL VARIABLES
    VClockDividerTest__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VClockDividerTest___024root(const char* name);
    ~VClockDividerTest___024root();
    VL_UNCOPYABLE(VClockDividerTest___024root);

    // INTERNAL METHODS
    void __Vconfigure(VClockDividerTest__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
