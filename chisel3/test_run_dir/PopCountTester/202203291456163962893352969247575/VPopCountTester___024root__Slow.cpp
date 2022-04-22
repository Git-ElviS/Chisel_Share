// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPopCountTester.h for the primary calling header

#include "verilated.h"

#include "VPopCountTester__Syms.h"
#include "VPopCountTester___024root.h"

void VPopCountTester___024root___ctor_var_reset(VPopCountTester___024root* vlSelf);

VPopCountTester___024root::VPopCountTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VPopCountTester___024root___ctor_var_reset(this);
}

void VPopCountTester___024root::__Vconfigure(VPopCountTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VPopCountTester___024root::~VPopCountTester___024root() {
}
