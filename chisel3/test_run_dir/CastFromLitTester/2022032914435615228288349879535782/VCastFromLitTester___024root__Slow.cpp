// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCastFromLitTester.h for the primary calling header

#include "verilated.h"

#include "VCastFromLitTester__Syms.h"
#include "VCastFromLitTester___024root.h"

void VCastFromLitTester___024root___ctor_var_reset(VCastFromLitTester___024root* vlSelf);

VCastFromLitTester___024root::VCastFromLitTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VCastFromLitTester___024root___ctor_var_reset(this);
}

void VCastFromLitTester___024root::__Vconfigure(VCastFromLitTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VCastFromLitTester___024root::~VCastFromLitTester___024root() {
}
