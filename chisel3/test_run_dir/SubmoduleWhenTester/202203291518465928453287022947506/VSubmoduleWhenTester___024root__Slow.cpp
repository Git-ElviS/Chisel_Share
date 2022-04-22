// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSubmoduleWhenTester.h for the primary calling header

#include "verilated.h"

#include "VSubmoduleWhenTester__Syms.h"
#include "VSubmoduleWhenTester___024root.h"

void VSubmoduleWhenTester___024root___ctor_var_reset(VSubmoduleWhenTester___024root* vlSelf);

VSubmoduleWhenTester___024root::VSubmoduleWhenTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSubmoduleWhenTester___024root___ctor_var_reset(this);
}

void VSubmoduleWhenTester___024root::__Vconfigure(VSubmoduleWhenTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSubmoduleWhenTester___024root::~VSubmoduleWhenTester___024root() {
}
