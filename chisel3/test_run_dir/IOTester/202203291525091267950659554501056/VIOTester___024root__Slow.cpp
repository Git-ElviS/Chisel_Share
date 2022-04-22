// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIOTester.h for the primary calling header

#include "verilated.h"

#include "VIOTester__Syms.h"
#include "VIOTester___024root.h"

void VIOTester___024root___ctor_var_reset(VIOTester___024root* vlSelf);

VIOTester___024root::VIOTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VIOTester___024root___ctor_var_reset(this);
}

void VIOTester___024root::__Vconfigure(VIOTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VIOTester___024root::~VIOTester___024root() {
}
