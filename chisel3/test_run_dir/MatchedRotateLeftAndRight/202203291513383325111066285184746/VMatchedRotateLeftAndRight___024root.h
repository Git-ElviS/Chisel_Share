// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMatchedRotateLeftAndRight.h for the primary calling header

#ifndef VERILATED_VMATCHEDROTATELEFTANDRIGHT___024ROOT_H_
#define VERILATED_VMATCHEDROTATELEFTANDRIGHT___024ROOT_H_  // guard

#include "verilated.h"

class VMatchedRotateLeftAndRight__Syms;
VL_MODULE(VMatchedRotateLeftAndRight___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT__shiftAmount1;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT__shiftAmount2;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___shiftAmount1_T_1;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___shiftAmount2_T_1;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out1_T_60;
    SData/*12:0*/ MatchedRotateLeftAndRight__DOT___out2_T_60;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VMatchedRotateLeftAndRight__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VMatchedRotateLeftAndRight___024root(const char* name);
    ~VMatchedRotateLeftAndRight___024root();
    VL_UNCOPYABLE(VMatchedRotateLeftAndRight___024root);

    // INTERNAL METHODS
    void __Vconfigure(VMatchedRotateLeftAndRight__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
