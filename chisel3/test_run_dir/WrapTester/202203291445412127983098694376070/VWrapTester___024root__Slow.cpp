// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWrapTester.h for the primary calling header

#include "verilated.h"

#include "VWrapTester__Syms.h"
#include "VWrapTester___024root.h"

void VWrapTester___024root___ctor_var_reset(VWrapTester___024root* vlSelf);

VWrapTester___024root::VWrapTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VWrapTester___024root___ctor_var_reset(this);
}

void VWrapTester___024root::__Vconfigure(VWrapTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VWrapTester___024root::~VWrapTester___024root() {
}
