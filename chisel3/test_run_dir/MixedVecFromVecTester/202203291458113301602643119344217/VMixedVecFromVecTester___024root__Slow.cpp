// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedVecFromVecTester.h for the primary calling header

#include "verilated.h"

#include "VMixedVecFromVecTester__Syms.h"
#include "VMixedVecFromVecTester___024root.h"

void VMixedVecFromVecTester___024root___ctor_var_reset(VMixedVecFromVecTester___024root* vlSelf);

VMixedVecFromVecTester___024root::VMixedVecFromVecTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VMixedVecFromVecTester___024root___ctor_var_reset(this);
}

void VMixedVecFromVecTester___024root::__Vconfigure(VMixedVecFromVecTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VMixedVecFromVecTester___024root::~VMixedVecFromVecTester___024root() {
}
