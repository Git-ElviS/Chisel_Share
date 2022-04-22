// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIsLitTester.h for the primary calling header

#include "verilated.h"

#include "VIsLitTester__Syms.h"
#include "VIsLitTester___024root.h"

void VIsLitTester___024root___ctor_var_reset(VIsLitTester___024root* vlSelf);

VIsLitTester___024root::VIsLitTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VIsLitTester___024root___ctor_var_reset(this);
}

void VIsLitTester___024root::__Vconfigure(VIsLitTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VIsLitTester___024root::~VIsLitTester___024root() {
}
