// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIsOneOfTester.h for the primary calling header

#include "verilated.h"

#include "VIsOneOfTester__Syms.h"
#include "VIsOneOfTester___024root.h"

void VIsOneOfTester___024root___ctor_var_reset(VIsOneOfTester___024root* vlSelf);

VIsOneOfTester___024root::VIsOneOfTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VIsOneOfTester___024root___ctor_var_reset(this);
}

void VIsOneOfTester___024root::__Vconfigure(VIsOneOfTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VIsOneOfTester___024root::~VIsOneOfTester___024root() {
}
