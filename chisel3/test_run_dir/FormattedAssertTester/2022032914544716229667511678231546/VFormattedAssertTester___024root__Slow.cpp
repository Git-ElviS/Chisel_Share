// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFormattedAssertTester.h for the primary calling header

#include "verilated.h"

#include "VFormattedAssertTester__Syms.h"
#include "VFormattedAssertTester___024root.h"

void VFormattedAssertTester___024root___ctor_var_reset(VFormattedAssertTester___024root* vlSelf);

VFormattedAssertTester___024root::VFormattedAssertTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VFormattedAssertTester___024root___ctor_var_reset(this);
}

void VFormattedAssertTester___024root::__Vconfigure(VFormattedAssertTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VFormattedAssertTester___024root::~VFormattedAssertTester___024root() {
}
