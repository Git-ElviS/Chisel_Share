// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEnumOpsTester.h for the primary calling header

#include "verilated.h"

#include "VEnumOpsTester__Syms.h"
#include "VEnumOpsTester___024root.h"

void VEnumOpsTester___024root___ctor_var_reset(VEnumOpsTester___024root* vlSelf);

VEnumOpsTester___024root::VEnumOpsTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VEnumOpsTester___024root___ctor_var_reset(this);
}

void VEnumOpsTester___024root::__Vconfigure(VEnumOpsTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VEnumOpsTester___024root::~VEnumOpsTester___024root() {
}
