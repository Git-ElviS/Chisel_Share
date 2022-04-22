// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSIntOneHotTester.h for the primary calling header

#include "verilated.h"

#include "VSIntOneHotTester__Syms.h"
#include "VSIntOneHotTester___024root.h"

void VSIntOneHotTester___024root___ctor_var_reset(VSIntOneHotTester___024root* vlSelf);

VSIntOneHotTester___024root::VSIntOneHotTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSIntOneHotTester___024root___ctor_var_reset(this);
}

void VSIntOneHotTester___024root::__Vconfigure(VSIntOneHotTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSIntOneHotTester___024root::~VSIntOneHotTester___024root() {
}
