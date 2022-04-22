// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLastAssignTester.h for the primary calling header

#include "verilated.h"

#include "VLastAssignTester__Syms.h"
#include "VLastAssignTester___024root.h"

void VLastAssignTester___024root___ctor_var_reset(VLastAssignTester___024root* vlSelf);

VLastAssignTester___024root::VLastAssignTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VLastAssignTester___024root___ctor_var_reset(this);
}

void VLastAssignTester___024root::__Vconfigure(VLastAssignTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VLastAssignTester___024root::~VLastAssignTester___024root() {
}
