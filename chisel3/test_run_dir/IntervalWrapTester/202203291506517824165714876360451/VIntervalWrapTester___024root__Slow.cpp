// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntervalWrapTester.h for the primary calling header

#include "verilated.h"

#include "VIntervalWrapTester__Syms.h"
#include "VIntervalWrapTester___024root.h"

void VIntervalWrapTester___024root___ctor_var_reset(VIntervalWrapTester___024root* vlSelf);

VIntervalWrapTester___024root::VIntervalWrapTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VIntervalWrapTester___024root___ctor_var_reset(this);
}

void VIntervalWrapTester___024root::__Vconfigure(VIntervalWrapTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VIntervalWrapTester___024root::~VIntervalWrapTester___024root() {
}
