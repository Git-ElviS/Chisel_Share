// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBundleToUnitTester.h for the primary calling header

#include "verilated.h"

#include "VBundleToUnitTester__Syms.h"
#include "VBundleToUnitTester___024root.h"

void VBundleToUnitTester___024root___ctor_var_reset(VBundleToUnitTester___024root* vlSelf);

VBundleToUnitTester___024root::VBundleToUnitTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VBundleToUnitTester___024root___ctor_var_reset(this);
}

void VBundleToUnitTester___024root::__Vconfigure(VBundleToUnitTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VBundleToUnitTester___024root::~VBundleToUnitTester___024root() {
}
