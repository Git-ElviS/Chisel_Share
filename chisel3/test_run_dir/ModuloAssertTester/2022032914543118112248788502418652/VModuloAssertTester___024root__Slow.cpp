// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VModuloAssertTester.h for the primary calling header

#include "verilated.h"

#include "VModuloAssertTester__Syms.h"
#include "VModuloAssertTester___024root.h"

void VModuloAssertTester___024root___ctor_var_reset(VModuloAssertTester___024root* vlSelf);

VModuloAssertTester___024root::VModuloAssertTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VModuloAssertTester___024root___ctor_var_reset(this);
}

void VModuloAssertTester___024root::__Vconfigure(VModuloAssertTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VModuloAssertTester___024root::~VModuloAssertTester___024root() {
}
