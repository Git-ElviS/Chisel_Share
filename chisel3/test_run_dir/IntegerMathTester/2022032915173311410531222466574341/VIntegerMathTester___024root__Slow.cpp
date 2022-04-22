// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntegerMathTester.h for the primary calling header

#include "verilated.h"

#include "VIntegerMathTester__Syms.h"
#include "VIntegerMathTester___024root.h"

void VIntegerMathTester___024root___ctor_var_reset(VIntegerMathTester___024root* vlSelf);

VIntegerMathTester___024root::VIntegerMathTester___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VIntegerMathTester___024root___ctor_var_reset(this);
}

void VIntegerMathTester___024root::__Vconfigure(VIntegerMathTester__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VIntegerMathTester___024root::~VIntegerMathTester___024root() {
}
