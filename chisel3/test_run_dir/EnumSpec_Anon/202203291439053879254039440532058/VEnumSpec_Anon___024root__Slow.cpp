// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEnumSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VEnumSpec_Anon__Syms.h"
#include "VEnumSpec_Anon___024root.h"

void VEnumSpec_Anon___024root___ctor_var_reset(VEnumSpec_Anon___024root* vlSelf);

VEnumSpec_Anon___024root::VEnumSpec_Anon___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VEnumSpec_Anon___024root___ctor_var_reset(this);
}

void VEnumSpec_Anon___024root::__Vconfigure(VEnumSpec_Anon__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VEnumSpec_Anon___024root::~VEnumSpec_Anon___024root() {
}
