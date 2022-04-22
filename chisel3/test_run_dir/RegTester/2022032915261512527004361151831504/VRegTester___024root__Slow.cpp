// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegTester.h for the primary calling header

#include "verilated.h"

#include "VRegTester__Syms.h"
#include "VRegTester___024root.h"

void VRegTester___024root___ctor_var_reset(VRegTester___024root* vlSelf);

VRegTester___024root::VRegTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VRegTester___024root___ctor_var_reset(this);
}

void VRegTester___024root::__Vconfigure(VRegTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VRegTester___024root::~VRegTester___024root() {
}
