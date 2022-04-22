// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTabulateTester.h for the primary calling header

#include "verilated.h"

#include "VTabulateTester__Syms.h"
#include "VTabulateTester___024root.h"

void VTabulateTester___024root___ctor_var_reset(VTabulateTester___024root* vlSelf);

VTabulateTester___024root::VTabulateTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VTabulateTester___024root___ctor_var_reset(this);
}

void VTabulateTester___024root::__Vconfigure(VTabulateTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VTabulateTester___024root::~VTabulateTester___024root() {
}
