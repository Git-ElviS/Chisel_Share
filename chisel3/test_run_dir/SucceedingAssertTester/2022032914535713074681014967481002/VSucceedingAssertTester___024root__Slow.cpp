// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSucceedingAssertTester.h for the primary calling header

#include "verilated.h"

#include "VSucceedingAssertTester__Syms.h"
#include "VSucceedingAssertTester___024root.h"

void VSucceedingAssertTester___024root___ctor_var_reset(VSucceedingAssertTester___024root* vlSelf);

VSucceedingAssertTester___024root::VSucceedingAssertTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSucceedingAssertTester___024root___ctor_var_reset(this);
}

void VSucceedingAssertTester___024root::__Vconfigure(VSucceedingAssertTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSucceedingAssertTester___024root::~VSucceedingAssertTester___024root() {
}
