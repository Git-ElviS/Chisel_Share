// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiIOTester.h for the primary calling header

#include "verilated.h"

#include "VMultiIOTester__Syms.h"
#include "VMultiIOTester___024root.h"

void VMultiIOTester___024root___ctor_var_reset(VMultiIOTester___024root* vlSelf);

VMultiIOTester___024root::VMultiIOTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VMultiIOTester___024root___ctor_var_reset(this);
}

void VMultiIOTester___024root::__Vconfigure(VMultiIOTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VMultiIOTester___024root::~VMultiIOTester___024root() {
}
