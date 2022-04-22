// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VWidthTester.h for the primary calling header

#include "verilated.h"

#include "VWidthTester__Syms.h"
#include "VWidthTester___024root.h"

void VWidthTester___024root___ctor_var_reset(VWidthTester___024root* vlSelf);

VWidthTester___024root::VWidthTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VWidthTester___024root___ctor_var_reset(this);
}

void VWidthTester___024root::__Vconfigure(VWidthTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VWidthTester___024root::~VWidthTester___024root() {
}
