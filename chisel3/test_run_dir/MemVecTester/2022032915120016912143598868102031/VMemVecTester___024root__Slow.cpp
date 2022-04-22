// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMemVecTester.h for the primary calling header

#include "verilated.h"

#include "VMemVecTester__Syms.h"
#include "VMemVecTester___024root.h"

void VMemVecTester___024root___ctor_var_reset(VMemVecTester___024root* vlSelf);

VMemVecTester___024root::VMemVecTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VMemVecTester___024root___ctor_var_reset(this);
}

void VMemVecTester___024root::__Vconfigure(VMemVecTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VMemVecTester___024root::~VMemVecTester___024root() {
}
