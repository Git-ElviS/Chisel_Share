// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNextTester.h for the primary calling header

#include "verilated.h"

#include "VNextTester__Syms.h"
#include "VNextTester___024root.h"

void VNextTester___024root___ctor_var_reset(VNextTester___024root* vlSelf);

VNextTester___024root::VNextTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VNextTester___024root___ctor_var_reset(this);
}

void VNextTester___024root::__Vconfigure(VNextTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VNextTester___024root::~VNextTester___024root() {
}
