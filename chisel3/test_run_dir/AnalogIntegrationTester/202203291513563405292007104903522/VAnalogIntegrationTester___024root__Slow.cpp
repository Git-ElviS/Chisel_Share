// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAnalogIntegrationTester.h for the primary calling header

#include "verilated.h"

#include "VAnalogIntegrationTester__Syms.h"
#include "VAnalogIntegrationTester___024root.h"

void VAnalogIntegrationTester___024root___ctor_var_reset(VAnalogIntegrationTester___024root* vlSelf);

VAnalogIntegrationTester___024root::VAnalogIntegrationTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VAnalogIntegrationTester___024root___ctor_var_reset(this);
}

void VAnalogIntegrationTester___024root::__Vconfigure(VAnalogIntegrationTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VAnalogIntegrationTester___024root::~VAnalogIntegrationTester___024root() {
}
