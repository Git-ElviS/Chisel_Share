// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBundleSerializationTest.h for the primary calling header

#include "verilated.h"

#include "VBundleSerializationTest__Syms.h"
#include "VBundleSerializationTest___024root.h"

void VBundleSerializationTest___024root___ctor_var_reset(VBundleSerializationTest___024root* vlSelf);

VBundleSerializationTest___024root::VBundleSerializationTest___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VBundleSerializationTest___024root___ctor_var_reset(this);
}

void VBundleSerializationTest___024root::__Vconfigure(VBundleSerializationTest__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VBundleSerializationTest___024root::~VBundleSerializationTest___024root() {
}
