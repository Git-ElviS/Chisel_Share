// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPlaSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VPlaSpec_Anon__Syms.h"
#include "VPlaSpec_Anon___024root.h"

void VPlaSpec_Anon___024root___ctor_var_reset(VPlaSpec_Anon___024root* vlSelf);

VPlaSpec_Anon___024root::VPlaSpec_Anon___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VPlaSpec_Anon___024root___ctor_var_reset(this);
}

void VPlaSpec_Anon___024root::__Vconfigure(VPlaSpec_Anon__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VPlaSpec_Anon___024root::~VPlaSpec_Anon___024root() {
}
