// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VClockAsUIntTester.h for the primary calling header

#include "verilated.h"

#include "VClockAsUIntTester__Syms.h"
#include "VClockAsUIntTester___024root.h"

void VClockAsUIntTester___024root___ctor_var_reset(VClockAsUIntTester___024root* vlSelf);

VClockAsUIntTester___024root::VClockAsUIntTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VClockAsUIntTester___024root___ctor_var_reset(this);
}

void VClockAsUIntTester___024root::__Vconfigure(VClockAsUIntTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VClockAsUIntTester___024root::~VClockAsUIntTester___024root() {
}
