// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIterateTester.h for the primary calling header

#include "verilated.h"

#include "VIterateTester__Syms.h"
#include "VIterateTester___024root.h"

void VIterateTester___024root___ctor_var_reset(VIterateTester___024root* vlSelf);

VIterateTester___024root::VIterateTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VIterateTester___024root___ctor_var_reset(this);
}

void VIterateTester___024root::__Vconfigure(VIterateTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VIterateTester___024root::~VIterateTester___024root() {
}
