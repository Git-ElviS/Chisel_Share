// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPRNGUpdateSeedTest.h for the primary calling header

#ifndef VERILATED_VPRNGUPDATESEEDTEST___024ROOT_H_
#define VERILATED_VPRNGUPDATESEEDTEST___024ROOT_H_  // guard

#include "verilated.h"

class VPRNGUpdateSeedTest__Syms;
VL_MODULE(VPRNGUpdateSeedTest___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ PRNGUpdateSeedTest__DOT__count;
    CData/*1:0*/ PRNGUpdateSeedTest__DOT___wrap_value_T_1;
    CData/*0:0*/ PRNGUpdateSeedTest__DOT__a__DOT__state_0;
    CData/*0:0*/ PRNGUpdateSeedTest__DOT__a__DOT__state_1;
    CData/*0:0*/ PRNGUpdateSeedTest__DOT__a__DOT__state_2;
    CData/*0:0*/ PRNGUpdateSeedTest__DOT__a__DOT__state_3;
    CData/*0:0*/ PRNGUpdateSeedTest__DOT__a__DOT__state_4;
    CData/*0:0*/ PRNGUpdateSeedTest__DOT__a__DOT__state_5;
    CData/*0:0*/ PRNGUpdateSeedTest__DOT__a__DOT__state_6;
    CData/*0:0*/ PRNGUpdateSeedTest__DOT__a__DOT__state_7;
    CData/*0:0*/ PRNGUpdateSeedTest__DOT__a__DOT__state_8;
    CData/*0:0*/ PRNGUpdateSeedTest__DOT__a__DOT__state_9;
    CData/*0:0*/ PRNGUpdateSeedTest__DOT__a__DOT__state_10;
    CData/*0:0*/ PRNGUpdateSeedTest__DOT__a__DOT__state_11;
    CData/*0:0*/ PRNGUpdateSeedTest__DOT__a__DOT__state_12;
    CData/*0:0*/ PRNGUpdateSeedTest__DOT__a__DOT__state_13;
    CData/*0:0*/ PRNGUpdateSeedTest__DOT__a__DOT__state_14;
    CData/*0:0*/ PRNGUpdateSeedTest__DOT__a__DOT__state_15;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VPRNGUpdateSeedTest__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VPRNGUpdateSeedTest___024root(const char* name);
    ~VPRNGUpdateSeedTest___024root();
    VL_UNCOPYABLE(VPRNGUpdateSeedTest___024root);

    // INTERNAL METHODS
    void __Vconfigure(VPRNGUpdateSeedTest__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
