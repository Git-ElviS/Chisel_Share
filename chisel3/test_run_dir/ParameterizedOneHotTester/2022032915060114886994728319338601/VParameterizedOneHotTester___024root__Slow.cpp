// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VParameterizedOneHotTester.h for the primary calling header

#include "verilated.h"

#include "VParameterizedOneHotTester__Syms.h"
#include "VParameterizedOneHotTester___024root.h"

void VParameterizedOneHotTester___024root___ctor_var_reset(VParameterizedOneHotTester___024root* vlSelf);

VParameterizedOneHotTester___024root::VParameterizedOneHotTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VParameterizedOneHotTester___024root___ctor_var_reset(this);
}

void VParameterizedOneHotTester___024root::__Vconfigure(VParameterizedOneHotTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VParameterizedOneHotTester___024root::~VParameterizedOneHotTester___024root() {
}
