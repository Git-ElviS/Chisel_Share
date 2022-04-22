// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStopTester.h for the primary calling header

#include "verilated.h"

#include "VStopTester__Syms.h"
#include "VStopTester___024root.h"

void VStopTester___024root___ctor_var_reset(VStopTester___024root* vlSelf);

VStopTester___024root::VStopTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VStopTester___024root___ctor_var_reset(this);
}

void VStopTester___024root::__Vconfigure(VStopTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VStopTester___024root::~VStopTester___024root() {
}
