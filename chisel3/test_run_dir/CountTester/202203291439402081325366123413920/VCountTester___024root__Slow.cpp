// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCountTester.h for the primary calling header

#include "verilated.h"

#include "VCountTester__Syms.h"
#include "VCountTester___024root.h"

void VCountTester___024root___ctor_var_reset(VCountTester___024root* vlSelf);

VCountTester___024root::VCountTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VCountTester___024root___ctor_var_reset(this);
}

void VCountTester___024root::__Vconfigure(VCountTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VCountTester___024root::~VCountTester___024root() {
}
