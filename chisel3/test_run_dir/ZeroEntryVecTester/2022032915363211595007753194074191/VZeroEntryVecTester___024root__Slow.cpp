// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VZeroEntryVecTester.h for the primary calling header

#include "verilated.h"

#include "VZeroEntryVecTester__Syms.h"
#include "VZeroEntryVecTester___024root.h"

void VZeroEntryVecTester___024root___ctor_var_reset(VZeroEntryVecTester___024root* vlSelf);

VZeroEntryVecTester___024root::VZeroEntryVecTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VZeroEntryVecTester___024root___ctor_var_reset(this);
}

void VZeroEntryVecTester___024root::__Vconfigure(VZeroEntryVecTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VZeroEntryVecTester___024root::~VZeroEntryVecTester___024root() {
}
