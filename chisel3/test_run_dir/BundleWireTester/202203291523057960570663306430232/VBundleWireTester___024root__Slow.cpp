// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBundleWireTester.h for the primary calling header

#include "verilated.h"

#include "VBundleWireTester__Syms.h"
#include "VBundleWireTester___024root.h"

void VBundleWireTester___024root___ctor_var_reset(VBundleWireTester___024root* vlSelf);

VBundleWireTester___024root::VBundleWireTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VBundleWireTester___024root___ctor_var_reset(this);
}

void VBundleWireTester___024root::__Vconfigure(VBundleWireTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VBundleWireTester___024root::~VBundleWireTester___024root() {
}
