// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VComplexAssignTester.h for the primary calling header

#include "verilated.h"

#include "VComplexAssignTester__Syms.h"
#include "VComplexAssignTester___024root.h"

void VComplexAssignTester___024root___ctor_var_reset(VComplexAssignTester___024root* vlSelf);

VComplexAssignTester___024root::VComplexAssignTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VComplexAssignTester___024root___ctor_var_reset(this);
}

void VComplexAssignTester___024root::__Vconfigure(VComplexAssignTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VComplexAssignTester___024root::~VComplexAssignTester___024root() {
}
