// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRangeTester.h for the primary calling header

#include "verilated.h"

#include "VRangeTester__Syms.h"
#include "VRangeTester___024root.h"

void VRangeTester___024root___ctor_var_reset(VRangeTester___024root* vlSelf);

VRangeTester___024root::VRangeTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VRangeTester___024root___ctor_var_reset(this);
}

void VRangeTester___024root::__Vconfigure(VRangeTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VRangeTester___024root::~VRangeTester___024root() {
}
