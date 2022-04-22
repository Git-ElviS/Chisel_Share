// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWhenTester.h for the primary calling header

#include "verilated.h"

#include "VWhenTester__Syms.h"
#include "VWhenTester___024root.h"

void VWhenTester___024root___ctor_var_reset(VWhenTester___024root* vlSelf);

VWhenTester___024root::VWhenTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VWhenTester___024root___ctor_var_reset(this);
}

void VWhenTester___024root::__Vconfigure(VWhenTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VWhenTester___024root::~VWhenTester___024root() {
}
