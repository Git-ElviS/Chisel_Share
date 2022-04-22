// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopTester.h for the primary calling header

#include "verilated.h"

#include "VTopTester__Syms.h"
#include "VTopTester___024root.h"

void VTopTester___024root___ctor_var_reset(VTopTester___024root* vlSelf);

VTopTester___024root::VTopTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VTopTester___024root___ctor_var_reset(this);
}

void VTopTester___024root::__Vconfigure(VTopTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VTopTester___024root::~VTopTester___024root() {
}
