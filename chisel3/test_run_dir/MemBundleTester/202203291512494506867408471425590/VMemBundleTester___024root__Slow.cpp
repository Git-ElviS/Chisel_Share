// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemBundleTester.h for the primary calling header

#include "verilated.h"

#include "VMemBundleTester__Syms.h"
#include "VMemBundleTester___024root.h"

void VMemBundleTester___024root___ctor_var_reset(VMemBundleTester___024root* vlSelf);

VMemBundleTester___024root::VMemBundleTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VMemBundleTester___024root___ctor_var_reset(this);
}

void VMemBundleTester___024root::__Vconfigure(VMemBundleTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VMemBundleTester___024root::~VMemBundleTester___024root() {
}
