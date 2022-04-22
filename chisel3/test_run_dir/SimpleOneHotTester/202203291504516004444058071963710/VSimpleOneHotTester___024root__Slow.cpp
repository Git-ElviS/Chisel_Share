// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleOneHotTester.h for the primary calling header

#include "verilated.h"

#include "VSimpleOneHotTester__Syms.h"
#include "VSimpleOneHotTester___024root.h"

void VSimpleOneHotTester___024root___ctor_var_reset(VSimpleOneHotTester___024root* vlSelf);

VSimpleOneHotTester___024root::VSimpleOneHotTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSimpleOneHotTester___024root___ctor_var_reset(this);
}

void VSimpleOneHotTester___024root::__Vconfigure(VSimpleOneHotTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSimpleOneHotTester___024root::~VSimpleOneHotTester___024root() {
}
