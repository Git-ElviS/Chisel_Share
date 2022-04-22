// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMuxTester.h for the primary calling header

#include "verilated.h"

#include "VMuxTester__Syms.h"
#include "VMuxTester___024root.h"

void VMuxTester___024root___ctor_var_reset(VMuxTester___024root* vlSelf);

VMuxTester___024root::VMuxTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VMuxTester___024root___ctor_var_reset(this);
}

void VMuxTester___024root::__Vconfigure(VMuxTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VMuxTester___024root::~VMuxTester___024root() {
}
