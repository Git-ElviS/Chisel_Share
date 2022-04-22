// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShiftTester.h for the primary calling header

#include "verilated.h"

#include "VShiftTester__Syms.h"
#include "VShiftTester___024root.h"

void VShiftTester___024root___ctor_var_reset(VShiftTester___024root* vlSelf);

VShiftTester___024root::VShiftTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VShiftTester___024root___ctor_var_reset(this);
}

void VShiftTester___024root::__Vconfigure(VShiftTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VShiftTester___024root::~VShiftTester___024root() {
}
