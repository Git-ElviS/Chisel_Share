// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPRNGStepTest.h for the primary calling header

#ifndef VERILATED_VPRNGSTEPTEST___024ROOT_H_
#define VERILATED_VPRNGSTEPTEST___024ROOT_H_  // guard

#include "verilated.h"

class VPRNGStepTest__Syms;
VL_MODULE(VPRNGStepTest___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ PRNGStepTest__DOT__count2;
    CData/*0:0*/ PRNGStepTest__DOT___count2_wrap_value_T_1;
    CData/*1:0*/ PRNGStepTest__DOT__count4;
    CData/*1:0*/ PRNGStepTest__DOT___count4_wrap_value_T_1;
    CData/*3:0*/ PRNGStepTest__DOT__done_value;
    CData/*3:0*/ PRNGStepTest__DOT___done_wrap_value_T_1;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_0;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_1;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_2;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_3;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_4;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_5;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_6;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_7;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_8;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_9;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_10;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_11;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_12;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_13;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_14;
    CData/*0:0*/ PRNGStepTest__DOT__a_prng__DOT__state_15;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_0;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_1;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_2;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_3;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_4;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_5;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_6;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_7;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_8;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_9;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_10;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_11;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_12;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_13;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_14;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT__state_15;
    CData/*0:0*/ PRNGStepTest__DOT__b_prng__DOT___GEN_0;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_0;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_1;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_2;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_3;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_4;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_5;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_6;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_7;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_8;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_9;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_10;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_11;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_12;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_13;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_14;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT__state_15;
    CData/*0:0*/ PRNGStepTest__DOT__c_prng__DOT___GEN_0;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VPRNGStepTest__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VPRNGStepTest___024root(const char* name);
    ~VPRNGStepTest___024root();
    VL_UNCOPYABLE(VPRNGStepTest___024root);

    // INTERNAL METHODS
    void __Vconfigure(VPRNGStepTest__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
