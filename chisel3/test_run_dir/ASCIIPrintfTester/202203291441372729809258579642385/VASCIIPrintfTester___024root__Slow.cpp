// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VASCIIPrintfTester.h for the primary calling header

#include "verilated.h"

#include "VASCIIPrintfTester__Syms.h"
#include "VASCIIPrintfTester___024root.h"

void VASCIIPrintfTester___024root___ctor_var_reset(VASCIIPrintfTester___024root* vlSelf);

VASCIIPrintfTester___024root::VASCIIPrintfTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VASCIIPrintfTester___024root___ctor_var_reset(this);
}

void VASCIIPrintfTester___024root::__Vconfigure(VASCIIPrintfTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VASCIIPrintfTester___024root::~VASCIIPrintfTester___024root() {
}
