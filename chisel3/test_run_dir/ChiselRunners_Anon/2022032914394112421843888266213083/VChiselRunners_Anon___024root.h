// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VChiselRunners_Anon.h for the primary calling header

#ifndef VERILATED_VCHISELRUNNERS_ANON___024ROOT_H_
#define VERILATED_VCHISELRUNNERS_ANON___024ROOT_H_  // guard

#include "verilated.h"

class VChiselRunners_Anon__Syms;
VL_MODULE(VChiselRunners_Anon___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ ChiselRunners_Anon__DOT__done_value;
    CData/*0:0*/ ChiselRunners_Anon__DOT___done_wrap_value_T_1;
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    VChiselRunners_Anon__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VChiselRunners_Anon___024root(const char* name);
    ~VChiselRunners_Anon___024root();
    VL_UNCOPYABLE(VChiselRunners_Anon___024root);

    // INTERNAL METHODS
    void __Vconfigure(VChiselRunners_Anon__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
