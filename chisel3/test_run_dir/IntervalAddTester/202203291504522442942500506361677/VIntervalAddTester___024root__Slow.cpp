// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalAddTester.h for the primary calling header

#include "verilated.h"

#include "VIntervalAddTester__Syms.h"
#include "VIntervalAddTester___024root.h"

void VIntervalAddTester___024root___ctor_var_reset(VIntervalAddTester___024root* vlSelf);

VIntervalAddTester___024root::VIntervalAddTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VIntervalAddTester___024root___ctor_var_reset(this);
}

void VIntervalAddTester___024root::__Vconfigure(VIntervalAddTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VIntervalAddTester___024root::~VIntervalAddTester___024root() {
}
