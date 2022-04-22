// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEnableTester.h for the primary calling header

#include "verilated.h"

#include "VEnableTester__Syms.h"
#include "VEnableTester___024root.h"

void VEnableTester___024root___ctor_var_reset(VEnableTester___024root* vlSelf);

VEnableTester___024root::VEnableTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VEnableTester___024root___ctor_var_reset(this);
}

void VEnableTester___024root::__Vconfigure(VEnableTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VEnableTester___024root::~VEnableTester___024root() {
}
