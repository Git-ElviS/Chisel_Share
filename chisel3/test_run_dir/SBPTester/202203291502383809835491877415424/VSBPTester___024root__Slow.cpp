// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSBPTester.h for the primary calling header

#include "verilated.h"

#include "VSBPTester__Syms.h"
#include "VSBPTester___024root.h"

void VSBPTester___024root___ctor_var_reset(VSBPTester___024root* vlSelf);

VSBPTester___024root::VSBPTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSBPTester___024root___ctor_var_reset(this);
}

void VSBPTester___024root::__Vconfigure(VSBPTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSBPTester___024root::~VSBPTester___024root() {
}
