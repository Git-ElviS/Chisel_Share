// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCrossConnectTester.h for the primary calling header

#include "verilated.h"

#include "VCrossConnectTester__Syms.h"
#include "VCrossConnectTester___024root.h"

void VCrossConnectTester___024root___ctor_var_reset(VCrossConnectTester___024root* vlSelf);

VCrossConnectTester___024root::VCrossConnectTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VCrossConnectTester___024root___ctor_var_reset(this);
}

void VCrossConnectTester___024root::__Vconfigure(VCrossConnectTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VCrossConnectTester___024root::~VCrossConnectTester___024root() {
}
