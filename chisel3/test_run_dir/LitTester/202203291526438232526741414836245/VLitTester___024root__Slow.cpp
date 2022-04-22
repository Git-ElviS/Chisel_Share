// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLitTester.h for the primary calling header

#include "verilated.h"

#include "VLitTester__Syms.h"
#include "VLitTester___024root.h"

void VLitTester___024root___ctor_var_reset(VLitTester___024root* vlSelf);

VLitTester___024root::VLitTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VLitTester___024root___ctor_var_reset(this);
}

void VLitTester___024root::__Vconfigure(VLitTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VLitTester___024root::~VLitTester___024root() {
}
