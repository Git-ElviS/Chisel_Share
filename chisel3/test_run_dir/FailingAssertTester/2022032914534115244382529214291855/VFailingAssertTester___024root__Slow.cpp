// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFailingAssertTester.h for the primary calling header

#include "verilated.h"

#include "VFailingAssertTester__Syms.h"
#include "VFailingAssertTester___024root.h"

void VFailingAssertTester___024root___ctor_var_reset(VFailingAssertTester___024root* vlSelf);

VFailingAssertTester___024root::VFailingAssertTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VFailingAssertTester___024root___ctor_var_reset(this);
}

void VFailingAssertTester___024root::__Vconfigure(VFailingAssertTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VFailingAssertTester___024root::~VFailingAssertTester___024root() {
}
