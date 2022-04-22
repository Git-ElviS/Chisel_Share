// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VResetTester.h for the primary calling header

#include "verilated.h"

#include "VResetTester__Syms.h"
#include "VResetTester___024root.h"

void VResetTester___024root___ctor_var_reset(VResetTester___024root* vlSelf);

VResetTester___024root::VResetTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VResetTester___024root___ctor_var_reset(this);
}

void VResetTester___024root::__Vconfigure(VResetTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VResetTester___024root::~VResetTester___024root() {
}
