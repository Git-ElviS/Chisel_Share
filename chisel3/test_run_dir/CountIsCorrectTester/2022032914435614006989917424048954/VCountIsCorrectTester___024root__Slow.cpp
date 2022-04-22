// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCountIsCorrectTester.h for the primary calling header

#include "verilated.h"

#include "VCountIsCorrectTester__Syms.h"
#include "VCountIsCorrectTester___024root.h"

void VCountIsCorrectTester___024root___ctor_var_reset(VCountIsCorrectTester___024root* vlSelf);

VCountIsCorrectTester___024root::VCountIsCorrectTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VCountIsCorrectTester___024root___ctor_var_reset(this);
}

void VCountIsCorrectTester___024root::__Vconfigure(VCountIsCorrectTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VCountIsCorrectTester___024root::~VCountIsCorrectTester___024root() {
}
