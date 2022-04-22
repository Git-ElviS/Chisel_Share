// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VThingsPassThroughTester.h for the primary calling header

#include "verilated.h"

#include "VThingsPassThroughTester__Syms.h"
#include "VThingsPassThroughTester___024root.h"

void VThingsPassThroughTester___024root___ctor_var_reset(VThingsPassThroughTester___024root* vlSelf);

VThingsPassThroughTester___024root::VThingsPassThroughTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VThingsPassThroughTester___024root___ctor_var_reset(this);
}

void VThingsPassThroughTester___024root::__Vconfigure(VThingsPassThroughTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VThingsPassThroughTester___024root::~VThingsPassThroughTester___024root() {
}
