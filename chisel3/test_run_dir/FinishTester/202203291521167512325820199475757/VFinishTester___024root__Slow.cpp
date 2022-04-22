// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFinishTester.h for the primary calling header

#include "verilated.h"

#include "VFinishTester__Syms.h"
#include "VFinishTester___024root.h"

void VFinishTester___024root___ctor_var_reset(VFinishTester___024root* vlSelf);

VFinishTester___024root::VFinishTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VFinishTester___024root___ctor_var_reset(this);
}

void VFinishTester___024root::__Vconfigure(VFinishTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VFinishTester___024root::~VFinishTester___024root() {
}
