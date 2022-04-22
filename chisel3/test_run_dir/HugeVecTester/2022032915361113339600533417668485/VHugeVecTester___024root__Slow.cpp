// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHugeVecTester.h for the primary calling header

#include "verilated.h"

#include "VHugeVecTester__Syms.h"
#include "VHugeVecTester___024root.h"

void VHugeVecTester___024root___ctor_var_reset(VHugeVecTester___024root* vlSelf);

VHugeVecTester___024root::VHugeVecTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VHugeVecTester___024root___ctor_var_reset(this);
}

void VHugeVecTester___024root::__Vconfigure(VHugeVecTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VHugeVecTester___024root::~VHugeVecTester___024root() {
}
