// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWhenCondTester.h for the primary calling header

#include "verilated.h"

#include "VWhenCondTester__Syms.h"
#include "VWhenCondTester___024root.h"

void VWhenCondTester___024root___ctor_var_reset(VWhenCondTester___024root* vlSelf);

VWhenCondTester___024root::VWhenCondTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VWhenCondTester___024root___ctor_var_reset(this);
}

void VWhenCondTester___024root::__Vconfigure(VWhenCondTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VWhenCondTester___024root::~VWhenCondTester___024root() {
}
