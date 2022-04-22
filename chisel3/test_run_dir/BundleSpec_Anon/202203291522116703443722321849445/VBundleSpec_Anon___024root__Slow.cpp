// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBundleSpec_Anon.h for the primary calling header

#include "verilated.h"

#include "VBundleSpec_Anon__Syms.h"
#include "VBundleSpec_Anon___024root.h"

void VBundleSpec_Anon___024root___ctor_var_reset(VBundleSpec_Anon___024root* vlSelf);

VBundleSpec_Anon___024root::VBundleSpec_Anon___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VBundleSpec_Anon___024root___ctor_var_reset(this);
}

void VBundleSpec_Anon___024root::__Vconfigure(VBundleSpec_Anon__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VBundleSpec_Anon___024root::~VBundleSpec_Anon___024root() {
}
