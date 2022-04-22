// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShiftResetTester.h for the primary calling header

#include "verilated.h"

#include "VShiftResetTester__Syms.h"
#include "VShiftResetTester___024root.h"

void VShiftResetTester___024root___ctor_var_reset(VShiftResetTester___024root* vlSelf);

VShiftResetTester___024root::VShiftResetTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VShiftResetTester___024root___ctor_var_reset(this);
}

void VShiftResetTester___024root::__Vconfigure(VShiftResetTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VShiftResetTester___024root::~VShiftResetTester___024root() {
}
