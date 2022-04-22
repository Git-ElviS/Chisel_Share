// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComposedMultiIOTester.h for the primary calling header

#include "verilated.h"

#include "VComposedMultiIOTester__Syms.h"
#include "VComposedMultiIOTester___024root.h"

void VComposedMultiIOTester___024root___ctor_var_reset(VComposedMultiIOTester___024root* vlSelf);

VComposedMultiIOTester___024root::VComposedMultiIOTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VComposedMultiIOTester___024root___ctor_var_reset(this);
}

void VComposedMultiIOTester___024root::__Vconfigure(VComposedMultiIOTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VComposedMultiIOTester___024root::~VComposedMultiIOTester___024root() {
}
