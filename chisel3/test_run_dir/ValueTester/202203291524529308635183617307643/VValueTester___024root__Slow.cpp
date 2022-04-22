// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VValueTester.h for the primary calling header

#include "verilated.h"

#include "VValueTester__Syms.h"
#include "VValueTester___024root.h"

void VValueTester___024root___ctor_var_reset(VValueTester___024root* vlSelf);

VValueTester___024root::VValueTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VValueTester___024root___ctor_var_reset(this);
}

void VValueTester___024root::__Vconfigure(VValueTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VValueTester___024root::~VValueTester___024root() {
}
